#include <bits/stdc++.h>

using namespace std;

int stairs[300];
int dp[300];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> stairs[i];
  }

  dp[0] = stairs[0];
  dp[1] = stairs[0] + stairs[1];
  dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);


  for(int i = 3; i < n; i++){
    dp[i] = stairs[i] + max(dp[i-2], dp[i-3] + stairs[i-1]);
  }

  cout << dp[n-1];
}