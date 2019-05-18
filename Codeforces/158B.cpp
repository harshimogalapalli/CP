#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
  int n,temp;
  cin >> n;
  int a[4] = {0};
  for(int i = 0; i < n; ++i){
    cin >> temp;
    a[temp-1]++;
  }
  long ans = 0;
  ans += a[3];
  ans += a[2];
  a[0] = max(0,a[0]-a[2]);
  ans += a[0]/4;
  a[0] = a[0]%4;
  ans += a[1]/2 ;
  a[1] = a[1] % 2;
  ans += ceil( (a[0] + a[1]*2)/4.0 );
  cout << ans << endl;
  return 0;
}

