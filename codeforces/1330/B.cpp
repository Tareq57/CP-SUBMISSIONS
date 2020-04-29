#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define vll  vector <long long>
#define pll pair <long long,long long>
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        bool ok=true;
        cin>>n;
        vll vec;
        ll ara[200001];
        memset(ara,0,sizeof(ara));
        ll m=-1;
        for(ll i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            vec.pb(num);
            m=max(m,num);
            if(m>=n)
            {
                ok=false;
            }
            else
            {
                ara[num]++;
                if(ara[num]==2)
                {
                    if(num>n/2)
                    {
                        ok=false;
                    }
                }
                if(ara[num]>2)
                {
                    ok=false;
                }
            }
        }
        if(ok==false)
        {
            cout<<0<<endl;
        }
        else
        {
            ll ans=0,s=0;
            ll a[m+1];
            memset(a,0,sizeof(a));
             for(ll i=0;i<m;i++)
             {
                 a[vec[i]]++;
                 if(a[vec[i]]==2)
                 {
                     ok=false;
                     break;
                 }
             }
             if(ok)
             {
                 memset(a,0,sizeof(a));
                 for(ll i=m;i<n;i++)
                 {
                     if(vec[i]>n-m)
                     {
                         ok=false;

                     }
                     a[vec[i]]++;
                     if(a[vec[i]]==2)
                     {
                         ok=false;
                         break;
                     }
                 }
             }
             if(ok)
             {
                 ans++;
             }
             ok=true;
             memset(a,0,sizeof(a));
             for(ll i=0;i<n-m;i++)
             {
                if(vec[i]>n-m)
                {
                    ok=false;
                    break;
                }
                a[vec[i]]++;
                if(a[vec[i]]==2)
                {
                    ok=false;
                    break;
                }
             }
             if(ok)
             {
                 memset(a,0,sizeof(a));
                 for(ll i=n-m;i<n;i++)
                 {
                     a[vec[i]]++;
                     if(a[vec[i]]==2)
                     {
                         ok=false;
                         break;
                     }
                 }
             }
             if(ok)
             {
                ans++;
                s=1;
             }
             if(ans==0)
             {
                 cout<<0<<endl;
             }
             else
             {
                 if(ans==1)
                 {
                     if(s==0)
                     cout<<1<<endl<<m<<" "<<n-m<<endl;
                     else
                     cout<<1<<endl<<n-m<<" "<<m<<endl;

                 }
                 else
                 {
                     if(m==n-m)
                     {
                         cout<<1<<endl<<m<<" "<<m<<endl;
                     }
                     else
                     cout<<2<<endl<<m<<" "<<n-m<<endl<<n-m<<" "<<m<<endl;
                 }
             }

        }
    }

}
