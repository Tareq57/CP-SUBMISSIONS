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
#define minf -1e10
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
   ll a1,a2,a3,b1,b2,b3,n;
   cin>>n>>a1>>a2>>a3>>b1>>b2>>b3;
   //max
   ll mx=min(a1,b2)+min(a2,b3)+min(a3,b1);
   // none
   ll m=max({(ll)0,b1-a1-a2,b2-a2-a3,b3-a3-a1});
    cout<<m<<" "<<mx<<endl;



}
