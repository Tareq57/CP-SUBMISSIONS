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
    string str;
    cin>>str;
    ll n=str.size();
    string s="";
    ll w=0;
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='v')
            w++;
        else
        {
            if(i!=0&&str[i-1]!='o')
            {
                if(w<=1)
                    {
                        s+='o';
                        w=0;
                        continue;
                    }
              string p(w-1,'w');
              s+=p;
              w=0;
            }
            s+='o';
        }
    }
    if(w>1)
    {
        string p(w-1,'w');
        s+=p;
    }
   // cout<<s<<endl;
     w=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='w')w++;
    }
    ll ans=0,wp=0;
    for(ll i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='w')
        {
            wp++;
            w--;
        }
        else
        {
            ans+=(wp*w);
        }
    }
    cout<<ans<<endl;

}
