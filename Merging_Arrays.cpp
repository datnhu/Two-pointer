//https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
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
    cin >> n >> m;
    for(int i = 1;i <= n; i++) cin >> a[i];
    for(int i = 1;i <= m; i++) cin >> b[i];
    int j = 1;
    for(int i = 1;i <= n; i++) {
        while(b[j] <= a[i] && j <= m) {
            cout << b[j] << " ";
            j++;
        }
        cout << a[i] << " ";
    }
    while(j <= m) {
        cout << b[j] << " ";
        j++;
    }

}

