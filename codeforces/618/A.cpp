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
    ll n;
    cin>>n;
    vector <ll> vec;
    vec.pb(1);
    for(ll i=1;i<n;i++)
    {
        vec.pb(1);
        ll p=vec.size();
        for(ll j=p-1;j>=0;j--)
        {
            if(vec[j]==vec[j-1])
            {
                vec[j-1]+=1;
                vec.erase(vec.begin()+j);
            }
        }
    }
    for(ll i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
}

