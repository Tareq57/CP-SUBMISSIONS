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
#define up upper_bound
#define lp lower_bound
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll q;
    cin>>q;
    vll ara;
     ll sum=0;
    for(ll i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            ara.pb(sum);
            sum++;
        }
        else
            ara.pb(sum);
    }
    ara.pb(sum);
    vll vec;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        vec.pb(ara[r-1]-ara[l-1]);


    }
    for(auto  x: vec)
    {
        cout<<x<<endl;
    }
}
