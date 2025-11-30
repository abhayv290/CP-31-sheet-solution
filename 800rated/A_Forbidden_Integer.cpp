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
    int n, k, x;
    cin >> n >> k >> x;
    if (k == 2 && x == 1 && (n % 2 == 1)) {
        no();
    }
    else if (x == 1 && k == 1) {
        no();
    }
    else {
        yes();
        if (x == 1) {
            if (n % 2 == 0) {
                cout << n / 2 << endl;
                for (int i = 0;i < n / 2;i++) {
                    cout << 2 << " ";
                }
            }
            else if (n % 3 == 0) {
                cout << n / 3 << endl;
                for (int i = 0;i < n / 3;i++) {
                    cout << 3 << " ";
                }
            }
            else {
                if ((n - 2) % 3 == 0) {
                    cout << (n - 2) / 3 + 1 << endl;
                    cout << 2 << " ";
                    for (int i = 0;i < (n - 2) / 3;i++) {
                        cout << 3 << " ";
                    }
                }
                else {
                    cout << (n - 4) / 3 + 2 << endl;
                    cout << 2 << " " << 2 << " ";
                    for (int i = 0;i < (n - 4) / 3;i++) {
                        cout << 3 << " ";
                    }
                }
            }
        }
        else {
            cout << n << endl;
            for (int i = 0;i < n;i++) {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
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


