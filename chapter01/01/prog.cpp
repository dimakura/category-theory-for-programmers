// $ g++ prog.cpp
// $ ./a.out
#include<iostream>
using namespace std;

template <class T>
T id(T x) {
  return x;
}

int main() {
  cout << "id(1) = " << id(1) << endl;
  cout << "id(life) = " << id("life") << endl;

  return 0;
}