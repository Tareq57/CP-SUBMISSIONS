#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define vll  vector <long long>
#define pll pair <long long,long long>
int main()
{
   int n,m,d;
   cin>>n>>m>>d;
   vector <int> vec;
   int sum=0;
   for(int i=0;i<m;i++)
   {
       int num;
       cin>>num;
       vec.pb(num);
       sum+=vec[i];
   }
   int l=sum+(m+1)*(d-1);
   if(l<n)
   {
       cout<<"NO"<<endl;
   }
   else
   {
      // cout<<sum;
       cout<<"YES"<<endl;
       int diff=n-sum;
       //cout<<diff;
       for(int i=0;i<=m;i++)
       {
           int x=diff/(m-i+1);
           //cout<<x<<endl;
           diff-=x;
          // cout<<diff<<endl;
           for(int j=0;j<x;j++)
           {
              cout<<0<<" ";
           }
           if(i==m)
           {
               break;
           }
           while(vec[i]>0)
           {
              cout<<i+1<<" ";
               vec[i]--;
           }
       }
   }

}
