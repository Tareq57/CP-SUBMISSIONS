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
    ll n,q;
	cin>>n>>q;
	vll vec;
	map<ll,ll>mapp;
	for(ll i=1;i<=50;i++)
	{
		mapp[i]=inf;
	}
	for(ll i=0;i<n;i++)
	{
		ll num;
		cin>>num;
		mapp[num]=min(mapp[num],i+1);
	}
	while(q--)
	{
		ll p;
		cin>>p;
		cout<<mapp[p]<<" ";
		for(ll i=1;i<=50;i++)
		{
			if(mapp[i]!=0&&mapp[i]<mapp[p])
			{
				mapp[i]++;
			}
		}
		mapp[p]=1;

	}
	cout<<endl;

}
 