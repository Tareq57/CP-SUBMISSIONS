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
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    fastio
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll p=n/3,cnt0=0,cnt1=0,cnt2=0;
    for(ll i=0;i<n;i++)
        if(str[i]=='1')cnt1++;
        else if(str[i]=='2')cnt2++;
        else cnt0++;
    cnt1-=p;cnt2-=p;cnt0-=p;
    ll l=0,r=n-1;
    while(cnt2<0&&l<n&&r>=0)
    {
        if(str[r]=='0'&&cnt0>0)
        {
            str[r]='2';cnt2++;cnt0--;
           // cout<<9<<endl;
        }
        if(cnt1>0&&str[r]=='1')
        {
            str[r]='2';cnt2++;cnt1--;
        }
        r--;
    }
    l=0;r=n-1;
    while(cnt0<0&&l<n&&r>=0)
    {
        if(cnt1>0&&str[l]=='1')
        {
            str[l]='0';
            cnt1--;
            cnt0++;
            l++;
            continue;
        }
        if(cnt2>0&&str[l]=='2')
        {
            str[l]='0';cnt0++;cnt2--;l++;continue;
        }
       // cout<<8<<endl;
        l++;
    }
    l=0;r=n-1;
    while(cnt1<0&&l<n&&r>=0)
    {
        if(cnt2>0&&str[l]=='2')
        {
            str[l]='1';
            cnt1++;cnt2--;
        }
        if(cnt1==0)
        break;
        if(cnt0>0&&str[r]=='0')
        {
            str[r]='1';cnt1++;cnt0--;
        }
       // cout<<7<<endl;
        l++;r--;
    }
    //cout<<str<<endl;

    cout<<str<<endl;

}
