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
#define up upper_bound
#define lp lower_bound
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    string str,ans[5];
    cin>>str;
    bool ok=true;

    for(ll i=0;i<5;i++)
    {
        cin>>ans[i];
    }
    for(ll i=0;i<5;i++)
    {
        if(ans[i][0]==str[0]||ans[i][1]==str[0]||ans[i][0]==str[1]||ans[i][1]==str[1])
        {
            ok=false;
            break;
        }
    }
    if(ok)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
