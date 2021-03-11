#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int i;
  vector<int> vec;
  // 从标准输入读数据
  while (cin >> i) vec.push_back(i);
  // 数据排序
  sort(vec.begin(), vec.end());
  // 获取最后一个唯一值的迭代器
  auto end_unique = unique(vec.begin(), vec.end());
  // 擦除多余部分
  vec.erase(end_unique, vec.end());
  // 输出排序后容器
  for (const auto &s : vec) cout << s << " ";
  return 0;
}