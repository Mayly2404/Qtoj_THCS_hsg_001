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
    #define task "khue"
    if (fopen(task".inp", "r"))
    {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    string s1, s2, ans1 = "", ans2 = "";
    cin >> s1 >> s2;

    int n = min(s1.length(), s2.length());
    int i = 0;
    while (i < n)
    {
        if (s1[i] < s2[i])
            ans2 += s2[i];
        else if (s1[i] > s2[i])
            ans1 += s1[i];
        else
        {
            ans1 += s1[i];
            ans2 += s2[i];
        }
        i++;
    }

    while (i < s1.length())
    {
        ans1 += s1[i];
        i++;
    }

    while (i < s2.length())
    {
        ans2 += s2[i];
        i++;
    }

    while (ans1.length() > 1 && ans1[0] == '0')
        ans1.erase(0, 1);
    while (ans2.length() > 1 && ans2[0] == '0')
        ans2.erase(0, 1);
    if (ans1 == "") ans1 = "0";
    if (ans2 == "") ans2 = "0";
    cout << ans1 << endl;
    cout << ans2 << endl;
}


