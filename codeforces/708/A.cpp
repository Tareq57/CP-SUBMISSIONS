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
#define pq priority_queue
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    string str;
    ll p=-1;
    cin>>str;
    for(ll i=0;i<str.size();i++)
    {
        if(str[i]!='a')
        {
            p=i;
            break;
        }
    }
    if(p==-1)
    {
        str[str.size()-1]='z';
        cout<<str<<endl;
        return 0;
    }
    while(str[p]!='a'&&p<str.size())
    {
        str[p]--;
        p++;
    }
    cout<<str<<endl;
}

