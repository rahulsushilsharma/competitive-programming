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
int search(int arr[], int k, int n);
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
        int arr[n]; fo(i, 0, n)cin >> arr[i];
        std::vector<int> v0, v1, v2;
        fo(i, 0, n) {
            if (arr[i] == 0)v0.pb(arr[i]);
            if (arr[i] == 1)v1.pb(arr[i]);
            if (arr[i] == 2)v2.pb(arr[i]);
        }
        for (std::vector<int>::iterator i = v0.begin(); i != v0.end(); ++i)cout << *i << " ";
        for (std::vector<int>::iterator i = v1.begin(); i != v1.end(); ++i)cout << *i << " ";
        for (std::vector<int>::iterator i = v2.begin(); i != v2.end(); ++i)cout << *i << " ";
        nl;
    }
}