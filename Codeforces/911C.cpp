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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
    freopen("1.out", "w", stdout);
#endif

    int a[1505];
    int x;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        a[x]++;
    }
    if (a[1] || a[2] >= 2 || a[3] == 3 || a[2] == 1 && a[4] == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
