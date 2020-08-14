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

ll findSubarraySum(ll arr[], ll n, ll sum) 
{ 
    // STL map to store number of subarrays 
    // starting from index zero having  
    // particular value of sum. 
    unordered_map<ll, ll> prevSum; 
  
    ll res = 0; 
  
    // Sum of elements so far. 
    ll currsum = 0; 
  
    for (ll i = 0; i < n; i++) { 
  
        // Add current element to sum so far. 
        currsum += arr[i]; 
  
        // If currsum is equal to desired sum, 
        // then a new subarray is found. So 
        // increase count of subarrays. 
        if (currsum == sum)  
            res++;         
  
        // currsum exceeds given sum by currsum  
        //  - sum. Find number of subarrays having  
        // this sum and exclude those subarrays 
        // from currsum by increasing count by  
        // same amount. 
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
          
  
        // Add currsum value to count of  
        // different values of sum. 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 
 
int main()
{
   fastio
   ll t,w;
   cin>>t;
   while(t--)
   {
       ll n;string str;
       cin>>n>>str;
       ll ara[100005];
       for(ll i=0;i<n;i++)
       {
           ara[i]=str[i]-'0'-1;
       }
       cout<<findSubarraySum(ara,n,0)<<endl;
   }
}
