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
int main()
{
    ll teamA=0,teamB=0,com=0;
    vll vec,ara;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        teamA+=num;
        vec.pb(num);
    }
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        if(vec[i]==num&&num==1)
        {
            com++;
        }
        else
            teamB+=num;
            ara.pb(num);
    }
    teamA-=com;
    if(teamA==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(teamA>teamB)
    {
        cout<<1<<endl;
    }
    else if(teamA<teamB)
    {
        ll p=2;
        while((teamA*p)<=teamB)
        {
            p++;
        }
        cout<<p<<endl;
    }
    else
    {
        bool ok=true;
        for(ll i=0;i<n;i++)
        {
            if(vec[i]!=ara[i])
            {
                ok=false;
                break;
            }
        }
        if(ok)
            cout<<-1<<endl;
        else
            cout<<2<<endl;
    }

}
