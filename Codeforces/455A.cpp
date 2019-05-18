#include <iostream>
#include <vector>

using namespace std;

int main(){
  long long m = 1e5 + 5;
  long long n;
  cin >> n;
  vector<long long> a(m,0);
  long temp;
  for(long long i = 0; i != n; ++i){
    cin >> temp;
    a[temp]++;
  }
  vector<long long> dp(m,0);
  dp[m-1] = a[m-1];
  dp[m-2] = a[m-2];
  for(long long i = m-3; i != 0; --i){
    dp[i] = max(dp[i+2] + i*a[i], dp[i+1]);
  }
  cout << dp[1] << endl;
  return 0;
}
