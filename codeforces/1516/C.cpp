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
bool knapsack(vll vec,ll n,ll k)
{
  ll dp[n+1][k+1];
  for(ll i=0;i<=k;i++)
  {
    dp[0][i]=0;
  }
  for(ll i=0;i<=n;i++)
  {
    dp[i][0]=0;
  }
  for(ll i=1;i<=n;i++)
  {
    for(ll j=1;j<=k;j++)
    {
      if(j-vec[i]<0)
      dp[i][j]=dp[i-1][j];
      else
      {
        dp[i][j]=max(vec[i]+dp[i-1][j-vec[i]],dp[i-1][j]);
      }
    }
  }
  if(dp[n][k]==k)
  return true;
  else
  return false;
}
int main()
{
  fastio
  ll n;
  cin>>n;
  vll vec(n+1);
  ll sum=0;
  ll pos=-1;
  for(ll i=1;i<=n;i++)
  {
    ll num;
    cin>>num;
    vec[i]=num;
    sum+=num;
    if(num%2)pos=i;
  }
  vll ara=vec;
  sort(ara.begin()+1,ara.end());
  if(sum&1)
  {
    cout<<0<<endl;
  }
  else
  {
    if(!knapsack(ara,n,sum/2))
    {
      cout<<0<<endl;
      return 0;
    }
    if(pos!=-1)
    {
      cout<<1<<endl<<pos<<endl;
      return 0;
    }
    for(ll i=1;i<=n;i++)
    {
      vll para(n);
      ll idx=1;
      for(ll j=1;j<=n;j++)
      {
        if(j==i)
        continue;
        para[idx]=vec[j];
        idx++;
      }
      if(!knapsack(para,n-1,(sum-vec[i])/2))
      {
        cout<<1<<endl<<i<<endl;
        return 0;
      }
    }
  }

  

}