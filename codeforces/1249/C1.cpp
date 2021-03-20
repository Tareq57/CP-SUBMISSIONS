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
ll ceil(ll p,ll q)
{
    ll r=p/q;
    if(p%q)
    r++;
    return r;
}
set<ll>s;
void elem()
{
    for(ll i=0;i<10;i++)
    {
        s.insert((ll)pow(3,i));
    }
    for(ll i=0;i<9;i++)
        for(ll j=i+1;j<10;j++)
            s.insert(pow(3,i)+pow(3,j));
    for(ll i=0;i<8;i++)
        for(ll j=i+1;j<9;j++)
            for(ll k=j+1;k<10;k++)
                s.insert(pow(3,i)+pow(3,j)+pow(3,k));
    for(ll i=0;i<7;i++)
        for(ll j=i+1;j<8;j++)
            for(ll k=j+1;k<9;k++)
                for(ll l=k+1;l<10;l++)
                   s.insert(pow(3,i)+pow(3,j)+pow(3,k)+pow(3,l));
    
     for(ll i=0;i<6;i++)
        for(ll j=i+1;j<7;j++)
            for(ll k=j+1;k<8;k++)
                for(ll l=k+1;l<9;l++)
                    for(ll m=l+1;m<10;m++)
                        s.insert(pow(3,i)+pow(3,j)+pow(3,k)+pow(3,l)+pow(3,m));
  
     for(ll i=0;i<5;i++)
        for(ll j=i+1;j<6;j++)
            for(ll k=j+1;k<7;k++)
                for(ll l=k+1;l<8;l++)
                    for(ll m=l+1;m<9;m++)
                        for(ll n=m+1;n<10;n++)
                          s.insert(pow(3,i)+pow(3,j)+pow(3,k)+pow(3,l)+pow(3,m)+pow(3,n));
    for(ll i=0;i<4;i++)
        for(ll j=i+1;j<5;j++)
            for(ll k=j+1;k<6;k++)
                for(ll l=k+1;l<7;l++)
                    for(ll m=l+1;m<8;m++)
                        for(ll n=m+1;n<9;n++)
                            for(ll o=n+1;o<10;o++)
                                    s.insert(pow(3,i)+pow(3,j)+pow(3,k)+pow(3,l)+pow(3,m)+pow(3,n)+pow(3,o));
    for(ll i=0;i<3;i++)
        for(ll j=i+1;j<4;j++)
            for(ll k=j+1;k<5;k++)
                for(ll l=k+1;l<6;l++)
                    for(ll m=l+1;m<7;m++)
                        for(ll n=m+1;n<8;n++)
                            for(ll o=n+1;o<9;o++)
                                for(ll p=o+1;p<10;p++)
                                    s.insert(pow(3,i)+pow(3,j)+pow(3,k)+pow(3,l)+pow(3,m)+pow(3,n)+pow(3,o)+pow(3,p));
    for(ll i=0;i<2;i++)
        for(ll j=i+1;j<3;j++)
            for(ll k=j+1;k<4;k++)
                for(ll l=k+1;l<5;l++)
                    for(ll m=l+1;m<6;m++)
                        for(ll n=m+1;n<7;n++)
                            for(ll o=n+1;o<8;o++)
                                for(ll p=o+1;p<9;p++)
                                    for(ll q=p+1;q<10;q++)
                                        s.insert(pow(3,i)+pow(3,j)+pow(3,k)+pow(3,l)+pow(3,m)+pow(3,n)+pow(3,o)+pow(3,p)+pow(3,q));
    ll sum=0;
    for(ll i=0;i<10;i++)
    {
        sum+=(pow(3,i));
    }
    s.insert(sum);
}

int main()
{
   ll t;
   cin>>t;
   elem();
   while(t--)
   {
      ll n;
      cin>>n;
      auto it=up(s.begin(),s.end(),n);
      if(*(--it)==n)
      {

      }
      else
      it++;
      cout<<*it<<endl;
   }
     
}