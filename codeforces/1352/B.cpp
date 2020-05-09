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
#define minf -1e10
#define pi 3.14159265
#define mod 1000000000
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if((n%2==1&&k%2==0)||(n<k)||(n%2==0&&k%2==1&&n<2*k))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(n%2==0)
            {
                if(k%2==0)
                {
                    for(ll i=1;i<k;i++)
                    {
                        cout<<1<<" ";
                    }
                    cout<<n-(k-1)<<endl;
                }
                else
                {
                    for(ll i=1;i<k;i++)
                    {
                        cout<<2<<" ";

                    }
                    cout<<n-(2*(k-1))<<endl;
                }
            }
            else
            {
                for(ll i=1;i<k;i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-k+1<<endl;
            }
        }
    }
}
