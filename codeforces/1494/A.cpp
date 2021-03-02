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
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
bool res(string str,ll n)
{
   ll cnt=0;
   bool ok=true;
   for(ll i=0;i<n;i++)
   {
      if(str[i]==str[0])
      {
         cnt++;
      }
      else
      cnt--;
      if(cnt<0)
      {
         ok=false;
         break;
      }
   }
   if(cnt>0)
   ok=false;
   return ok;
}
bool func(string str,char ch1,char ch2)
{
   string s=str;
   ll n=str.size();
   for(ll i=0;i<n;i++)
   {
      if(ch1==s[i])
      {
         s[i]=s[0];
      }
   }
   if(res(s,n))
   {
      return true;
   }
   else
   {
      s=str;
      for(ll i=0;i<n;i++)
      {
      if(ch2==s[i])
      {
         s[i]=s[0];
      }
      }
      if(res(s,n))
      return true;
      else
      {
         s=str;
         for(ll i=0;i<n;i++)
         {
            if(s[i]!=s[0])
            s[i]=ch1;
         }
         if(res(s,n))
         return true;
         else
         return false;
      }

   }


}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
       string str;
       cin>>str;
       char ch1,ch2;
       if(str[0]=='A')
       {
           ch1='B',ch2='C';
       }
       if(str[0]=='B')
       {
           ch1='A',ch2='C';
        
       }
       if(str[0]=='C')
       {
           ch1='A',ch2='B';
          
       }
       if(func(str,ch1,ch2))
       cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
       


    }
}
 