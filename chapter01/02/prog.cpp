// $ g++ prog.cpp
// $ ./a.out
#include <iostream>
#include <string>
using namespace std;

template <class A, class B, class C>
auto compose(C g(B), B f(A)) {
  return [=](A a) {
    return g(f(a));
  };
}

int length(string s) { 
  return s.length();
}

bool isEmpty(int length) {
  return length == 0;
}

int main() {
  auto isEmptyString = compose(isEmpty, length);
  cout << isEmptyString("") << endl;
  cout << isEmptyString("nest") << endl;

  return 0;
}