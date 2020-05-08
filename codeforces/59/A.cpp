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
   string str;
   cin>>str;
   ll cntc=0,cnts=0;
   ll n=str.size();
   for(ll i=0;i<n;i++)
   {
       if(str[i]>=97&&str[i]<=122)
       {
           cnts++;
       }
       else
        cntc++;
   }
   if(cntc>cnts)
   {
       for(ll i=0;i<n;i++)
       {
           if(str[i]>=97&&str[i]<=122)
           {
               str[i]-=32;
           }
       }
   }
   else
   {
       for(ll i=0;i<n;i++)
       {
           if(str[i]>=97&&str[i]<=122)
           {
                continue;
           }
           else
            str[i]+=32;
       }
   }
   cout<<str<<endl;
}
