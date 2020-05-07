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
    set <ll ,less<ll> > s;
    ll n,cnt=0,m=0;
    cin>>n;
    bool ok1=true,ok=true;
    for(ll i=0;i<n;i++)
    {
        ll num;
        cin>>num;
        if(num==0||num==100)
        {
            s.insert(num);
        }
        else if(num%10==0)
        {
             if(ok)
             {
                 ok=false;
                 s.insert(num);
             }
             cnt++;
        }
        else if(num<10)
        {
            if(ok1)
            {
                ok1=false;
                s.insert(num);
                cnt++;
            }
        }
        else
        {
            if(cnt==0)
            {
              m=num;

            }
        }
    }
    if(cnt==0)
    {
        if(m>0)
        s.insert(m);
    }
    cout<<s.size()<<endl;
    while(!s.empty())
    {
        ll str=*s.begin();
        s.erase(str);
        cout<<str<<" ";
    }


}
