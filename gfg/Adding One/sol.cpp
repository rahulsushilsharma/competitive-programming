#include <bits/stdc++.h>
using namespace std;

#define fo(i, x, n) for (i = x; i < n; i++)
#define rfo(i,x,n) for (i = n; i >= x; i--)
#define pb push_back
#define nl cout<<endl;
#define mp make_pair
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
        int n; cin >> n;
        std::vector<int> v;
        int arr[n]; fo(i, 0, n)cin >> arr[i];
        int c = 0, sum = arr[n - 1] + 1;
        c = sum / 10;
        if (sum <= 9)v.pb(sum);
        else {
            c = sum / 10;
            v.pb(sum % 10);
        }
        rfo(i, 0, n - 2) {
            c = 0; sum = 0;
            sum = arr[i] + c;
            if (sum <= 9)v.pb(sum);
            else {
                c = sum / 10;
                v.pb(sum % 10);
            }
        }
        for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
        {
            cout << *i << " ";
        } nl;
    }
}