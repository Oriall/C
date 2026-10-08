#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007;
int a[1005][1005];

int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k > n || k < 0) return 0;

    if (a[k][n] != 0) return a[k][n];

    a[k][n] = (C(k, n - 1) + C(k - 1, n - 1)) % MOD;
    
    return a[k][n]% MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    cin>>k>>n;
        cout << C(k, n) << "\n";
    }

