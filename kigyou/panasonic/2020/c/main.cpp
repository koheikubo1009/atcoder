#include <iostream>
using namespace std;
int main() {
  long long a, b, c;
  cin >> a >> b >> c;
  if (c - a - b > 0 && 4 * a * b < (c - a - b) * (c - a - b)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}