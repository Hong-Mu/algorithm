#include <iostream>
#include <vector>

using namespace std;

// 배열은 전역으로 두는게 0으로 초기화 되어 평화를 유지
int dp[101][100001]; 
int weight[101];
int value[101];

int main(){
  int n, k;
  cin >> n >> k;

  for(int i = 1; i <= n; i++){
    cin >> weight[i] >> value[i];
  }

  for(int i = 1; i <= n; i++){ // i: 물품
    for(int j = 1; j <= k; j++){ // j: 무게
      if(j >= weight[i]){
        dp[i][j] = max(dp[i-1][j], dp[i-1][j - weight[i]] + value[i]);
      } else {
        dp[i][j] = dp[i-1][j];
      }
    }
  }

  cout << dp[n][k];
}