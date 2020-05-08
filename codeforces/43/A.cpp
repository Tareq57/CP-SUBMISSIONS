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
int main()
{
   ll n;
   cin>>n;
   vector <string> vec;
   string str,an;
   cin>>str;
   vec.pb(str);
   ll ans1=1,ans2=0;
   for(ll i=1;i<n;i++)
   {
       cin>>str;
       if(str==vec[0])
       {
           ans1++;
       }
       else
       {
           an=str;
           ans2++;
       }
   }
   if(ans1>ans2)
    cout<<vec[0]<<endl;
   else
    cout<<an<<endl;

}
