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
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        vll a,b;
        bool ok=true;
        ll pos=-1;
        for(ll i=0;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                pos=i;
            }
        } 
        ll cnt=0;
        for(ll i=pos;i>=0;i--)
        {
            if(str[i]=='1')
            {
                cnt++;
            }
            else
            {
                cnt=0;
                if(pos-i==1)
                {
                    ll pos=i;
                    break;
                }
                else
                pos=i;
            }
        }
        pos-=cnt;
        ll pos1=inf;
        for(ll i=0;i<str.size();i++)
        {
            if(str[i]=='1')
            {
                pos1=i;
                break;
            }
        }
        cnt=0;
        for(ll i=pos1;i<str.size();i++)
        {
            if(str[i]=='0')
            {
                cnt++;
                continue;
            }
            else {
                cnt=0;
            if(i-pos1==1)
            {
                pos1=i;
                break;
            }
            else
            pos1=i;
            } 
        }
        pos1+=cnt;
        if(pos1<pos)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }  
}
 