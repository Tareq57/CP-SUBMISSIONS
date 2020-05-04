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

    string str;
    cin>>str;
    vll vec;
    ll lo=0,hi=str.size()-1;
    bool ok=true;
    while(lo<hi)
    {
        if(str[lo]==')')
        {
            lo++;
        }
        else
        {
            if(str[lo]!=str[hi])
            {
                vec.pb(lo+1);
                vec.pb(hi+1);
                hi--;lo++;
                ok=false;
            }
            else
                hi--;
        }

    }
    if(ok)
        cout<<0<<endl;
    else
    {
        sort(vec.begin(),vec.end());
        cout<<1<<endl;
        cout<<vec.size()<<endl;
        for(ll i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
    }

}
