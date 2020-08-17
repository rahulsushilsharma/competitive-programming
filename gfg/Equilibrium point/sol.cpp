#include <bits/stdc++.h>
using namespace std;

#define fo(i, x, n) for (i = x; i < n; i++)
#define rfo(i,n) for (i = n-1; i >= 0; i--)
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
        int i;
        int n;cin>>n;
        int arr[n];
        fo(i,0, n)cin>>arr[i];
        
        if(n==1){
            cout<<arr[0];
            nl
        }
        else if(n==2){
            cout<<-1;
            nl
        }else{
            int sum = 0;
            fo(i,0,n){
                sum +=arr[i];
            }
            int ls,rs=ls = 0,f =0;;
            fo(i,1,n){
                ls+=arr[i-1];
                sum -= arr[i-1];
                rs = sum - arr[i];
                // cout<<ls<<" "<<arr[i]<<" "<<rs;
                // nl
                if (rs == ls){
                    cout<<i+1;
                    f = 1;
                    nl;
                    break;
                }
            }
            if(f==0){
                cout<<-1;
                nl
            }
        }
    }
}