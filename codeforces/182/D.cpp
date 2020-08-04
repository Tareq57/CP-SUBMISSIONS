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
    fastio
    string str,str1;
    cin>>str>>str1;
    map<string,ll>mapp;
    ll ans=0;
    ll n=str.size(),m=str1.size();
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            string p=str.substr(0,i);
            bool ok=true;
            for(ll j=i;j<n;j+=i)
            {
                string s=str.substr(j,i);
                if(s!=p)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)mapp[p]++;
             p=str.substr(0,n/i);
            ok=true;
            for(ll j=n/i;j<n;j+=(n/i))
            {
                string s=str.substr(j,n/i);
                if(s!=p)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)mapp[p]++;

        }
    }
    for(ll i=1;i*i<=m;i++)
    {
        if(m%i==0)
        {
            string p=str1.substr(0,i);
            bool ok=true;
            for(ll j=i;j<m;j+=i)
            {
                string s=str1.substr(j,i);
                if(s!=p)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)if(mapp[p]>0)ans++;
            if(i*i==m)
                continue;
            p=str1.substr(0,m/i);
            ok=true;
            for(ll j=m/i;j<m;j+=(m/i))
            {
                string s=str1.substr(j,m/i);
                if(s!=p)
                {
                    ok=false;
                    break;
                }
            }
            if(ok)if(mapp[p]>0)ans++;

        }
    }
    cout<<ans<<endl;

}
