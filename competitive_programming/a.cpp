// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx,avx2,sse,sse2")

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
#define pb push_back

typedef long double ld;
// typedef __float128 ld;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
// typedef pair<ll, ll> pii;

const int INF = 1e9 + 1;
const ll inf = 1e18 + 1;
// const ll MOD = 1e9 + 7;
const ll MOD = 998244353;
// const int MOD = 31607;

template<class T> T _ceil(T a, T b) {return (a+b-1) / b;}
template<class T> T _min(T a, T b) {return a>b ? b:a;};
template<class T> T _max(T a, T b) {return a>b ? a:b;};
template<class T> T _abs(T a) {return a>0 ? a:-a;};
template<class T> T _gcd(T a, T b){return a?_gcd(b%a,a):b;};

void solve() {
    
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t;
	for(int i=1;i<=t;i++) {
		solve();
	}
	return 0;
}
