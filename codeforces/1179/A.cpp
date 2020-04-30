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
int main()
{
    ll n,q,a,b;
    cin>>n>>q;
    deque <ll> d;
    ll big=-1,index=-1;;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        d.pb(num);
        if(big<num)
        {
            big=num;
            index=i;
        }
    }
    ll p=index+1;
    vector <pair <ll,ll> > vec;
    while(p--)
    {
        ll a=d[0];
        d.pop_front();
        ll b=d[0];
        d.pop_front();
        if(a>b)
        {
            d.push_front(a);
            d.push_back(b);
        }
        else
        {
            d.push_front(b);
            d.push_back(a);
        }
        vec.pb(mp(a,b));
    }
    vector <pll> ara;
    for(ll i=1;i<n;i++)
    {
        ara.pb(mp(big,d[i]));
    }
    while(q--)
    {
        ull m;
        cin>>m;
        if(m<=index+1)
        {
            cout<<vec[m-1].f<<" "<<vec[m-1].s<<endl;
        }
        else
        {
            m-=(index+1);
            ull s=ara.size(),j=m%s;
            if(j==0)
            {
                cout<<ara[s-1].f<<" "<<ara[s-1].s<<endl;
            }
            else
            {
                cout<<ara[j-1].f<<" "<<ara[j-1].s<<endl;
            }

        }
    }



}
