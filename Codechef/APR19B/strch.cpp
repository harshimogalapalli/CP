#include <iostream>
#include <string>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    long n;
    string s;
    char x;
    cin >> n;
    cin >> s;
    cin >> x;
    long c = 0;
    long sum = 0;
    for(long i = 0; i < n; 
        i++)
    {
      if(s[i] == x){
        sum += (c*(c+1))/2;
        c = 0;
      }
      else c++;
    }
    sum += (c*(c+1))/2;
    cout << ((n * (n+1)) / 2) - sum << endl;
  }
  return 0;
}



