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
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       vll vec;
       set<ll>s1,s2;
       ll mx=minf;
       for(ll i=0;i<n;i++)
       {
          ll num;
          cin>>num;
          vec.pb(num);
          mx=max(mx,num); 
       }
       for(ll i=1;i<n;i++)
       {
           if(vec[i-1]<=vec[i])
           s1.insert(vec[i]-vec[i-1]);
           else 
           s2.insert(vec[i-1]-vec[i]);
       }
       //cout<<*s1.begin()<<" "<<*s2.begin()<<endl;
        if(s1.size()>1||s2.size()>1)cout<<-1<<endl;
       else if(s1.size()==0||s2.size()==0)cout<<0<<endl;
       else
       {
           ll m=*s1.begin()+*s2.begin();
           if(m<=mx)
               cout<<-1<<endl;
            else
            cout<<m<<" "<<*s1.begin()<<endl;
       }
   }
     
}