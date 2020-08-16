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
#define mod 1000000000
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
int main()
{
   fastio
   ll t,o=0;
   cin>>t;
   while(t--)
   {
     ll n;
     cin>>n;
     string str,right(n,'R'),left(n,'L');
     cin>>str;
     ll cnt=0,pos=0,poss=n-1,ans=0;
     if(str==right||str==left)
     {
         ans=n/3;
         if(n%3!=0)
         {
             ans++;
         }
         cout<<ans<<endl;
         continue;
     }
     char cha=str[0];
     for(ll i=0;i<n;i++)
     {
         if(cha!=str[i])
         {
             pos=i;
             break;
         }
         cnt++;
     }
     if(cnt==n)
     {
         pos=n;
         cnt++;
     }
     for(ll i=n-1;i>pos;i--)
     {
         if(cha!=str[i])
         {
             poss=i;
             break;
         }
         if(i==pos+1)
         {
             poss=i;
         }
         cnt++;
     }
     ans=cnt/3;
     for(ll i=pos;i<=poss;i++)
     {
         char ch=str[i];
         ll j,cnt=0;
         for(j=i;j<=poss;j++)
         {
             if(str[j]!=ch)
             {
                 break;
             }
             cnt++;
         }
         i=j-1;
         //cout<<cnt<<endl;
         ans+=(cnt/3);
     }
     cout<<ans<<endl;

   }
}
