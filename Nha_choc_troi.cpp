#include <bits/stdc++.h>
using namespace std;

const int M = 1e6 + 10;
const int N = 1e3 + 10;

long long n, d;
bool dd[M];
long long h[M], ret[M], t[M];
pair<long long, long long> b[M];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> d;
        for (int i = 1; i <= n; i++)  cin >> h[i];
        for (int i = 1; i <= d; i++)  cin >> t[i];
        for (int i = 1; i <= n; i++) {
            b[i].first = h[i];
            b[i].second = i;
        }
        sort(b + 1, b + n + 1, greater<pair<long long, long long>>());
        long long cnt = 0;
        int idx = 1;
        for (int j = d; j >= 1; j--) {
            while (b[idx].first > t[j] && idx != n + 1) {
                int i = b[idx].second;
                if ((!dd[i - 1] || i == 1) && (!dd[i + 1] || i == n)) {
                    cnt++;
                }
                if (dd[i - 1] && dd[i + 1]) {
                    cnt--;
                }
                dd[i] = true;
                idx++;
            }
            ret[j] = cnt;
        }
        for (int i = 1; i <= d; i++) {
            cout << ret[i] << " ";
        }
        cout << "\n";
        for (int i = 1; i <= n; i++) {
            dd[i] = false;
        }
    }
}
