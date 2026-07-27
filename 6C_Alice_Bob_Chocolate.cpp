//https://codeforces.com/contest/6/problem/C
#include<bits/stdc++.h>
#define pb push_back
#define int long long

using namespace std;
using ii = pair<int,int>;
using tp = tuple<int,int,int>;

const int M = 1e6 + 10;
const int N = 1e3 + 10;
const int mod = 1e9 + 7;
int n, a[M];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 1;i <= n; i++) cin >> a[i];
    int l = 1, r = n, sumA = 0, sumB = 0;
    while(l <= r) {
        if(sumA <= sumB) {
            sumA += a[l];
            l++;
        }
        else {
            sumB += a[r];
            r--;
        }
    }
    cout << l - 1 << " " << n - l + 1;

}

