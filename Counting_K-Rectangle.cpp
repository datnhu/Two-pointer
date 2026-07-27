//https://oj.vnoi.info/problem/krect
#include<bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;
int n, m, k, cnt[110][30], s[2][30], kq=0;
char ch[110][110];
void tru(int idx,int tt,int &D)
{
  for(int i = 0;i <= 25; i++)
  {
    s[tt][i] -= cnt[idx][i];
    if(!s[tt][i] && cnt[idx][i]) D--;
  }
}
void cong(int idx,int tt,int &D)
{
  if(idx == m+1) return ;
  for(int i = 0;i <= 25; i++)
  {
    if(!s[tt][i] && cnt[idx][i]) D++;
    s[tt][i] += cnt[idx][i];
  }
}
void solve()
{
  for(int i = 0;i <= 25; i++) s[0][i] = s[1][i] = 0;
  int r = 0, l = 0, R = 0, L = 0;
  for(int i = 1;i <= m; i++)
  {
    while(L < k)
    {
      if(l == m) break;
      l++;
      cong(l, 0, L);
    }
    while(R <= k)
    {
      if(r == m + 1) break;
      r++;
      cong(r, 1, R);
    }

    if(L == k) kq += max(0ll, r - l);
    tru(i, 0, L);
    tru(i, 1, R);
  }

}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m >> k;
  for(int i = 1;i <= n; i++)
  {
    for(int j = 1;j <= m; j++) cin >> ch[i][j];
  }
  for(int i = 1;i <= n; i++)
  {
    for(int i = 1;i <= m; i++)
        for(int j = 0;j <= 25; j++) cnt[i][j]=0;

    for(int j = i;j <= n; j++)
      {
      for(int e = 1;e <= m; e++) cnt[e][ch[j][e]-'A']++;
      solve();
      }
  }
  cout << kq;
}
