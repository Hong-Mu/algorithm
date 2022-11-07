#include <iostream>

using namespace std;

int dp[100001];
int coins[] = {5, 2};

int main(){
  int n;
  cin >> n;

  for(int i = 1; i <= n; i++){
    dp[i] = 50001;
  }

  for(int i = 1; i <= n; i++){
    for(int j = 0; j < 2; j++){
      if(i >= coins[j] && dp[i - coins[j]] + 1 < dp[i]){
        dp[i] = dp[i - coins[j]] + 1;
      }
    }
  }

  if(dp[n] == 50001) cout << -1;
  else cout << dp[n];
}