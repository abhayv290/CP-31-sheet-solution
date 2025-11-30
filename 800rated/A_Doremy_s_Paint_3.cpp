#include<bits/stdc++.h>
using namespace std;

#define int long long 
#define dll long double
#define uint unsigned long long 
#define input(v)  for(auto &x:v){cin>>x;};
#define print(v) for(auto it:v){cout<<it<<" ";}
#define ios() ios_base::sync_with_stdio(0);   cin.tie(0); cout.tie(0)
#define all(x) (x).begin(),(x).end()
#define PI 3.1415926535897932384626
const int  MOD = 1e9 + 7;

bool prime(int a) { if (a == 1) return 0; for (int i = 2;i * i <= a;++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }


void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mp[x]++;
    }
    if (mp.size() > 2) {
        no();
        return;
    }
    if (mp.size() == 1) {
        yes();
        return;
    }
    auto it = mp.begin();
    auto [val1, cnt1] = *it;
    ++it;
    auto [val2, cnt2] = *it;
    if (cnt1 == cnt2 || abs(cnt1 - cnt2) == 1) yes();
    else no();
}
int32_t main() {
    ios();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


