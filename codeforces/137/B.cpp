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
#define pq priority_queue
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll n;
    cin>>n;
    vll vec;
    set <ll> s;
    set <ll> ::iterator it;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
        s.insert(num);
    }
    ll ans=0;
   ans+=(vec.size()-s.size());
   for(it=s.begin();it!=s.end();it++)
   {
       if(*it>n)
        ans++;

   }

    cout<<ans<<endl;
}

