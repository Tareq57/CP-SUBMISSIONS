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
  int ara[]={2,7,2,3,3,4,2,5,1,2};
  int n;
  cin>>n;
  int p=n/10;
  int q=n%10;
  cout<<ara[p]*ara[q]<<endl;
}

