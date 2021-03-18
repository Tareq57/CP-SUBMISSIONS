/*BISMILLAH
THE WHITE WOLF
NO DREAM IS TOO BIG AND NO DREAMER IS TOO SMALL*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<long long> vll;
typedef vector<int> vi;
 
#define io ios_base::sync_with_stdio(false)
#define pb push_back
#define SET(n, i) bool(n & (1LL << i))
#define PI 2 * acos(0.0)
#define all(r) (r).begin(), (r).end()
#define dbg(a) cout << #a << " ->->->-> " << a << "\n"
#define inf 100000000000000000
#define mod 1000000007
#define N 1009
 
int dirx[] = {1, -1, 0, 0, 1, 1, -1, -1}, diry[] = {0, 0, 1, -1, 1, -1, 1, -1};
 
//=============================================ASIFAZAD==============================================//
 
int32_t main()
{
    io;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = inf, ev = 0, evm = inf, od = 0, odm = inf;
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (i & 1)
            {
                od += x;
                odm = min(odm, x);
            }
            else
            {
                ev += x;
                evm = min(evm, x);
            }
            if (i >= 2)
            {
 
                ll cur = od + (n - (i + 1) / 2) * odm + ev + (n - i / 2) * evm;
                ans = min(ans, cur);
            }
        }
        cout << ans << "\n";
    }
 
    return 0;
}