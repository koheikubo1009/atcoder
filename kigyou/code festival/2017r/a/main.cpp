#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <vector>
#define MOD 1000000007
using namespace std;
typedef long long ll;
#include <cstring>

int main() {
  ll k, a, b;
  cin >> k >> a >> b;
  if (a >= k) {
    cout << 1 << endl;
  } else if (a > b) {
    cout << (k - b - 1) / (a - b) * 2 + 1 << endl;
  } else {
    cout << -1 << endl;
  }
}