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
signed main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #define task "sobersong"
    if (fopen(task".inp", "r"))
    {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    // sub 1: 1e5
    // sub 2: 1e9
    ll primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    ll n;
    cin >> n;
    // sub 1
//    for (int i = 1; i <= n; ++i)
//    {
//        bool found = false;
//        for (int j = 2; j <= 30; ++j)
//            if (i % j == 0)
//                {
//                    found = true;
//                    break;
//                }
//        if (found == false)
//            cout << i << "\n";
//        cout << "khanh" << "\n";
//    }
//    return 0;
    // end sub 1
    ll ans = 0;
    for (int i = 0; i < (1 << 10); ++i)
    {
        ll mul = 1, cnt = 0;
        for (int j = 0; j < 10; ++j)
            if (i & (1 << j))
            {
                if (mul <= n) mul *= primes[j];
                cnt ++;
            }
        if (cnt % 2) ans -= n / mul;
        else ans += n / mul;
    }
    cout << ans;
    return 0;
}
