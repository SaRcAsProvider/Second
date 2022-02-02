#include <iostream>
#include <vector>
#include <algorithm>
struct {
  bool operator()(const std::string& a, const std::string& b) const {
    if (a.length() < b.length()) {
      if (a[0] >= b[a.length()]) return true;
      else return false;
    }
    else if (a.length() > b.length()) {
      if ((b[0] >= a[b.length()])) return false;
      else return a > b;
    }
    else return a > b;
  }
} customLess;

int main() {
  std::vector<std::string> v(100);
  std::string s;
  for (int i = 0; (std::cin >> s) && (s != "-1"); i++) {
    v[i] = s;
  }
  std::sort(v.begin(), v.end(), customLess);
  for (auto it = v.begin(); it != v.end(); ++it) {
    std::cout << *it;
  }

  return 0;
}
