#include <bits/stdc++.h>
using namespace std;

bool isFibo(vector<long long> &a) {
    int n = a.size();
    for (int i = 2; i < n; i++)
        if (a[i] != a[i - 1] + a[i - 2])
            return false;
    return true;
}

vector<string> checkFibonacciAllocation() {
    int t;
    cin >> t;
    vector<string> ans;
    while (t--) {
        int k;
        cin >> k;
        vector<long long> freq(k);
        for (int i = 0; i < k; i++) cin >> freq[i];
        sort(freq.begin(), freq.end());

        if (k < 3) {
            ans.push_back("YES");
            continue;
        }

        bool ok = false;
        if (isFibo(freq)) ok = true;
        else {
            swap(freq[0], freq[1]);
            if (isFibo(freq)) ok = true;
            swap(freq[0], freq[1]);
            swap(freq[k - 1], freq[k - 2]);
            if (isFibo(freq)) ok = true;
        }

        ans.push_back(ok ? "YES" : "NO");
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> result = checkFibonacciAllocation();
    for (auto &r : result) cout << r << '\n';
    return 0;
}
