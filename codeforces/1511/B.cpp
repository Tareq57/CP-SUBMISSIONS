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
    ll t;
    cin>>t;
    ll ara[]={2,11,101,1001,10001,100001,1000001,10000001,100000001};
    ll para[]={1,21,201,2001,20001,200001,2000001,20000001,200000001};
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        a-=c;
        b-=c;
        ll res=0;
        for(ll i=0;i<c;i++)
        {
            res+=(1*(ll)pow(10,i));
        }
        if(a==0||b==0)
        {
            cout<<res*ara[a]<<" "<<res*(ara[b])<<endl;
            //cout<<__gcd(res*ara[a],res*ara[b])<<endl;
        }
        else
        {
                cout<<res*ara[a]<<" "<<res*para[b]<<endl;
                //cout<<__gcd(res*ara[a],res*para[b])<<endl;
        }
        

    }
}
 