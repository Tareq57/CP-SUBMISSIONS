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
   float a,b,c;
   cin>>a>>b>>c;
   auto p=(b*b)-(4.0*a*c);
   if(!a&!b&&!c){cout<<-1<<endl;return 0;}
   if(a==0&&b==0){cout<<0<<endl;return 0;}
   if(a==0)
   {
       cout<<1<<endl;
       cout<<fixed;
        cout<<setprecision(10)<<(-c/b)<<endl;;
        return 0;
   }
   if(p>=0)
   {
       set<float> s;
       s.insert((-b+sqrt(p))/(2.0*a));
        s.insert((-b-sqrt(p))/(2.0*a));
        cout<<s.size()<<endl;
        cout<<fixed;
        cout<<setprecision(10);
        for(auto x:s)cout<<x<<endl;
   }
   else
    cout<<0<<endl;

}
