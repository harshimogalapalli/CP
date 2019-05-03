#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n,r,m,l,A[100005];
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> A[i];
        }
        l = 0; r = n-1;
        while(l < r){
            m = l + (r-l)/2;
//            cout <<l << " "<< m <<" " << r <<  endl;
            if(A[m] != A[m+1] && A[m] != A[m-1]){
                l = m;
                break;
            }
            else if( m % 2){
                if(A[m] == A[m-1]) l = m + 1;
                else r = m - 1;
            }
            else{
                if(A[m] == A[m+1]) l = m + 2;
                else r =  m - 2;
            }
        }
        cout << A[l] << endl;
    }
    return 0;
}