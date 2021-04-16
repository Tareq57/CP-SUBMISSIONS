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
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,ss;
        cin>>n>>l>>r>>ss;
        ll p=r-l+1;
        ll lo=(p*(p+1))/2;
        ll hi=p*n-(p*(p-1))/2;
        if(ss<lo||ss>hi)
        {
            cout<<-1<<endl;
        }
        else
        {
            vll vec;
            for(ll i=1;i<=p;i++)
            {
                vec.pb(i);
            }
            while(lo!=ss)
            {
                for(ll i=vec.size()-1;i>=0;i--)
                {
                    if(lo==ss)
                    break;
                    lo++;
                    vec[i]++;
                }
            }
            ll ara[n+1]={0};
            vll res;
            for(ll i=0;i<vec.size();i++)
            ara[vec[i]]=1;
            ll cnt=0;
            for(ll i=1;i<=n;i++)
            {
               if(res.size()==l-1)
               break;
               if(ara[i]==0){
               res.pb(i);
               ara[i]=1;
               }
            }
            for(auto x:vec)res.pb(x);
            for(ll i=1;i<=n;i++)
            {
                if(res.size()==n)
                break;
                if(ara[i]==0){
                    res.pb(i);
                    ara[i]=1;
                }
            }
            for(auto x:res)cout<<x<<" ";
            cout<<endl;
        }

        

    }
}
 