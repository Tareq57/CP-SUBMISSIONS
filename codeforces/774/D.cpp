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
    ll n,l,r;
    cin>>n>>l>>r;
    vll vec;
    vll ara;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
    }
       for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        ara.pb(num);
    }
    bool ok=true;
    for(ll i=0;i<l-1;i++)
    {
        if(vec[i]!=ara[i])
        {
            ok=false;
            break;
        }
    }
    if(ok==false)
    cout<<"LIE"<<endl;
    else
    {
        for(ll i=r;i<n;i++)
    {
        if(vec[i]!=ara[i])
        {
            ok=false;
            break;
        }
    }
    if(ok)
        cout<<"TRUTH"<<endl;
    else
        cout<<"LIE"<<endl;
    }



}

