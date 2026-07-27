//https://codeforces.com/contest/616/problem/D
#include<bits/stdc++.h>
#define pb push_back
#define int long long

using namespace std;
using ii = pair<int,int>;
using tp = tuple<int,int,int>;

const int M = 1e6 + 10;
const int N = 1e3 + 10;
const int mod = 1e9 + 7;
int n, k, a[M], dd[M];
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i = 1;i <= n; i++) cin >> a[i];
    int j = 1, cnt = 0, l = 1, r = 1;
    for(int i = 1;i <= n; i++) {
        if(!dd[a[i]]) cnt++;
        dd[a[i]]++;
        while(cnt > k) {
            dd[a[j]]--;
            if(!dd[a[j]]) cnt--;
            j++;
        }
        if(r - l + 1 < i - j + 1) {
            l = j;
            r = i;
        }
    }
    cout << l << " " << r;

}

