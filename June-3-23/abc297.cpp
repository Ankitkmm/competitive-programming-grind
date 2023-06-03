#include <bits/stdc++.h>
#include <chrono> 								 
using namespace std;
using namespace std::chrono; 
#define NF st::npos	
// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
// #pragma optimization_level 3
// #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define rep(a, b) for (long long a = 0; a < (b); ++a)
#define rep1(i,n) for(long long i=1;i<=n;i++)
#define per(i,n) for(long long i=(ll)(n)-1;i>=0;i--)
#define per1(i,n) for(long long i=n;i>=1;i--)
#define Rep3(i,sta,n) for(long long i=sta;i<=n;i++)
#define rep3(a, b, c) for (long long a = (b); a < (c); ++a)
#define f0rd(a, b) for (long long a = (b); a >= 0; --a)
#define f1rd(a, b, c) for (long long a = (b); a >= (c); --a)
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define pb push_back
# define pf push_front 
# define ppb pop_back           // used to delete elemets in vector from backwards
# define ppf pop_front 
#define MP make_pair
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
# define rall(a) (a).rbegin(), (a).rend() 
# define sz(a) ((int)(a).size())
# define lb lower_bound           // algorithms
# define ub upper_bound   
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
/*---------------------------------------------------------------------------------------------------------------------------*/
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define readgraph(list, edges) for (int i = 0; i < edges; i++) {int a, b; cin >> a >> b; a--; b--; list[a].pb(b); list[b].pb(a);}
#define ai(a, n) for (int ele = 0; ele < n; ele++) cin >> a[ele];
#define ain(a, lb, rb) for (int ele = lb; ele <= rb; ele++) cin >> a[ele];
#define ao(a, n) {for (int ele = 0; ele < (n); ele++) { if (ele) cout << " "; cout << a[ele]; } cout << '\n';}
#define aout(a, lb, rb) {for (int ele = (lb); ele <= (rb); ele++) { if (ele > (lb)) cout << " "; cout << a[ele]; } cout << '\n';}
#define vsz(x) ((long long) x.size())
typedef long long ll;
typedef double ld;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
# define rt return 
# define cn continue
# define n1 "\n"
# define off exit(0)

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
	/*--------------------------------------------------------------------------------------------------------------------------*/
								  
	#define eb   emplace_back
// STL Algorithms
#define sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)    (*min_element((a).begin(), (a).end()))
#define maxe(a)    (*max_element((a).begin(), (a).end()))
#define mini(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())


template<typename T>
void chmin(T& a, T b) {
a = min(a, b);
}
template<typename T>
void chmax(T& a, T b) {
a = max(a, b);
}
template<typename T>
void cinarray(vector<T>& v) {
rep(i, v.size())cin >> v[i];
}
template<typename T>
void coutarray(vector<T>& v) {
rep(i, v.size()) {
if (i > 0)cout << " "; cout << v[i];
}
cout << "\n";
}


/*---------------------------------------------------------------------------------------------------------------------------*/								 
#ifdef HOME
#define SHOW_COLORS
#include "/mnt/c/Libs/tools/print.cpp"
#else
#define show(...) void(0)
#define debugf(fun)   fun
#define debugv(var)   var
#define mclock    void(0)
#define shows     void(0)
#define debug  if (false)
#define OSTREAM(...)    ;
#define OSTREAM0(...)   ;
#endif

				 
mt19937 rng(steady_clock::now().time_since_epoch().count());
// mt19937 rng(61378913);
/* usage - just do rng() */
								 
						        
							
const ll MAXN = 2e5 + 25;
const ll MAXL = 18 + 0;
const ll INF = 1e18 + 0;
const ll inf = 2e9 + 0;
const ll mod = 998244353;
const ld PI = acos( (ld) -1 );
const ll P = 67 + 0 + 0;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
const ll M = 1e9 + 7;
								  

#define rrep(x, l, u) for (ll x = l; x >= u; x--)
// ll n, m, k, q, l, r, x, y, z;
// ll a[1000005];
// ll b[1000005];
// ll c[1000005];
// string s, t;
// ll ans = 0;
#define each(a, x) for (auto &a : x)

//#define rep(i,j,k) for(ll i=j;i<k;i++)
const int intmax = 2147483647;

// ll n, m, q, k, l, r, x, y, z;
// const ll template_array_size = 1e6 + 18362;
// ll a[template_array_size];
// ll b[template_array_size];
// ll c[template_array_size];
// string s, t;
 
//lmao was very easier than expected
 
void solve() {
ll n,m;
cin >> n >> m;
m--;

rep(i,n){
	string s;
	cin >> s;
 rep(i,m){
 	if(s[i] == 'T' && s[i+1] == 'T'){
 		s[i] = 'P', s[i+1] = 'C';
 		continue;
 	}
 }
 cout << s << n1;
}

}
 
int main() {

	send help

	// freopen("tc.cpp", "r", stdin);
	// freopen("tc2.cpp", "w", stdout);
	// freopen("in.txt", "r", stdin);
	// freopen("out.txt", "w", stdout);
	
		
	int tc = 1;
	//cin >> tc;
	for (int t = 0; t < tc; t++) {
		solve();
	}
}
