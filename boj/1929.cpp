#include <iostream>
#include <math.h>

using namespace std;

int sieve[1000001];

int main(){
  int m, n;
  cin >> m >> n;

  sieve[1] = 1;

  for(int i = 2; i <= sqrt(n); i++){
    if(sieve[i] == 0){
      for(int j = i * i; j <= n; j = j + i){
        sieve[j] = 1;
      }
    }
  }

  for(int i = m; i <= n; i++){
    if(sieve[i] == 0){
      cout << i << '\n';
    }
  }

}