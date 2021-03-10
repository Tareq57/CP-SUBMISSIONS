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
        ll n;
        cin>>n;
        ll miner[100001],dim[100001];
        ll cnt1=0,cnt=0;
        for(ll i=0;i<2*n;i++)
        {
            ll x,y;
            cin>>x>>y;
            if(x==0)
            {
                miner[cnt]=abs(y);
                cnt++;
            }
            else
            {
                dim[cnt1]=abs(x);
                cnt1++;
            }
        }
        sort(miner,miner+n);
        sort(dim,dim+n);
        double sum=0;
        for(ll i=0;i<n;i++)
        {
            ll p=(miner[i]*miner[i]+dim[i]*dim[i]);
            //cout<<p<<endl;
            sum+=((double)sqrt(p));
        }
        printf("%.12lf\n",sum);



    }     
}
 