#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n+1);
        vector<vector<int>> pos(n+1);
        for(int i=1;i<=n;i++){
            cin >> a[i];
            if(a[i] <= n)
                pos[a[i]].push_back(i);
        }
        long long ans = 0;
        for(int d=1; d<=n; d++){
            for(int x=1; x*(long long)x<=d; x++){
                if(d % x) continue;
                int y = d/x;
                if(x>n || y>n) continue;
                if(pos[x].empty() || pos[y].empty()) continue;
                auto calc = [&](int vx, int vy){
                    if(pos[vx].size() <= pos[vy].size()){
                        for(int p: pos[vx]){
                            int j = p + d;
                            if(j<=n && a[j]==vy) ans++;
                        }
                    }else{
                        for(int p: pos[vy]){
                            int i = p - d;
                            if(i>=1 && a[i]==vx) ans++;
                        }
                    }
                };
                calc(x,y);
                if(x != y)
                    calc(y,x);
            }
        }

        cout << ans << "\n";
    }
}