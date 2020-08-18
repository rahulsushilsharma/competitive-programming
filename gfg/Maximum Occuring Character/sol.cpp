#include <bits/stdc++.h>
using namespace std;

#define fo(i, x, n) for (i = x; i < n; i++)
#define rfo(i,x,n) for (i = n; i >= x; i--)
#define pb push_back
#define nl cout<<endl;
#define mp make_pair
#define u_map unordered_map
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;

void _time() {
    cout << "\ntime taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
};

void running() {
    cout << "running" << endl;
}

void enviroment() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve();
int main()
{
    enviroment();
    running();
    solve();
    _time();
    return 0;
}

void solve() {
    int tc, i;
    cin >> tc;
    while (tc--) {
        string s; cin >> s;
        int i, n = s.length();
        int count [25] = {0};
        fo(i, 0, n) {
            int index = (int) s[i];
            index -= 97;
            // cout << index << " ";
            count[index] += 1;
        }
        int max = -1;
        int op = 0;
        fo(i, 0, 25) {
            if (max < count[i]) {
                max = count[i];
                op = i;
            }
        }
        char _op = (char) (op + 97);
        cout << _op;
        nl;
    }
}