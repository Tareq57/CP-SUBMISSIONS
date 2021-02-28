//BISMILLAH
//RABBI JIDNI ILMA
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
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    fastio
    ll n,q;
    cin>>n>>q;
    vll vec;
    ll zer=0,on=0;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        vec.pb(num);
        if(num==0)
        zer++;
        else
        on++;
    }
    ll cnt=0;
    while(q--)
    {
        ll p,q;
        cin>>p>>q;
        if(p==1)
        {
             vec[q-1]=!vec[q-1];
             if(vec[q-1])
             {
                 zer--;
                 on++;
             }
             else
             {
                 zer++;
                 on--;
             }
        }
        else
        {
            if(q<=on)
            {
                cout<<1<<endl;
            }
            else
            cout<<0<<endl;
        }

    }
}
 