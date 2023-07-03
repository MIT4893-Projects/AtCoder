//* 2023-07-03 21:40:10	D - Div Game	Minh4893IT 	C++ (GCC 9.2.1)	400	1054 Byte		20 ms	3580 KB

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

    map<int, int> factorize;
    for (int i = 2; i * i <= n; ++i)
        while (n % i == 0)
        {
            ++factorize[i];
            n /= i;
        }

    if (n > 1)
        ++factorize[n];

    int result = 0;
    for (auto p : factorize)
        for (int i = 1; i <= p.second; ++i)
        {
            ++result;
            p.second -= i;
        }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
