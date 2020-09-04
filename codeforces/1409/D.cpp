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
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll ans=0;

            vll vec;
            ll p=n,sum=0;
            while(p!=0)
            {
              vec.pb(p%10);
              p/=10;
            }
            reverse(vec.begin(),vec.end());
            for(auto x:vec)sum+=x;
            ll cnt=1;
            for(ll i=vec.size()-1;i>=0;i--)
            {
                if(sum<=s)
                    break;
                if(vec[i]>0)
                {
                    ll r=1;
                    for(ll j=0;j<cnt;j++)
                        r*=10;
                    ll g=1;
                    for(ll j=1;j<cnt;j++)
                        g*=10;
                    g*=vec[i];
                    r-=g;
                    //cout<<g<<endl;
                    //cout<<cnt<<endl;
                    ans+=r;
                    sum-=vec[i];
                    sum++;
                    for(ll j=i-1;j>=0;j--)
                    {
                        if(vec[j]==9)
                        {
                            vec[j]=0;
                            sum-=9;
                        }
                        else
                        {
                            vec[j]++;
                            break;
                        }
                    }

                }
                cnt++;
            }



        cout<<ans<<endl;
    }

}
