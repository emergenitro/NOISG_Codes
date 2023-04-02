#include <iostream>
using namespace std;

const int mod = 998244353;

int pow_mod(int x, int n, int mod) {
    int res = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            res = (1LL * res * x) % mod;
        }
        x = (1LL * x * x) % mod;
        n /= 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int k = 2; k <= n; k++) {
        int c = 1;
        for (int i = n - k + 1; i <= n; i++) {
            c = (1LL * c * i) % mod;
            c = (1LL * c * pow_mod(i - (n - k), mod - 2, mod)) % mod;
        }
        int sum = 0;
        for (int l = 3; l <= k; l++) {
            int x = pow_mod(2, k-l, mod);
            int y = pow_mod(2, n-k, mod);
            int z = pow_mod(2, l-2, mod);
            int tmp = ((1LL * x - 1) * y % mod) * z % mod;
            sum = (sum + tmp) % mod;
        }
        ans = (ans + 1LL * c * sum % mod) % mod;
    }
    cout << ans << endl;
    return 0;
}
