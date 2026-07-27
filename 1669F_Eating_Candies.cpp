//https://codeforces.com/contest/1669/problem/F
#include<bits/stdc++.h>
#define pb push_back
#define int long long

using namespace std;
using ii = pair<int,int>;
using tp = tuple<int,int,int>;

const int M = 1e6 + 10;
const int N = 1e3 + 10;
const int mod = 1e9 + 7;
int w[M];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 1;i <= n; i++) cin >> w[i];
        int sumL = 0,sumR = 0;
        int l = 0, r = n + 1, kq = 0;
        while(l < r) {
            if(sumL <= sumR) {
                l++;
                sumL += w[l];
            }
            else {
                r--;
                sumR += w[r];
            }
            if(l == r) break;
            if(sumL == sumR) kq = max(kq, l + n - r + 1);
        }
        cout << kq << "\n";
    }

}


