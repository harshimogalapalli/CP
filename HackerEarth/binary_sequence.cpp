#include <bits/stdc++.h>

using namespace std;

long foo(long a){
  return  (a * (a - 1))/2;
}

int main(){
  int t;
  string ans[2] = {"No", "Yes"};
  cin >> t;
  while(t--){
    long x,y,a,b;
    cin >> x >> y >> a >> b;
    cout << ans[foo(x+y) == (a + b + foo(x) + foo(y))] << endl;
  }
  return 0;
}

