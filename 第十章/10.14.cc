/*编写一个lambda,接受两个int，返回他们的和。*/
#include <iostream>
using std::cout;
using std::endl;
int main() {
  auto f = [](int i1, int i2) { return i1 + i2; };
  cout << f(10, 5) << endl;
  return 0;
}