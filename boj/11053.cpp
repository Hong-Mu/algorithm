#include <iostream>

using namespace std;

int arr[1000];
int dp[1000];

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int result = -1;
  for(int i = 0; i < n; i++){
    int maxValue = 0;
    for(int j = 0; j < i; j++){
      if(arr[j] < arr[i]){
        if(dp[j] > maxValue){
          maxValue = dp[j];
        }
      }
    }
    dp[i] = maxValue + 1;
    if(dp[i] > result){
      result = dp[i];
    }
  }
  cout << result; 
}