#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define nl "\n"
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp make_pair
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define all(n) n.begin(), n.end()
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define bitc(n) __builtin_popcount(n)
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define looprev(i, a, b) for (int i = (a); i >= (b); i--)
#define iter(container, it) for (__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...)                             \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
#define logarr(arr, a, b)            \
    for (int z = (a); z <= (b); z++) \
        cout << (arr[z]) << " ";     \
    cout << endl;
template <typename T>
T gcd(T a, T b)
{
    if (a % b)
        return gcd(b, a % b);
    return b;
}
template <typename T>
T lcm(T a, T b) { return (a * (b / gcd(a, b))); }
vs tokenizer(string str, char ch)
{
    std::istringstream var((str));
    vs v;
    string t;
    while (getline((var), t, (ch)))
    {
        v.pb(t);
    }
    return v;
}

void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cout << *it << " = " << a << endl;
    err(++it, args...);
}
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> pbtrie;

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
    int t;
    cin >> t;
    while (t--)
    {
        int activities;
        string origin;
        cin >> activities;
        cin >> origin;
        // cin.ignore() ;
        int laddus = 300;
        int contest_rank, bug_found = 0;
        bool top_contibutor = false, contest_hosted = false;
        
        while (activities--)
        {
            // cin.ignore() ;
            string activiy_name;
            cin >> activiy_name;

            if (activiy_name == "CONTEST_WON")
            {
                cin >> contest_rank;
            }
            else if (activiy_name == "TOP_CONTRIBUTOR")
            {
                top_contibutor = true;
            }
            else if (activiy_name == "BUG_FOUND")
            {
                cin >> bug_found;
            }
            else if (activiy_name == "CONTEST_HOSTED")
            {
                contest_hosted = true;
            }
        }

        if (contest_rank < 20)
        {
            laddus += (20 - contest_rank);
        }
        if (top_contibutor)
        {
            laddus += 300;
        }
        if (bug_found != 0)
        {
            laddus += bug_found;
        }
        if (contest_hosted)
        {
            laddus += 50;
        }

        // cout << laddus << nl << nl ;

        if (origin == "INDIAN")
        {
            cout << laddus / 200 << nl;
        }
        else
        {
            cout << laddus / 400 << nl;
        }
    }

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}