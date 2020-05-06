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
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll n,res=0;
    cin>>n;
    vll vec;
    vll stu;
    vll ::iterator it;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
   for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        stu.pb(vec[i]-num);
    }
   sort(stu.begin(),stu.end());
   for(ll i=0;i<n;i++)
   {
       if(stu[i]>0)
        res+=(stu.size()-i-1);
       else
       {
           it=up(stu.begin()+i+1,stu.end(),0-stu[i]);
           res+=distance(it,stu.end());
       }
   }
   cout<<res<<endl;


}
