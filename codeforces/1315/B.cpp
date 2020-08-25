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
#define rep(p,q) for(ll i=p;i<q;i++)
#define per(p,q) for(ll i=p-1;i>=0;i--)
int main()
{
   fastio
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b,p;string str;
       cin>>a>>b>>p>>str;
       ll n=str.size();
       ll pos=1;
       for(ll i=n-2;i>=0;i--)
       {
           ll j;
           char ch=str[i];
           if(ch=='A')
            p-=a;
           if(ch=='B')
            p-=b;
           if(p<0)
           {
               //cout<<'a'<<endl;
               pos=i+2;
               break;
           }
           //cout<<p<<endl;
           for(j=i;j>=0;j--)
           {
               if(str[j]!=ch)
                break;
           }
           i=j+1;
           //cout<<i<<endl;
       }
       cout<<pos<<endl;
   }

}

