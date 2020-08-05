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
#define minf -1e10
#define pi 3.14159265
#define mod 1000000000
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
int main()
{
   ll n,m;
   cin>>n>>m;
   vector<pll>vec;
   for(ll i=0;i<n;i++)
   {
       ll num1,num2;
       cin>>num1>>num2;
       if(num1>=m)
       {
           vec.pb(mp(num1,i+1));
       }
       else
       {
           ll p=m-num1;
           ll r=p/num2;
           if(p%num2!=0)
           r++;
           vec.pb(mp(num1+r*num2,i+1));
       }
   }
   sort(vec.begin(),vec.end());
   cout<<vec[0].s<<endl;

}
