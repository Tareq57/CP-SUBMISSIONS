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
        ll cnt3=1,sum=0;
        while(1)
        {
            if((cnt3*(cnt3-1))/2>n)
            {
                cnt3--;
                break;
            }
            cnt3++;
        }
        ll p=n-((cnt3*(cnt3-1))/2);
        string str(p,'7'),s(cnt3-2,'3');
        string ans="133"+str+s+"7";
        cout<<ans<<endl;
    }
}
