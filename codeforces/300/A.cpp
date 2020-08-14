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
int main()
{
    fastio
    ll n;
    cin>>n;
    vll vec,ara;
    for(ll i=0;i<n;i++){ll num;cin>>num;if(num<=0)vec.pb(num);else ara.pb(num);}
    sort(vec.begin(),vec.end());
    cout<<1<<" "<<vec[0]<<endl;
    if(ara.size()>0){
    cout<<ara.size()<<" ";for(auto x:ara)cout<<x<<" ";cout<<endl;}
    else
    {
        cout<<2<<" "<<vec[1]<<" "<<vec[2]<<endl;
    }
    if(ara.size()>0){
    cout<<vec.size()-1<<" ";for(ll i=1;i<vec.size();i++)cout<<vec[i]<<" ";}
    else {cout<<vec.size()-3<<" ";for(ll i=3;i<vec.size();i++)cout<<vec[i]<<" ";}



}
