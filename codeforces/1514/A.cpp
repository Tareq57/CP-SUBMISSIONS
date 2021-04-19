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
        bool ok=true;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            ll p=(ll)sqrt(num);
            if(p*p!=num)
            {
                ok=false;
            }
        }
        cout<<((ok)?"NO":"YES")<<endl;
    }
}