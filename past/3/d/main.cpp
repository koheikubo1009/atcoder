#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  int n;
  string s[5], t[5];
  cin >> n;
  for (int i = 0; i < 5; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
      t[j] = s[j].substr(4 * i + 1, 3);
    }
    if (t[0] == "###" && t[1] == "#.#" && t[2] == "#.#" && t[3] == "#.#" &&
        t[4] == "###") {
      cout << 0;
    }
    if (t[0] == ".#." && t[1] == "##." && t[2] == ".#." && t[3] == ".#." &&
        t[4] == "###") {
      cout << 1;
    }
    if (t[0] == "###" && t[1] == "..#" && t[2] == "###" && t[3] == "#.." &&
        t[4] == "###") {
      cout << 2;
    }
    if (t[0] == "###" && t[1] == "..#" && t[2] == "###" && t[3] == "..#" &&
        t[4] == "###") {
      cout << 3;
    }
    if (t[0] == "#.#" && t[1] == "#.#" && t[2] == "###" && t[3] == "..#" &&
        t[4] == "..#") {
      cout << 4;
    }
    if (t[0] == "###" && t[1] == "#.." && t[2] == "###" && t[3] == "..#" &&
        t[4] == "###") {
      cout << 5;
    }
    if (t[0] == "###" && t[1] == "#.." && t[2] == "###" && t[3] == "#.#" &&
        t[4] == "###") {
      cout << 6;
    }
    if (t[0] == "###" && t[1] == "..#" && t[2] == "..#" && t[3] == "..#" &&
        t[4] == "..#") {
      cout << 7;
    }
    if (t[0] == "###" && t[1] == "#.#" && t[2] == "###" && t[3] == "#.#" &&
        t[4] == "###") {
      cout << 8;
    }
    if (t[0] == "###" && t[1] == "#.#" && t[2] == "###" && t[3] == "..#" &&
        t[4] == "###") {
      cout << 9;
    }
  }
  cout << endl;
}