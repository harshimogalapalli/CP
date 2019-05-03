#include<bits/stdc++.h>
using namespace std;
long long A[10000005];

int searchmin(int l, int r )
{
    if(l >= r) return l;
    int m = l + (r - l) / 2;
    if(A[m] < A[r]) return searchmin(l,m);
    if(A[m] > A[r]) return searchmin(m+1,r);
    int lv = searchmin(l,m),rv = searchmin(m+1,r);
    if(A[lv] <= A[rv]) return lv;
    return rv;
}
int main(){
    ios_base::sync_with_stdio(false);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> A[i];
        }
       cout << searchmin(0,n-1) <<  endl;
    } 
    return 0;
}