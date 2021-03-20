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
ll ceil(ll p,ll q)
{
    ll r=p/q;
    if(p%q)
    r++;
    return r;
}
int main()
{
    ll t;
    ll ara[10]={0,1,5,-1,-1,2,-1,-1,8,-1};
    cin>>t;
    while(t--)
    {
        ll h,r;
        cin>>h>>r;
        string str;
        cin>>str;
        ll a=str[0]-48;
        ll b=str[1]-48;
        ll c=str[3]-48;
        ll d=str[4]-48;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        while(1)
        {
            if(ara[a]!=-1&&ara[b]!=-1&&ara[c]!=-1&&ara[d]!=-1&&(ara[b]*10+ara[a])<r&&(ara[d]*10+ara[c])<h)
            {
                    cout<<a<<b<<":"<<c<<d<<endl;
                    break;
                
            }
            
                  if(d==9)
                    {
                        if(c==9)
                        {
                            c=0;d=0;
                            if(b==9)
                            {
                                if(a==9)
                                {
                                    a=0;b=0;
                                }
                                else
                                {
                                    a++;
                                    b=0;
                                }
                            }
                            else
                            {
                                b++;
                            }
                        }
                        else
                        {
                            c++;
                            d=0;
                        }
                    }
                    else
                    {
                        d++;
                    }
                    if(c*10+d==r)
                    {
                        c=0;d=0;
                        if(b==9)
                        {
                            if(a==9)
                            {
                                a=0;b=0;
                            }
                            else
                            {
                                a++;b=0;
                            }
                        }
                        else
                        {
                            b++;
                        }
                    }
                    if(a*10+b==h)
                    {
                        a=0;b=0;
                    }
               // cout<<a<<b<<":"<<c<<d<<endl;
                
            
        }
    }
}
