#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t,n,x,l,r,m;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n+5];
        for(int i = 0; i < n; ++i){
            cin >> A[i];
        }
        cin >> x;
        if(A[0] == x){
            cout << 0 << endl;
            continue;
        }
        l = 0,r = n-1;
        while(l < r){
            m = l + (r - l)/2;
            if(A[m] > A[r]){
                l = m + 1;
            } 
            else r = m;
        }
        int mindex = l;
        if(A[0] > x){
            l = mindex;
            r = n - 1;
        }
        else {
            l = 0;
            r = mindex == 0 ? (n-1): (mindex - 1);
        } 
        while(l <= r){
            m = l + (r - l)/2;
            if(A[m] == x) break;
            else if(A[m] > x) r = m - 1;
            else l = m + 1;
        }
        if(A[m] == x) cout << m << endl;
        else cout << -1 << endl;


    } 
    return 0;
}