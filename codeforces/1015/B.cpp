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
    string str,str1;
    cin>>str>>str1;
    string s=str,s1=str1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s!=s1)cout<<-1<<endl;
    else
    {
        vll vec;
        for(ll i=0;i<n;i++)
        {
            if(str[i]==str1[i])
                continue;
            for(ll j=i+1;j<n;j++)
            {
                if(str1[i]==str[j])
                {
                    for(ll k=j;k>i;k--)
                    {
                        vec.pb(k);
                        swap(str[k],str[k-1]);
                    }
                    break;
                }
            }
        }
        cout<<vec.size()<<endl;
        for(auto x:vec)cout<<x<<" ";
        cout<<endl;
    }


}
