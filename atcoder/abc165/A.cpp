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
    ll a,b,k;
    cin>>k>>a>>b;
    bool s=true;
   for(ll i=a;i<=b;i++)
   {
       if(i%k==0)
       {
          cout<<"OK"<<endl;
          s=false;
          break;
       }


   }
   if(s)
    cout<<"NG"<<endl;


}

