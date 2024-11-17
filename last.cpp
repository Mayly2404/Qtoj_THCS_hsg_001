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
int i, testcase;
string s;
bool found;
ll res;
signed main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #define task "last"
    if (fopen(task".inp", "r"))
    {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    cin >> testcase;
    while (testcase--)
    {
        cin >> s;
        res = 1;
        found = false;
        for (i = 0; i + 1< s.size(); ++i)
        {
            res += (s[i] != s[i + 1]);
            found |= (s[i] == 'W' && s[i + 1] == 'B');
        }
        cout << res - found << "\n";
    }
    return 0;
}
