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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        ll n=str.size();
        set <char> s;
        if(n==1)
        {
            cout<<str<<endl;
            continue;
        }
        else
        {
            for(ll i=0;i<n;i++)
            {
                char p=str[i];
                ll r=0;
                while(p==str[i])
                {
                    r++;
                    i++;
                }
                i--;
                if(r%2==1)
                    s.insert(p);
            }
        }
        for(set<char> ::iterator it=s.begin();it!=s.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;

    }

}
