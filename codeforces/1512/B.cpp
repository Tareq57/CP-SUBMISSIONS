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
        char ara[401][401];
        pll p1,p2;
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            string str;
            cin>>str;
            for(ll j=0;j<n;j++)
            {
                ara[i][j]=str[j];
                if(str[j]=='*')
                {
                    if(cnt==0)
                    {
                        cnt++;
                        p1={i,j};
                    }
                    else
                    p2={i,j};
                }
            }
        }
        if(p1.f!=p2.f&&p1.s!=p2.s)
        {
            ara[p1.f][p2.s]='*';
            ara[p2.f][p1.s]='*';
            //cout<<"allah"<<" "<<p1.f<<" "<<p1.s<<" "<<p2.f<<" "<<p2.s<<endl;
        }
        else if(p1.f==p2.f)
        {
            ll sar=0;
            if(p1.f==0)
            {
                sar=1;
            }
            else if(p1.f==n-1)
            {
                sar=0;
            }
             ara[sar][p1.s]='*';
            ara[sar][p2.s]='*';
        }
        else if(p1.s==p2.s)
        {
            ll sar=0;
            if(p1.s==0)
            {
                sar=1;
            }
            else if(p1.s==n-1)
            {
                sar=0;
            }
           
            ara[p1.f][sar]='*';
            ara[p2.f][sar]='*';
        }
        //cout<<"output"<<endl;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            cout<<ara[i][j];
            cout<<endl;
        }

    }
}
 