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
    ll t;
    cin>>t;
    while(t--)
    {
        string a,b;
        map<ll,vector<string>>mapa,mapb;
        cin>>a>>b;
        ll cnt=min(a.size(),b.size());
        for(ll i=1;i<=a.size();i++)
        {
            for(ll j=0;j<=a.size()-i;j++)
            {
                mapa[i].pb(a.substr(j,i));
            }
        }
        for(ll i=1;i<=b.size();i++)
        {
            for(ll j=0;j<=b.size()-i;j++)
            {
                mapb[i].pb(b.substr(j,i));
            }
        }
        bool ok=true;
        ll i;
        for(i=cnt;i>0;i--)
        {
            for(ll j=0;j<mapa[i].size();j++)
            {
                for(ll k=0;k<mapb[i].size();k++)
                {
                    if(mapa[i][j]==mapb[i][k])
                    {
                        //cout<<mapa[i][j]<<" "<<mapb[i][k]<<endl;
                        ok=false;
                        break;
                    }
                }
                if(ok==false)
                break;
            }
            if(ok==false)
            break;
        }
        cnt=i;
        //cout<<cnt<<endl;
        cout<<a.size()+b.size()-cnt*2<<endl;

    }   
}