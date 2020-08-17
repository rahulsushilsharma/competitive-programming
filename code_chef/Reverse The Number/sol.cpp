#include <bits/stdc++.h>
using namespace std;

#define fo(i, x, n) for (i = x; i < n; i++)
#define rfo(i,n) for (i = n-1; i >= 0; i--)
#define pb push_back
#define nl cout<<endl
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
typedef pair<int, int> pii;
typedef long long int ll;
typedef long int lint;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;

void _time(){
    cout << "\ntime taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
};

void running(){
    cout<<"running"<<endl;
}
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    running();
    solve();
    _time();
    return 0;
}

void solve(){
    int tc;
    cin>>tc;
    while(tc--){
        lint k;cin>>k;
        lint nk = k;
        lint n = ceil(log10(k));
        lint _k=0;
        lint i;
        fo(i,0,n){
            lint t = k % 10;
            _k = (_k * 10) + t;
            k /= 10;
        }
        cout<<nk<<" "<<_k;nl;
        nk = nk%1000000007;
        _k = _k%1000000007;
        ll op = pow(nk,_k);
        cout<<op;
        nl;
    }
}