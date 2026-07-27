//https://codeforces.com/contest/251/problem/A
#include<bits/stdc++.h>
#define pb push_back
#define int long long

using namespace std;
using ii = pair<int,int>;
using tp = tuple<int,int,int>;

const int M = 1e6 + 10;
const int N = 1e3 + 10;
const int mod = 1e9 + 7;

int n, d, x[M];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> d;
    for(int i = 1;i <= n; i++) cin >> x[i];
    int kq = 0, j = 1;
    for(int i = 1;i <= n; i++) {
        while(x[i] - x[j] > d) j++;
        int len = i - j;
        kq += len * (len - 1)/2;
    }
    cout << kq;


}

