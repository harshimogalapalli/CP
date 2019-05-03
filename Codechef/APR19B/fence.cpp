#include <iostream>
#include <map>
#include <utility>

using namespace std;

long xc[4] = {-1, 0, 0, 1}, yc[4] = {0, 1, -1, 0};

int main()
{
  int t;
  cin >> t;
  while(t--){
    long n,w,k;
    cin >> n >> w >> k;
    map<pair<long,long>, bool> m;
    long x,y;
    for( long i = 0; i != k; ++i)
    {
      cin >> x >> y;
      m[make_pair(x,y)] = 1;
    }
    long ans = 0;
    for(map<pair<long,long>, bool>::const_iterator i = m.begin();
        i != m.end(); ++i)
    {
      x = i->first.first;
      y = i->first.second;
      for(long j = 0; j != 4; ++j)
      {
        long xn = x + xc[j];
        long yn = y + yc[j];
        if(m.find(make_pair(xn,yn)) == m.end())
          ans++;

      }
    }
    cout << ans << endl;
  }
  return 0;
}


