#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int m[4] = {0,0, 3, 4};
  int A[101];
  bool flag = 1;
  for(int i = 0; i < n; ++i) cin >>A[i];
  int ans = 0;
  for(int i = 1; i < n; ++i){
    if(A[i] == 1 ){
       ans += m[A[i-1]];
    }
    else if(A[i-1] != 1 ){
      flag = 0;
      break;
    }
    else if(A[i] == 2 && i > 1 && A[i-2] == 3)
      ans += 2;
    else ans += m[A[i]];
  }
  if(flag){
    cout << "Finite" << endl;
    cout << ans << endl;
  }
  else cout << "Infinite" << endl;
}
     


