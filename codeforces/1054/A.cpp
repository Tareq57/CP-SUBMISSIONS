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
   int x,y,z,t1,t2,t3;
   cin>>x>>y>>z>>t1>>t2>>t3;
   t3=3*t3;
   int l=(abs(x-z))*t2;
   t2=((abs(x-y))*t2);
   int ev=t3+t2+l;
   int st=(abs(x-y))*t1;
   if(st>=ev)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;



}
