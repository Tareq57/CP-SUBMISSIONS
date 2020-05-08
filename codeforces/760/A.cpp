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
    int ara[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int n,d;
    cin>>n>>d;
    ara[n]-=28;
    d=7-d+1;
    if(ara[n]==0&&d==7)
    {
        cout<<4<<endl;
    }
    else
    {
        if(d>=ara[n])
            cout<<5<<endl;
        else
            cout<<6<<endl;
    }

}
