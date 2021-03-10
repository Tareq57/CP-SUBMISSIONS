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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        set<ll>s;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            s.insert(num);
        }
        ll ob=0;
        while(k--)
        {
            auto mx=s.end();
            mx--;
            ll max=*mx;
            ll mex=0;
            ll pre=-1;
            for(auto it:s)
            {
                ll p=it;
                if(p-pre!=1)
                {
                    mex=pre+1;
                    break;
                }
                else
                pre=p;
            }
            if(pre==max)
            {
                ob=k+1;
                break;
            }
            ll res=(max+mex)/2;
            if((max+mex)%2==1)
            res++;
            if(s.find(res)!=s.end())
            {
                break;
            }
            else
            s.insert(res);

        }
        cout<<s.size()+ob<<endl;
    }  
}
 