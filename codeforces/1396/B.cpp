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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;ll sum=0,mx=minf;
        for(ll i=0;i<n;i++)
        {
            ll num;cin>>num;sum+=num;mx=max(num,mx);
        }
        bool ok=true;
        if(sum%2)
            ok=!ok;
        else
        {
            sum-=mx;if(sum<mx)ok=!ok;
        }
        if(ok)
            cout<<"HL"<<endl;
        else
            cout<<"T"<<endl;
    }
}



