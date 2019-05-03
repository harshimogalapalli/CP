#include <iostream>
#include <limits>

using namespace std;

int main()
{
  int n;
  long temp;
  cin >> n;
  long max = INT32_MIN, smax = INT32_MIN;
  while(n--){
    cin >> temp;
    if(temp > max){
      smax = max;
      max = temp;
    }
    else if(temp > smax && temp < max){
      smax = temp;
    }
  }
  if(smax == INT32_MIN )
    smax = max;
  cout << (smax % max) << endl;

  return 0;
}


