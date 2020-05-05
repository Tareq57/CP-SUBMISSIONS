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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack <char> st;
    for(ll i=0;i<n;i++)
    {
        if(st.empty()||s[i]=='(')
           st.push(s[i]);
        else
        {
            if(st.top()!=s[i])
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
    }

    if(st.size()==0||st.size()==2)
        {
            if(st.empty())
                cout<<"Yes"<<endl;
            else
            {
                char x=st.top();
                st.pop();
                if(st.top()!=x)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
        }
    else
        cout<<"No"<<endl;
}
