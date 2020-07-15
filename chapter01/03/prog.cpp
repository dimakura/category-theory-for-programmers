// $ g++ prog.cpp
// $ ./a.out
#include <iostream>
#include <string>
using namespace std;

template <class T>
T id(T x) {
  return x;
}

template <class A, class B, class C>
auto compose(C g(B), B f(A)) {
  return [=](A a) {
    return g(f(a));
  };
}

int length(string s) {
  return s.length();
}

int main() {
  auto c1 = length;
  auto c2 = compose(length, id<string>);
  auto c3 = compose(id<int>, length);

  string data[]{"1", "12", "123", "1234"};

  for (int i = 0; i < 4; ++i) {
    cout << c1(data[i]) << " " << c2(data[i]) << " " << c3(data[i]) << endl;
  }

  return 0;
}