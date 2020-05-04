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

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set <ll,greater<ll> > s;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            s.insert(num);
        }
        ll result=0;
        while(!s.empty())
        {
            ll num=*s.begin();
            s.erase(num);
            if(num%2==0)
            {
                num/=2;
                s.insert(num);
                result++;
            }
        }
        cout<<result<<endl;
    }

}
