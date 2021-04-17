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
#define minf -1e15
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
        string str;
        cin>>str;
        ll cnt_t=0,cnt_m=0;
        vll vec1,vec2;
        for(ll i=0;i<n;i++)
        {
            if(str[i]=='T')
            {
                cnt_t++;
                vec1.pb(i);
            }
            else
            {
                cnt_m++;
                vec2.pb(i);
            }
        }
    if(cnt_t!=cnt_m*2)
    cout<<"NO"<<endl;
    else
    {
        ll p=cnt_t/2,pos=0;
        bool ok=true;
        vll res;
       for(ll i=0;i<n and p>0;i++)
       {
           if(str[i]=='T')
           {
               res.pb(i);
               p--;
               pos=i;
           }
       }
       p=cnt_t/2;
       for(ll i=0;i<n;i++)
       {
           if(str[i]=='M')
           {
               res.pb(i);
           }
       }
       for(ll i=pos+1;i<n;i++)
       {
           if(str[i]=='T')
           {
               res.pb(i);
           }
       }
       ll far1=0,far2=cnt_t;
       for(ll i=p;i<p+cnt_m;i++)
       {
           if(res[far1]<res[i]&&res[far2]>res[i])
           {
               //cout<<res[far1]<<" "<<res[far2]<<endl;
               far1++;
               far2++;
           }
           else
           {
               ok=false;
               break;
           }
       }
       cout<<((ok)?"YES":"NO")<<endl;
    }
    }
}