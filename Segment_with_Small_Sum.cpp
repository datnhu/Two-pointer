//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
#include<bits/stdc++.h>
#define pb push_back
#define int long long

using namespace std;
using ii = pair<int,int>;
using tp = tuple<int,int,int>;

const int M = 1e6 + 10;
const int N = 1e3 + 10;
const int mod = 1e9 + 7;
int n,k , a[M];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 1;i <= n; i++) cin >> a[i];
    int j = 1, s = 0, kq = -1;
    for(int i = 1;i <= n; i++) {
        s += a[i];
        while(s > k) {
            s -= a[j];
            j++;
        }
        kq = max(kq, i - j + 1);
    }
    cout << kq;

}
