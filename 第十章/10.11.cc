#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}
int main() {
  vector<string> strv = {"the", "panda", "the", "lion", "the", "pig"};
  // 数据排序
  sort(strv.begin(), strv.end());
  // 获取最后一个唯一值的迭代器
  auto end_unique = unique(strv.begin(), strv.end());
  // 擦除多余部分
  strv.erase(end_unique, strv.end());
  // 输出排序后内容
  for (const auto &s : strv) cout << s << " ";
  cout << endl;
  // 按长度重排
  stable_sort(strv.begin(), strv.end(), isShorter);
  // 输出每个元素
  for (const auto &s : strv) cout << s << " ";
  cout << endl;
}