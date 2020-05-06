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
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    float n;
    cin>>n;
     float ans=0;
    while(n>0)
    {
        ans+=(1/n);
        n--;
    }
    //cout<<ans<<endl;
    printf("%.12f",ans);

}
