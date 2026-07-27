//https://codeforces.com/contest/1036/problem/D
#include<bits/stdc++.h>
#define pb push_back
#define int long long

using namespace std;
using ii = pair<int,int>;
using tp = tuple<int,int,int>;

const int M = 1e6 + 10;
const int N = 1e3 + 10;
const int mod = 1e9 + 7;
int n, m, a[M], b[M];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i= 1;i <= n; i++) cin >> a[i];
    cin >> m;
    for(int i = 1;i <= m; i++) cin >> b[i];
    int j = 1, sumA = 0, sumB = 0, kq = 0;
    for(int i = 1;i <= n; i++) {
        sumA += a[i];
        while(sumB < sumA && j <= m) {
            sumB += b[j];
            j++;
        }
        if(sumB == sumA) {
            sumB = 0;
            sumA = 0;
            kq++;
        }
    }
    if(sumB == sumA && j == m + 1) cout << kq;
    else cout << -1;

}

