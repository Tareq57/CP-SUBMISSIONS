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
    ll n,sum;
    cin>>n>>sum;
    ll p=sum/9,q=sum%9;
    if(p>n||(p==n&&q>0)||(n>1&&sum==0))
        cout<<-1<<" "<<-1<<endl;
    else
    {
        if(p==n)
        {
            string str(n,'9');cout<<str<<" "<<str<<endl;
            return 0;
        }
        if(p==0)
        {
           if(n-2>=0)
           {
               string str(n-2,'0');
               cout<<1<<str<<q-1<<" "<<q<<str<<0<<endl;
           }
           else
           {
               string str(n-1,'0');
               cout<<q<<str<<" "<<q<<str<<endl;
           }
            return 0;
        }
        if(q==0)
        {
            ll r=n-p;
            if(r==0)
            {
                string str(n,'9');
                cout<<str<<" "<<str;return 0;
            }
            string str(p-1,'9'),s(r-1,'0');
            cout<<1<<s<<8<<str<<" "<<str<<9<<s<<0<<endl;
            return 0;
        }
        ll r=n-p-1;
        if(r==0)
        {
            string str(p,'9');cout<<q<<str<<" "<<str<<q<<endl;
            return 0;
        }
        else
        {
            string str(p,'9'),s(r-1,'0');
            cout<<1<<s<<q-1<<str<<" "<<str<<q<<s<<0<<endl;
        }

    }


}
