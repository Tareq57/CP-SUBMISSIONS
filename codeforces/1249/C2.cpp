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
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
ll ceil(ll p,ll q)
{
    ll r=p/q;
    if(p%q)
    r++;
    return r;
}
int main()
{
   ull t;
   cin>>t;
   while(t--)
   {
       ull n;
       cin>>n;
       vector<ull> vec;
       while(n>0)
       {
           ull p=n%3;
           vec.pb(p);
           n/=3;
       } 
      // reverse(vec.begin(),vec.end());
       ull res=0;
       set<ull>zero,two;
       for(ull i=0;i<vec.size();i++)
       {
           if(vec[i]==0)
               zero.insert(i);
           else if(vec[i]==2)
               two.insert(i);
       }
       while(!two.empty())
       {
           auto i=*two.begin();
           two.erase(i);
           auto it=up(zero.begin(),zero.end(),i);
           if(zero.end()==it)
           {
               for(ull j=0;j<vec.size();j++)
               {
                   vec[j]=0;
                   zero.insert(j);
               }
               vec.pb(1);
               break;
           }
           else
           {
               vec[*it]=1;
               for(ull j=0;j<*it;j++)
               {
                   if(vec[j]==2)
                   {
                           two.erase(j);
                   }
                   vec[j]=0;
                   zero.insert(j);
               }
           }
       }
       for(ull i=0;i<vec.size();i++)
       {
           ull p=1;
           for(ull j=0;j<i;j++)
           {
               p*=3;
           }
           res+=(vec[i]*p);
       }
       cout<<res<<endl;

   }
     
}