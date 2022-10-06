#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;

  int arr[50][2] = {0};
  for(int i = 0; i < n; i++){
    cin >> arr[i][0] >> arr[i][1];
  }

  int rank = 1;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]){
        rank++;
      }
    }
    cout << rank << ' ';
    rank = 1;
  }
}