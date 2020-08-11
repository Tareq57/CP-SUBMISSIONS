
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
        string str1,str2;
        cin>>str1>>str2;
        vll vec[26];
        ll n=str1.size();
        for(ll i=0;i<n;i++)
        {
            vec[str1[i]-'a'].pb(i+1);
        }
        ll cnt=1,curr=-1,ara[26]={0};
        n=str2.size();
        bool ok=true;
        for(ll i=0;i<n;i++)
        {
            ll p=str2[i]-'a';
            if(vec[p].size()==0)
            {
                ok=false;
                break;
            }
            auto q=up(vec[p].begin(),vec[p].end(),curr)-vec[p].begin();
            if(q<vec[p].size())
            {
                curr=vec[p][q];
            }
            else
            {
                curr=vec[p][0];
                cnt++;
            }
           // cout<<curr<<endl;
        }
        if(ok)cout<<cnt<<endl;
        else cout<<-1<<endl;

    }

}
