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
ll a, b;
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
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        while (b>a)
        {
            if (b==a)
            {
                cout << "KEYBOARD \n";
                return 0;
            }
            if (b&1)
                {
                    if ((b-1)%10)
                    {
                        cout << "ENHANCE \n";
                        return 0;
                    }
                    b = (b-1) / 10;
                }
            else
                b/=2;
        }
        if (b==a) cout << "KEYBOARD \n";
        else cout << "ENHANCE \n";
    }

    return 0;
}
