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
set<ll>s;
void recur(ll l,ll r,ll ara[],ll vec[])
{
   if(l>r)
   return ;
   else if(l==r)
   {
      s.insert(vec[l]);
      //cout<<90<<endl;
      return ;
   }
   else if(vec[l]==vec[r])
   {
      s.insert(vec[r]*(r-l+1));
      
      return ;
   }
   else
   {
      ll mid=(vec[l]+vec[r])/2;
      auto it=up(vec+l,vec+r,mid)-vec;
      it--;
      ll left=ara[it]-ara[l]+vec[l];
      ll right=ara[r]-ara[it];
      s.insert(left);
      s.insert(right);
      recur(l,it,ara,vec);
      recur(it+1,r,ara,vec);
     // cout<<00<<endl;
      return ;
   }
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
         ll n,q;
         s.clear();
         cin>>n>>q;
         ll vec[n+2];
       // map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>vec[i];
            //mp[i]=num;
        }
        sort(vec,vec+n);
        ll ara[n+2]={0};
        ara[0]=vec[0];
        for(ll i=1;i<n;i++)
        {
           ara[i]+=(ara[i-1]+vec[i]);
        }
        s.insert(ara[n-1]);
        recur(0,n-1,ara,vec);
        while(q--)
        {
           ll sum;
           cin>>sum;
           if(s.find(sum)!=s.end())cout<<"YES"<<"\n";
           else
           cout<<"NO"<<"\n";
        }
       
    }
}
 