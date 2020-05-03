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
    ll a,b,ans=0;
    cin>>a>>b;
    b+=1;
    while(b>0)
    {
        ans++;
        b/=10;
    }
    cout<<a*(ans-1)<<endl;

}
}
