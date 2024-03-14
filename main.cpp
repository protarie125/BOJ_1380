#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

ll n;
vs S;
set<ll> tag;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  auto sn = 1;
  while (0 < n) {
    cin.ignore(100, '\n');
    S = vs(n);
    for (auto&& x : S) {
      getline(cin, x);
    }

    tag.clear();
    for (auto i = 0LL; i < 2 * n - 1; ++i) {
      ll x;
      string k;
      cin >> x >> k;

      if (tag.find(x) == tag.end()) {
        tag.insert(x);
      } else {
        tag.erase(x);
      }
    }

    const auto& v = *(tag.begin());
    cout << sn << ' ' << S[v - 1] << '\n';

    cin >> n;
    ++sn;
  }

  return 0;
}