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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vll vec;
        set <ll> s;
         set <ll> ::iterator it;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);
            s.insert(num);
        }
        if(s.size()>k)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<n*k<<endl;
            ll p=1;
            while(p<=n)
            {
                for(it=s.begin();it!=s.end();it++)
                {
                   cout<<*it<<" ";
                }
                ll x=k-s.size();
                for(ll i=0;i<x;i++)
                {
                    cout<<1<<" ";
                }
                p++;
            }
            cout<<endl;
        }
    }
}

