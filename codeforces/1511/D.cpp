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
#define minf -1e15
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    fastio
    ll n,k;
    cin>>n>>k;
    char ch='a';
    char ara[26];
    for(ll i=0;i<k;i++)
    {
        ara[i]=ch;
        ch++;
    }
    ch='a';
    vector<char> vec;
    for(ll i=0;i<k;i++)
    {
        vec.pb(ara[i]);
        for(ll j=i+1;j<k;j++)
        {
            vec.pb(ara[i]);
            vec.pb(ara[j]);
        }
    }
    vector<char>res=vec;
    while(n>res.size())
    {
        for(ll i=0;i<vec.size();i++)
        {
            res.pb(vec[i]);
        }
    }
    while(n<res.size())res.pop_back();
    for(auto x:res)cout<<x;
    cout<<endl;
}
 