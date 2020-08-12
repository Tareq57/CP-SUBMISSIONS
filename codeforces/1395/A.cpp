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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll p=min({a,b,c});
        a-=p;b-=p;c-=p;d+=(3*p);
        ll cnt=0;
        if(a%2)cnt++;if(b%2)cnt++;if(c%2)cnt++;if(d%2)cnt++;
        if(cnt==2)cout<<"No"<<endl;
        else
        {
            if(cnt==0||cnt==1||(cnt==4||cnt==3&&p>0))
            {
                cout<<"Yes"<<endl;
                continue;
            }
            else
                cout<<"No"<<endl;
        }
    }
}
