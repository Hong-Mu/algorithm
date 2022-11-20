#include <iostream>
#include <math.h>

using namespace std;

int sieve[1000001]; // 에라토스테네스의 체

int main(){
  int m, n;
  cin >> m >> n;

  sieve[1] = 1; // 0: 소수, 1: 소수 아님

  for(int i = 2; i <= sqrt(n); i++){ // 제곱근까지만 실행하면 뒤에도 다 제거됨
    if(sieve[i] == 0){ // 소수의 배수들을 차례로 죽여나감
      // 제곱부터 시작하는 이유는 위와 동일
      for(int j = i * i; j <= n; j = j + i){ 
        sieve[j] = 1;
      }
    }
  }

  // 결과 출력
  for(int i = m; i <= n; i++){
    if(sieve[i] == 0){
      cout << i << '\n';
    }
  }

}