#include <bits/stdc++.h>
using namespace std;
#define clr(a, x) memset(a, x, sizeof(a))
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define X first
#define Y second
#define fastin                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
typedef long double ld;
typedef pair<int, int> PII;
typedef vector<int> VI;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const double eps = 1e-6;

const int maxn = 2005;
int a[maxn], b[maxn];
bool vis[2000005];
int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
#endif
    fastin int n;
    while (cin >> n)
    {
        clr(vis, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            vis[a[i]] = 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            vis[b[i]] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if ((a[i] ^ b[j]) < 2000001 && vis[a[i] ^ b[j]])
                    cnt++;
        puts((cnt & 1) ? "Koyomi" : "Karen");
    }

    return 0;
}
