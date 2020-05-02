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
    ll n,m,cnt=0;
    cin>>n>>m;
    vll vec(n+1,0);
    for(ll i=0;i<m;i++)
    {
        ll num;
        cin>>num;
        vec[num]++;
        if(vec[num]==1)
        {
            cnt++;
        }
        if(cnt==n)
        {
            cout<<1;
            for(ll j=1;j<=n;j++)
            {
                vec[j]--;
                if(vec[j]==0)
                {
                    cnt--;
                }
            }
        }
        else
            cout<<0;

    }
}

