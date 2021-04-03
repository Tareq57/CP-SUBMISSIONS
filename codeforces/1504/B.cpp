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
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        ll cnt0=0,cnt1=0;
        vll veca,vecb;
        for(ll i=0;i<n;i++)
        {
            if(a[i]=='0')
            {
                cnt0++;
            }
            else
            cnt1++;
            veca.pb(a[i]-48);
            vecb.pb(b[i]-48);
        }
        bool ok=true,flag=true;
        for(ll i=n-1;i>=0;i--)
        {
            int p;
            if(veca[i]==0)
            {
                p=0;
            }
            else
            p=1;
            if(!flag)
            {
                veca[i]=!veca[i];
            }
            if(veca[i]!=vecb[i])
            {
                if(cnt0==cnt1)
                {
                    flag=!flag;
                }
                else
                {
                    ok=false;
                    break;
                }
            }
            if(p==0)
            cnt0--;
            else
            cnt1--;
        }
        (ok)?cout<<"YES"<<endl:cout<<"NO"<<endl;

    }
}
 