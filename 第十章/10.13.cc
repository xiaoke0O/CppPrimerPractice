#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;
bool morethan5(const string &s) { return s.size() >= 5; }

int main() {
  vector<string> words = {
      "Beijing",
      "Lasa",
      "Zhengzhou",
      "Taibei",
  };
  auto last_five = partition(words.begin(), words.end(), morethan5);
  // 输出符合要求的元素，非擦除输出
  ostream_iterator<string> out_iter(cout, " ");
  copy(words.begin(), last_five, out_iter);
  cout << endl;
  return 0;
}
