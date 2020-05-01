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
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);
int main()
{
    string gues,sat;
    bool ok=true;
    string res;
    cin>>gues>>sat>>res;
    sort(res.begin(),res.end());
    string add=gues+sat;
    sort(add.begin(),add.end());
    if(add.size()==res.size())
    {
        for(int i=0;i<add.size();i++)
        {
            if(add[i]!=res[i])
            {
                ok=false;
                break;

            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}

