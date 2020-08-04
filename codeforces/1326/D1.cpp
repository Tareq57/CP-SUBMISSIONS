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
bool pall(string str)
{
    string s=str;
    reverse(s.begin(),s.end());
    if(s==str)
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
        string str;
        cin>>str;
        ll n=str.size();
        ll st=0,en=n-1,siz=0;
        while(st<en)
        {
            if(str[st]==str[en])
            {
                siz++;
                st++;
                en--;
            }
            else
                break;
        }
        ll pre=0,suff=0;
        ll stp=st,enp=en;
        while(stp<=enp)
        {
            string s=str.substr(stp,enp-stp+1);
            if(pall(s))
            {
                pre=s.size();
                break;
            }
            enp--;
        }
        ll sts=st,ens=en;
        while(sts<=ens)
        {
            string s=str.substr(sts,ens-sts+1);
            if(pall(s))
            {
                suff=s.size();
                break;
            }
            sts++;
        }
        if(pre<suff)
        {
            for(ll i=0;i<siz;i++)cout<<str[i];
            for(ll i=n-siz-suff;i<n;i++)cout<<str[i];
        }
        else
        {
            for(ll i=0;i<siz+pre;i++)cout<<str[i];
            for(ll i=n-siz;i<n;i++)cout<<str[i];
        }
        cout<<endl;
    }

}
