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

const int score[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}
};

void solve() {
    char ch[10][10];
    for (int i = 0;i < 10;i++) {
        string s;
        cin >> s;
        for (int j = 0;j < 10;j++) {
            ch[i][j] = s[j];
        }
    }
    int total = 0;
    for (int i = 0;i < 10;i++) {
        for (int j = 0;j < 10;j++) {
            if (ch[i][j] == 'X') {
                total += score[i][j];
            }
        }
    }

    cout << total << endl;
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


