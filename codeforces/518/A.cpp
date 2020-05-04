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
#define up upper_bound
#define lp lower_bound
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    string s,t;
    cin>>s>>t;
    ll n=s.size(),bo=0;
    bool ok=true;
    for(ll i=0;i<n;i++)
    {
       if(t[i]>s[i])
       {
           if(t[i]-s[i]==1)
            {
               if(i==n-1)
                break;
               else
               {
                   if(s[i+1]<'z')
                   {
                       s[i+1]++;
                   }
                   else
                   {
                       s[i]++;
                       for(ll j=i+1;j<n;j++)
                       {
                           s[j]='a';
                       }
                   }
               }
            }
           else
           {
              s[i]++;
           }
           ok=false;
           break;
       }

    }
    if(ok)
        cout<<"No such string"<<endl;
    else if(t.compare(s)==0)
        cout<<"No such string"<<endl;
    else
        cout<<s<<endl;

}
