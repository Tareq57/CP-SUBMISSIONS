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
bool check_balanced(vector<char> vec)
{
	//cout<<56789<<endl;
	stack<char> st;
	for(ll i=0;i<vec.size();i++)
	{
		if(st.empty())
		{
			st.push(vec[i]);
			continue;
		}
		else
		{
			char ch=st.top();
			if(vec[i]==')')
			{
				if(ch!=vec[i])
				{
					st.pop();
				}
				else
				{
					return false;
				}
			}
			else
			st.push(vec[i]);
		}
	}
	if(st.empty())
	return true;
	else
	return false;
}
int main()
{
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
		cin>>n;
		string str;
		cin>>str;
		ll cnt0=0,cnt1=0;
		for(ll i=0;i<n;i++)
		{
			if(str[i]=='1')
			cnt1++;
			else
			cnt0++;
		}
		if(str[0]!='1'||str[n-1]!='1'||cnt1&1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			vector<char> vec1(n),vec2(n);
			char ch=')';
			ll p=0;
			for(ll i=0;i<n;i++)
			{
				if(str[i]=='0')
				{
					vec1[i]=ch;
					if(ch==')')
					ch='(';
					else
					ch=')';
					vec2[i]=ch;
				}
				else
				{
					if(p<cnt1/2)
					{
						vec1[i]='(';
						vec2[i]='(';
						p++;
					}
					else
					{
						vec1[i]=')';
						vec2[i]=')';
					}
				}
			}
			if(check_balanced(vec1)&&check_balanced(vec2))
			{
				cout<<"YES"<<endl;
				for(auto x:vec1)cout<<x;
				cout<<endl;
				for(auto x:vec2)cout<<x;
				cout<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
    }
}
 