#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;
const int N = 1e5 + 5;

ll power(ll x, ll y)
{
    if (y < 0)
        return 1;
    ll res = 1;
    x = x % mod;
    while (y)
    {
        if (y & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }
    return res;
}

vector<ll> ones(N);
vector<ll> sz(N);
void precompute()
{
    ones[0] = 0;
    ones[1] = 1;

    sz[0] = 1;
    sz[1] = 1;
    for (ll i = 2; i <= N; i++)
    {
        ones[i] = (ones[i - 1] + ones[i - 2]) % mod;
        sz[i] = (sz[i - 1] + sz[i - 2]) % (mod - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = (ones[n] * (power(2, (sz[n] - 1) % (mod - 1)))) % mod;
        cout << ans << endl;
    }
    return 0;
}