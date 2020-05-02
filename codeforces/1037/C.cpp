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
    ll n;
    cin>>n;
    string a,b,c,d;
    cin>>a>>b;
    c=a;
    d=b;
    ll cost=0,cost1=0;
    if(n==1)
    {
        if(a[0]!=b[0])
            cost=1;
            cout<<cost<<endl;
            return 0;
    }
    for(ll i=0;i<n;i++)
    {
        if(i==n-1)
        {
            if(a[n-1]!=b[n-1])
            {
                cost++;
                a[n-1]=b[n-1];

            }
            break;
        }
        if(a[i]!=b[i])
        {
           if(a[i+1]!=a[i]&&a[i+1]!=b[i+1])
           {
               swap(a[i+1],a[i]);
               cost++;
           }
           else
           {
               a[i]=b[i];
               cost++;
           }
        }
    }
    for(ll i=n-1;i>=0;i--)
    {
        if(i==0)
        {
            if(c[0]!=d[0])
            {
                cost1++;
                c[0]=d[0];
            }
            break;
        }
        if(c[i]!=d[i])
        {
            if(c[i]!=c[i-1]&&c[i-1]!=d[i-1])
            {
                cost1++;
                swap(c[i],c[i-1]);
            }
            else
            {
                c[i]=d[i];
                cost1++;
            }
        }
    }
    cout<<min(cost,cost1)<<endl;
}

