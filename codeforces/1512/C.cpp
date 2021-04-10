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
bool pal(string ara,ll n)
{
	bool ok=true;
	for(ll i=0;i<n;i++)
	{
		if(ara[i]!=ara[n-i-1])
		{
			ok=false;
			break;
		}
	}
	return ok;
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
		cin>>a>>b;
		string str;
		cin>>str;
		ll n=str.size(),cnt0=0,cnt1=0;
		for(ll i=0;i<n;i++)
		{
			if(str[i]=='0')
			cnt0++;
			else if(str[i]=='1')
			cnt1++;
		}
		bool ok=true;
		ll p=n-cnt0-cnt1;
		a-=cnt0;b-=cnt1;
		for(ll i=0;i<n;i++)
		{
			
			if(str[i]=='?'&&str[i]!=str[n-i-1])
			{
				//cout<<i<<" "<<n-i-1<<endl;
				str[i]=str[n-i-1];
				if(str[n-i-1]=='0')
				a--;
				else
				b--;
			}
		}
		for(ll i=0;i<n;i++)
		{
			if(i==n-i-1&&str[i]=='?')
			{
				//cout<<"passed"<<endl;
				if(a>0)
				{
					str[i]='0';
					a--;
					break;
				}
				else if(b>0)
				{
					str[i]='1';
					b--;
				}
				else
				ok=false;
				break;
			}
			if(str[i]=='?')
			{
				if(a>=2)
				{
					str[i]='0';
					str[n-i-1]='0';
					a-=2;
				}
				else if(b>=2)
				{
					str[i]='1';
					str[n-i-1]='1';
					b-=2;
				}
				else
				{
					ok=false;
					break;
				}
			}
		}
		//cout<<a<<" "<<b<<endl;
		//cout<<str<<endl;
		if(a==0&&b==0&&ok&&pal(str,n))
		{
			cout<<str<<endl;
		}
		else
		cout<<-1<<endl;
    }
}
 