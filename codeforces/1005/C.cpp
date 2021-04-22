//BISMILLAH
//RABBI JIDNI ILMA
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define ull  unsigned long long
#define vll  vector <long long>
#define pll pair <long long,long long>
#define f first
#define s second
#define up upper_bound
#define lp lower_bound
#define pq priority_queue
#define inf 1e10
#define minf -1e15
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define N 1000000
bool marked[N];
bool isPrime(int n) {
  if (n < 2) return false;
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
vll sieve(int n) {
    vll vec;
  for (int i = 2; i * i <= n; i++) {
    if (marked[i] == false) { 
      for (int j = i * i; j <= n; j += i) {
        marked[j] = true;
      }
    }
  }
  for(ll i=1;i<=n;i++)
  {
      if(marked[i]==false)
      {
          vec.pb(i);
      }
  }
  return vec;
}
ll countDivisor(ll n) {
  ll divisor = 0;
  for (ll i = 1; i * i <= n; i++) {
    if (i * i == n){
      divisor += 1;
    }else if (n % i == 0) {
      divisor += 2;
      
    }
  }
  return divisor;
  
}
set<ll> prime_factors(ll n)
{
  set<ll> ss;
  for(ll i=2;i*i<=n;i++)
  {
    if(n%i==0)
    {
      while(n%i==0)
      n/=i;
      ss.insert(i);
    }
  }
  if(n>1)ss.insert(n);
  return ss;
}
ll euler_phi (ll n) {
  ll ret = n;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
      }
      ret -= ret / i; 
    }
  }
  if (n > 1) ret -= ret / n;
  return ret;
}
pll extendedEuclid(ll a, ll b) {
  if(b == 0) return pll(1, 0);
  else {
    pll d = extendedEuclid(b, a % b);
    return pll(d.s, d.f - d.s * (a / b));
  }
}
ll modularInverse(ll a, ll n) {
  pll ret = extendedEuclid(a, n);
  return ((ret.f % n) + n) % n;
}
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1 % M;
    ll x = bigmod(a, b/2, M);
    x = (x*x)%M;
    if(b%2 == 1) x = (x*a)%M;
    return x;
}
int main()
{
  fastio
  ll power[31];
  for(ll i=0;i<31;i++)
    power[i]=((ll)pow(2,i));
  ll cnt=0;
  ll n;
  cin>>n;
  ll vec[n+1];
  map<ll,ll>mapp;
  for(ll i=0;i<n;i++)
  {
    ll num;
    cin>>num;
    vec[i]=num;
    mapp[num]=mapp[num]+1;
  }
  for(ll i=0;i<n;i++)
  {
    bool ok=true;
    for(ll j=0;j<31;j++)
    {
      ll p=power[j]-vec[i];
      if(mapp[p]>1||(p!=vec[i]&&mapp[p]))
      {
        ok=false;
        break;
      }
    }
    if(ok)
    cnt++;
  }
  printf("%d\n",cnt);



}