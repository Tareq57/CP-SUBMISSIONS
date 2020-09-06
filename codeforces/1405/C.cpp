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
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
       ll cnt1=0,cnt0=0,cntw=0;
        bool ok=true;
        for(ll i=0;i+k<n;i++)
        {
            if(str[i]==str[i+k])
                continue;
            else if(str[i]=='?'||str[i+k]=='?')
            {
                 if(str[i]=='?')
                    str[i]=str[i+k];
                else
                    str[i+k]=str[i];

            }
            else
            {
                ok=!ok;
                break;
            }
        }
        if(ok)
        for(ll i=n-1;i-k>=0;i--)
        {
           if(str[i]==str[i-k])
                continue;
            else if(str[i]=='?'||str[i-k]=='?')
            {

               if(str[i]=='?')
                    str[i]=str[i-k];
                else
                    str[i-k]=str[i];

            }
            else
            {
                ok=!ok;
                break;
            }
        }
        for(ll i=0;i<k;i++)
        {
            if(str[i]=='0')
                cnt0++;
            else if(str[i]=='1')
                cnt1++;
            else
                cntw++;
        }
        if(ok==true&&cnt1!=cnt0)
        {
            if(max(cnt1,cnt0)>min(cnt1,cnt0)+cntw)
            {
                ok=!ok;
            }
        }
        if(ok)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
