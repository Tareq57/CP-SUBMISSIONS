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
#define o 0
int main()
{
       fastio
       ll n;
       cin>>n;
       ll ara[100001];
       memset(ara,0,sizeof(ara));
       ll cnt2=0,cnt4=0;
       for(ll i=0;i<n;i++)
       {
           ll num;
           cin>>num;
           ara[num]++;
           if(ara[num]==2)
           cnt2++;
           if(ara[num]==4)
           {
               cnt4++;
               cnt2--;
           }
           if(ara[num]>4)
           {
               ll p=ara[num]-4;
               if(p%2==0)
               {
                   cnt2++;
               }
           }
       }
       ll q;
       cin>>q;
       while(q--)
       {
           char ch;ll d;
           cin>>ch>>d;
           if(ch=='+')
           {
               ara[d]++;
               if(ara[d]==2)
                cnt2++;
               if(ara[d]==4)
               {
                   cnt4++;
                   cnt2--;
               }
               if(ara[d]>4)
               {
                   ll p=ara[d]-4;
                   if(p%2==0)
                    cnt2++;
               }
           }
           else
           {
               ara[d]--;
               if(ara[d]==1)
                cnt2--;
               if(ara[d]==3)
               {
                   cnt4--;
                   cnt2++;
               }
               if(ara[d]>4)
               {
                   ll p=ara[d]-4;
                   if(p%2)
                    cnt2--;
               }
           }
           if(cnt4>0)
           {
               if(cnt4>1||cnt2>1)
               {
                   cout<<"YES"<<endl;
               }
               else
                    cout<<"NO"<<endl;
           }
           else
            cout<<"NO"<<endl;

       }


}
