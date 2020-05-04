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
        ll x,y,d,n,ans=-1;
        cin>>n>>x>>y>>d;
        if(y==n||y==1)
        {
            ll p=abs(y-x);
            ans=(p/d);
            if(ans*d!=p)
                ans++;
            cout<<ans<<endl;
            continue;
        }
        else
        {
            ll p=abs(x-y);
            if(p%d==0)
            {
                ans=p/d;
            }
            if((y-1)%d==0)
            {
               ll ans1=(y-1)/d;
                ll m=(x-1)/d;
                if(m*d!=x-1)
                    m++;
                ans1+=m;
                if(ans>=0)
                ans=min(ans,ans1);
                else
                    ans=ans1;
            }
            if((n-y)%d==0)
            {
                ll ans1=(n-y)/d;
                ll m=(n-x)/d;
                if(m*d!=n-x)
                    m++;
                ans1+=m;
                if(ans>=0)
                    ans=min(ans,ans1);
                else
                    ans=ans1;
            }
        }
        cout<<ans<<endl;
    }
}

