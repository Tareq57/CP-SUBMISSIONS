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
    ll n,m,l,res=0;
    cin>>n>>m>>l;
    vll vec;
    ll nu;
    cin>>nu;
    vec.pb(nu);
    if(nu>l)
    {
       res++;
    }
    for(ll i=1;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
        if(num>l&&vec[i-1]<=l)
        {
            res++;
        }
    }
    vll ans;
    while(m--)
    {
        ll num;
        cin>>num;
        if(num==0)
        {
            ans.pb(res);
        }
        else
        {
            ll p,d;
            cin>>p>>d;
            if(vec[p-1]>l)
            {
                vec[p-1]+=d;
            }
            else
            {
                vec[p-1]+=d;
                if(n==1&&vec[0]>l)
                {
                    res++;
                    continue;
                }
                if(p==n)
                {
                    if(vec[p-1]>l)
                        {
                            if(vec[p-2]<=l)
                            {
                                res++;
                            }
                        }
                    continue;
                }
                if(p==1)
                {
                    if(vec[0]>l)
                    {
                        if(vec[1]<=l)
                        {
                            res++;
                        }
                    }

                    continue;
                }
                if(vec[p-1]>l)
                {
                    if(vec[p-2]<=l&&vec[p]<=l)
                    res++;
                    else if(vec[p-2]>l&&vec[p]>l)
                        res--;
                }
            }
        }
    }
    for(auto x: ans)
    {
        cout<<x<<endl;
    }
}

