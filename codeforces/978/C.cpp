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
#define pq priority_queue
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{

    ll n,m;
    cin>>n>>m;
    vll vec;
    vec.pb(0);
    for(ll i=1;i<=n;i++)
    {
        ll num;
        cin>>num;
        vec.pb((vec[i-1]+num));
    }
    vector <pll> mail;
    ll s=0;
    for(ll i=1;i<=m;i++)
    {
        ll num;
        cin>>num;
         for(ll j=s;j<=n;j++)
         {
             if(num<=vec[j])
             {
                 mail.pb(mp(j,num-vec[j-1]));
                 s=j-1;
                 break;
             }
         }
    }
    for(ll i=0;i<mail.size();i++)
    {
        cout<<mail[i].f<<" "<<mail[i].s<<endl;
    }

}

