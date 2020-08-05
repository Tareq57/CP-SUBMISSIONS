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
   ll n;
   cin>>n;
   string str;
   cin>>str;
   string ans="";
   int ara[26];
   memset(ara,0,sizeof(ara));
   for(ll i=0;i<n;i++)ara[str[i]-'a']++;
   for(ll i=0;i<26;i++)
   {
       while(ara[i]--)
        ans+=(char('a'+i));
   }
   cout<<ans<<endl;

}
