#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb  push_back
int main()
{
    ll n,p;
    cin>>n;
    vector <string> vec;
    vector <ll> b(n,1);
    for(ll i=0;i<n;i++)
    {
        string str;
        cin>>str;
        vec.pb(str);
    }
    for(ll i=0;i<n;i++)
    {
        bool ok=true;
        p=-1;
        for(ll j=0;j<i;j++)
        {
           p++;
            if(vec[i]==vec[j])
            {
               ok=false;
               cout<<vec[j]<<b[p]<<endl;
               b[p]++;
               break;
            }
        }
        if(ok)
        {
            cout<<"OK"<<endl;
        }
    }
}