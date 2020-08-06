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
        ll n;
        cin>>n;
        string str;
        cin>>str;
        vll pos0,pos1,vec;
        ll cur=1;
        for(ll i=0;i<n;i++)
        {
            if(str[i]=='1')
            {
                if(pos0.empty())
                {
                    pos1.pb(cur);
                    vec.pb(cur);
                    cur++;
                }
                else
                {
                    pos1.pb(pos0.back());
                    vec.pb(pos1.back());
                    pos0.pop_back();
                }
            }
            else
            {
                if(pos1.empty())
                {
                    pos0.pb(cur);
                    vec.pb(cur);
                    cur++;
                }
                else
                {
                    pos0.pb(pos1.back());
                    vec.pb(pos1.back());
                    pos1.pop_back();
                }
            }
        }
        cout<<cur-1<<endl;
        for(auto x:vec)cout<<x<<" ";cout<<endl;
    }
}
