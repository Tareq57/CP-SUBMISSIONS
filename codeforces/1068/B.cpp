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
    ll n;
    cin>>n;
    set <ll> s;
    for(ll i=1;i*i<=n;i++)
    {
        if(i*i==n)
        {
            s.insert(i);
            break;
        }
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }

    }
    cout<<s.size()<<endl;
}
