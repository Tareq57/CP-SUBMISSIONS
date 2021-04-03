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
#define minf -1e18
#define pi 3.14159265
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll n=str.size();
        bool ok=true;
        for(ll i=0;i<n;i++)
        {
            if(str[i]!='a')
            {
                ok=false;
                break;
            }
        }
        if(ok)
        cout<<"NO"<<endl;
        else
        {
            string s=str+"a";
            ll l=0,r=n;
            bool ok1=true;
            while(l<r)
            {
                if(s[l]!=s[r])
                {
                    cout<<"YES"<<endl;
                    cout<<s<<endl;
                    ok1=false;
                    break;
                }
                l++;r--;
            }
            if(ok1)
            {
                cout<<"YES"<<endl;
                cout<<"a"+str<<endl;
            }
        }

    }
}
/*
YES
cbabac
YES
aab
YES
zaza
YES
baa
NO
YES
nutforajarofatuna
*/
 