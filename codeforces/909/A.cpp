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
    string s,t,str;
    cin>>s>>t;
    int n=s.size();
    bool ok=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=t[0])
        {
            if(i==0)
                continue;
           n=i;
           break;
        }
    }
   for(int i=0;i<n;i++)
   {
       cout<<s[i];
   }
   cout<<t[0];

}

