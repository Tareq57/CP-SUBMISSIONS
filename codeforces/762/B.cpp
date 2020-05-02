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
#define pq priority_queue
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll u,p,up,sum=0,ans=0;
    cin>>u>>p>>up;
    ll m;
    cin>>m;
    vll usb;
    vll ps;
    for(ll i=0;i<m;i++)
    {
        ll num;
        cin>>num;
        string str;
        cin>>str;
        if(str=="USB")
        {
            usb.pb(num);
        }
        else
        {
            ps.pb(num);
        }
    }
    sort(usb.begin(),usb.end());
    sort(ps.begin(),ps.end());
    ll a=usb.size();
    a=min(u,a);
    ans+=a;
    u=u-a;
    for(ll i=0;i<a;i++)
    {
        sum+=usb[i];
    }
    usb.erase(usb.begin(),usb.begin()+a);
    ll b=ps.size();
     b=min(p,b);
     ans+=b;
    p=p-b;
    for(ll i=0;i<b;i++)
    {
        sum+=ps[i];
    }
   ps.erase(ps.begin(),ps.begin()+b);
    for(ll i=0;i<ps.size();i++)
    {
        usb.pb(ps[i]);
    }
    sort(usb.begin(),usb.end());
    ll c=usb.size();
    c=min(up,c);
    ans+=c;
    for(ll i=0;i<c;i++)
    {
        sum+=usb[i];
    }
    cout<<ans<<" "<<sum<<endl;


}

