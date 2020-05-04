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
    ll n;
    cin>>n;
    ll ans=sqrt(n);
    if(ans*ans!=n)
        ans++;
    ll p=ans,q=ans;
    while(p*q>n)
    {
        q--;
    }
    if(p*q<n)
        q++;
    cout<<2*(p+q)<<endl;
}
