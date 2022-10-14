#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  vector<pair<int, int>> arr(n);
  for(int i = 0; i < n; i++){
    cin >> arr[i].second >> arr[i].first;
  }
  sort(arr.begin(), arr.end()); // 종료 시간 기준 오름차순 정렬

  int cnt = 1;
  int previous = arr[0].first; // 이전 회의 종료 시간
  for(int i = 1; i < n; i++){
    if(previous <= arr[i].second){
      previous = arr[i].first;
      cnt++;
    }
  }
  cout << cnt;
}