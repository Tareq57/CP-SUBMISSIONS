#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll n;
  cin>>n;
  if(n%1000==0)
    cout<<0<<endl;
  else
    cout<<1000-n%1000<<endl;
}