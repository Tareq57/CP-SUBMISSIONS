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
   ll t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       ll res=0;
       while(n>1)
       {
           ll h=1,ans=0;
           while(ans<n)
           {
              ans=(2*h+(h-1));
              h++;
              if(n>=ans)
              {
                  n-=ans;
              }
              else
                break;
           }
           res++;
       }
       cout<<res<<endl;
   }

}
