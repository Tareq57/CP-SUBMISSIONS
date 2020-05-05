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
    ll t,zero=0;
    cin>>t;
    while(t--)
    {
        ll n,block,k;
        cin>>n>>block>>k;
        vll vec;
        ll m=0;
        ll index=0;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);
            if(num>m)
            {
                m=num;
                index=i;
            }
        }
        bool ok=true;
        ll i=0;
        while(i<index)
        {
            if(vec[i]>=vec[i+1])
            {
                ll p=max(vec[i+1]-k,zero);
                block+=(vec[i]-p);
            }
            else
            {
                ll p=max(vec[i+1]-k,zero);
                if(p>(block+vec[i]))
                {
                    ok=false;
                    break;
                }
                else
                {
                    if(p>vec[i])
                    {
                        block-=(p-vec[i]);

                    }
                    else
                        block+=(vec[i]-p);
                }
            }
            i++;
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
