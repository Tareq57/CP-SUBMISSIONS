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
#define o 0
string str[1000003];
ll cnt(ll n,ll m,ll a,ll b,ll c,ll d)
{
    ll pow=1,p=0,res=0;
    for(ll i=0;i<m;i++)
    {
        ll pow=1,p=0;
        for(ll j=0;j<n;j++)
        {
            p+=((str[j][i]-'0')*pow);
            pow*=2;
        }
        if(i%2)
        {
            ll x=p^c,y=p^d;
            bitset<64>b1(x),b2(y);
            ll xx=b1.count(),yy=b2.count();
            res+=(min(xx,yy));
           // cout<<b1<<" "<<b2<<endl;

        }
        else
        {
            bitset<64>b1(p^a),b2(p^b);
            ll xx=b1.count(),yy=b2.count();
            res+=(min(xx,yy));
            //cout<<b1<<" "<<b2<<endl;
        }
       // cout<<(min(b1.count(),b2.count()))<<endl;
    }
    return res;

}
ll solve(ll n,ll m,ll a,ll b,ll c,ll d)
{
    return min(cnt(n,m,a,b,c,d),cnt(n,m,c,d,a,b));
}
int main()
{
    fastio
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++)cin>>str[i];
    if(n>3){cout<<-1<<endl;return 0;}
    if(n==1)cout<<0<<endl;
    if(n==2)cout<<solve(n,m,0,3,1,2)<<endl;
    if(n==3)cout<<min(solve(n,m,0,7,2,5),solve(n,m,1,6,3,4))<<endl;
}
