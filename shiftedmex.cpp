#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> se;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            se.insert(x);
        }
        vector<int> v(se.begin(),se.end());
        int cur=1, best = 1;
        for(int i=1; i<se.size(); i++){
            if(v[i]==v[i-1]+1){
                cur++;
            }
            else{
                cur=1;
            }
            best = max(best, cur);
        }
        cout << best << endl;
    }
}