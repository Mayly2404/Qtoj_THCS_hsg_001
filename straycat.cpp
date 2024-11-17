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

ll s=0, nmax=0,ans=0,k=0;
ll n;
bool a[10];int d[10];
vector <ll> f;
map <ll, int> c;
bool kt(ll x)
{
    if (x==0||x>n || (x%10)%5!=0) return 0;
    memset(d,0,sizeof(d));
    while (x>0)
    {
        d[x%10]++;
        x/=10;
    }
    for (int i=0;i<=9;i++)
    	if (d[i]>1) return 0;
    return 1;
}/*
bool checkvar(ll ss)
{
	for (int ii=0; ii<f.size(); ii++)
		if (f[ii] == ss)
			return 0;
	return 1;
}*/
void hoanvi(int i)
{
	if (i>nmax)
	{
		if (kt(s) && c[s]==0)
			{
				ans++;
				c[s]=1;
			}
	}
	else
	{
		for (int j=0; j<=9; j++)
			if (a[j]==0)
			{
				a[j]=true;
				s=s*10+j;
				/*
				if (kt(s)&&checkvar(s))
					{
						ans++;
						f.push_back(i);
					}
					*/
				if (kt(s) && c[s]==0)
					{
						ans++;
						c[s]=1;
					}
				hoanvi(i+1);
				s=s/10;
				a[j]=false;
			}
	}
}


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
	ll x = n;
	while (x > 0)
	{
    	nmax ++;
    	x /= 10;
	}
	if (nmax > 10)
        nmax = 10;
	hoanvi(1);
	cout << ans;
    return 0;
}

