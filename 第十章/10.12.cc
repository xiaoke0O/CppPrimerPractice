#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

#include "../public/Sales_item.h"
using namespace std;

//compareIsbn定义好了，在头文件中
// bool compareIsbn(const Sales_item &item1, const Sales_item &item2) {
//   item1.isbn() < item2.isbn();
// }

int main() {
  ifstream input("data/books.txt");
  vector<Sales_item> salesVec;
  Sales_item book;
  while (input >> book) salesVec.push_back(book);
  sort(salesVec.begin(), salesVec.end(), compareIsbn);
  for (auto &x : salesVec) cout << x << endl;
}