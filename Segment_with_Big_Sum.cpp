//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B
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
    int j = 0, s = 0, kq = 1e9;
    for(int i = 1;i <= n; i++) {
        while(s < k && j < n) {
            j++;
            s += a[j];
        }
        if(s >= k) kq = min(kq, j - i + 1);
        s -= a[i];
    }
    cout << (kq == 1e9 ? -1 : kq);

}
