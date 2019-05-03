#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    multiset<int> s;
    int temp = n;
    int lsd;
    while(temp){
        lsd = temp % 10;
        temp = temp / 10;
        s.insert(lsd);
        if(s.empty() || lsd >= *(s.rbegin())){
            continue;
        } 
        auto nx = s.upper_bound(lsd) ;
        temp = temp*10 + *nx; 
        s.erase(nx);

        for(auto it = s.begin(); it != s.end();++it){
            temp = temp * 10 + *it;
        }
        break;
    }
    return temp;
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    int n,ans;
    while(t--){
        cin >> n;
        ans = solve(n);
        if(ans) cout <<ans << endl;
        else cout << "not possible" << endl;
    }    
    return 0;
}