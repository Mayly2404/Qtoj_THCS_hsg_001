#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 5;
const int mod  = 1e9 + 7;
#define fi first
#define se second
// debugging template for (4) line by Mayly
#define dbg(x)           cerr << (#x) << ": " << x << "\n";
#define dbga(x, l, r)    cerr << (#x) << ": "; for (int ii = l; ii <= r; ++ii) cerr << x[ii] << " "; cerr << "\n";
#define run(b,e)         cerr << "Finish in: " << fixed << setprecision(4) << (float)(e - b) / CLOCKS_PER_SEC <<" s" << "\n";
#define time(x)          clock_t x = clock()
// -------------------- End template --------------------
ll f[maxn], g[maxn], a[maxn];
int ans, n;
signed main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #define task "khue"
    if (fopen(task".inp", "r"))
    {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    cin >> n;
    f[0] = -1e9+7;
    for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            f[i] = max(f[i - 1], a[i]);
        }
    g[n + 1] = 1e9+7;
    for (int i = n; i >= 1; --i)
        g[i] = min(g[i + 1], a[i]);
    for (int i = 2; i <= n; ++i)
        ans += (f[i - 1] <= g[i]);
    cout << ans;
    return 0;
}
