#include<bits/stdc++.h>
using namespace std;
int A[35][35];
int findmin(int r,int rmax,int c, int x){
    if(r == rmax || c < 0 ) return 0;
    if(A[r][c] == x) return 1;
    if(A[r][c] < x) r++;
    if(A[r][c] > x) c--;
    return findmin(r,rmax,c,x);

}
int main(){
    ios_base::sync_with_stdio(false);
    int t,n,m,x; 
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 0; i < n;++i)
            for(int j = 0; j < m;++j)
                cin >> A[i][j];
        cin >> x;
        cout << findmin(0,n,m-1,x) << endl;
                
    }
    return 0;
}