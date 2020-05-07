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
ll t;
cin>>t;
while(t--)
{
   ll a1,a2,b1,b2,w1,w2,h1,h2;
   cin>>a1>>a2>>b1>>b2;
   if(a1>a2)
   {
       w1=a1;
       h1=a2;
   }
   else if(a2>a1)
   {
       w1=a2;
       h1=a1;
   }
   else
   {
       cout<<"NO"<<endl;
       continue;
   }
      if(b1>b2)
   {
       w2=b1;
       h2=b2;
   }
   else if(b2>b1)
   {
       w2=b2;
       h2=b1;
   }
   else
   {
       cout<<"NO"<<endl;
       continue;
   }
   if(w1==w2&&(h1+h2)==w1)
   {
       cout<<"YES"<<endl;
   }
   else if(h1==h2&&(w1+w2)==h1)
   {
       cout<<"NO"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }


}
}
