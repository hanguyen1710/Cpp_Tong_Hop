#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = 123456789;
ll poww(ll n, ll k)
{
    if (k == 1)
        return n;
    ll x = poww(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % mod;
    else
        return (((x * x) % mod) * n) % mod;
}
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << poww(2, n - 1) << endl;
    }
}