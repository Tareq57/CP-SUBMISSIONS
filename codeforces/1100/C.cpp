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
#define pi 3.14159265358
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
   float n,r,ans;
   cin>>n>>r;
   ans=sin(pi/n);
   ans=(r*ans)/(1-ans);
   printf("%.7f",ans);



}
