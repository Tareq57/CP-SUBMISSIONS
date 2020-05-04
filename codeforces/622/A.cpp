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
   ll n;
   cin>>n;
   ll sum=0,num=0;
   ll ans=1;
   while(sum<n)
   {
       num=sum;
       sum+=ans;
       ans++;
   }
   cout<<n-num<<endl;;
}

