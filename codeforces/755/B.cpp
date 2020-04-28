#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define push_back
int main()
{
    ll n,m;
    cin>>n>>m;
    ll pol=n,enemy=m,cnt=0;
    string str[n];
    for(ll i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(ll i=0;i<m;i++)
    {
        string stre;
        cin>>stre;
        for(ll j=0;j<n;j++)
        {
            if(stre==str[j])
            {
                pol--;
                enemy--;
                cnt++;
            }
        }
    }
    pol+=(cnt%2);
    if(pol>enemy)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}