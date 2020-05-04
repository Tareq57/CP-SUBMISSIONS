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
   ll n,m;
   cin>>n>>m;
   string str[100];
   for(ll i=0;i<n;i++)
   {
       cin>>str[i];
   }
   bool ok=true;
   for(ll i=0;i<n-1;i++)
   {
       if(str[i][0]==str[i+1][0])
       {
           ok=false;
           break;
       }
       for(ll j=0;j<m-1;j++)
       {
           if(str[i][j]!=str[i][j+1])
           {
               ok=false;
               break;
           }
       }
   }
   for(ll i=0;i<m-1;i++)
   {
       if(str[n-1][i]!=str[n-1][i+1])
       {
           ok=false;
           break;
       }
   }
   if(ok)
   {
       cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
}

