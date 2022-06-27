#include <bits/stdc++.h>
using namespace std;

#define fast_read() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define typeof(x) typeid(x).name()
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define sz(a) (int)a.size()
#define F first
#define S second
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

void solve(){
    int n; cin>>n;
    int x, y; cin>>x>>y;
    int l = x, r = y;
    int number = 1;
    for(int i = 1; i < n; i++){
        cin>>x>>y;
        if(x <= l && y >= r){
            number = i+1;
        }
        else if(x < l || y > r){
            number = -1;
        }
        l = min(l, x), r = max(r, y);
    }
    cout<<number<<endl;
}

int main() {
    fast_read();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // int t; cin>>t;
    // while(t--){
    solve();
    // }
    return 0;
}