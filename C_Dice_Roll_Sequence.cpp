#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int &x: a) cin >> x;

        vector<int> dp(7), newdp(7);

        for(int v=1; v<=6; v++)
            dp[v] = (v != a[0]);

        for(int i=1;i<n;i++){
            for(int v=1; v<=6; v++)
                newdp[v] = INF;

            for(int u=1; u<=6; u++){
                for(int v=1; v<=6; v++){
                    if(u==v) continue;
                    if(u+v==7) continue;

                    newdp[v] = min(newdp[v],
                                   dp[u] + (v!=a[i]));
                }
            }
            dp = newdp;
        }

        cout << *min_element(dp.begin()+1, dp.end()) << "\n";
    }
}