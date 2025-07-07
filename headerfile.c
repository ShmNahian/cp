#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define NFS ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace __gnu_pbds;
using namespace std;
template <typename DT>
using oset = tree<DT, null_type, less<DT>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT, typename FUNC>
using o_set = tree<DT, null_type, FUNC, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT1, typename DT2>
using omap = tree<DT1, DT2, less<DT1>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename DT1, typename DT2, typename FUNC>
using o_map = tree<DT1, DT2, FUNC, rb_tree_tag, tree_order_statistics_node_update>;
/**
* - less<data_type> --> Increasingly sorted set
* - less_equal<data_type> --> Increasingly sorted multiset
* - greater<data_type> --> Decreasingly sorted set
* - greated_equal<data_type> --> Decreasingly sorted multiset
**/
//!------
#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl
//!-----
#define ll long long
#define int ll
#define lld long double
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define pb push_back
#define ff first
#define ss second
//!--------
#define PQiimn priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define PQllmn priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>
#define PQiimx priority_queue<pair<int, int>>
#define PQllmx priority_queue<pair<ll, ll>>
#define PQ priority_queue<int>
//!--------
#define FILL(x, y) memset(x, y, sizeof(x))
#define clr(x, y) memset(x, 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define preci(x) fixed << setprecision(x)
#define PI (acos(-1.0))
#define SZ(x) (int)x.size()
#define EPS (1e-9)
#define bug cout << "*_*\n"
//!-------
const ll INF = 1e18 + 5;
const ll MOD = 1e9 + 7;
const ll N = 100005;
//!---------
template <class T>
inline void print(vector<T> v) { fore(v) cout << x << ' '; }
template <class T>
inline void print(set<T> v) { fore(v) cout << x << ' '; }
template <class T>
inline void print(multiset<T> v) { fore(v) cout << x << ' '; }
template <class T, class U>
inline void print(map<T, U> v) { fore(v) cout << x.ff << ' ' << x.ss << endl; }
template <class T, class U>
inline void print(multimap<T, U> v) { fore(v) cout << x.ff << ' ' << x.ss << endl; }
template <class T>
inline void print(T u) { cout << '*' << u << '*' << endl; }
//!---------
int cs = 1;
inline void CASE() { cout << "Case " << cs++ << ":"; }
inline ll ciel(double a, double b) { return (a + (b - 1)) / b; }
inline int numOfDigit(ll n) { return log10(n) + 1; }
inline int bitsInBinary(ll n) { return log2(n) + 1; }
