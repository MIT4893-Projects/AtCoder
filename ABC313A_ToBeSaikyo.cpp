//* 2023-08-05 19:04:04	A - To Be Saikyo	Minh4893IT 	C++ (GCC 9.2.1)	100	896 Byte	AC	6 ms	3572 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    int n;
    cin >> n;

    int val;
    cin >> val;

    int ma = 0;
    for (int i = 1; i < n; ++i)
    {
        int val;
        cin >> val;
        ma = max(ma, val);
    }

    if (val <= ma)
        cout << ma - val + 1;
    else
        cout << 0;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
