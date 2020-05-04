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
    ll t;
    cin>>t;
    while(t--){
    string str;
    cin>>str;
    set <int> s;
    ll n=str.size(),p=0,q=0,ans=0;
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            p=i;
            break;
        }
    }
    for(ll j=n-1;j>=0;j--)
    {
        if(str[j]=='1')
        {
            q=j;
            break;
        }
    }
    for(ll i=p+1;i<q;i++)
    {
        if(str[i]=='0')
            ans++;
    }
    cout<<ans<<endl;
}
}
