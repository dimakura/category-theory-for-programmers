// $ g++ prog.cpp
// $ ./a.out
#include<iostream>
using namespace std;

template <class T>
T id(T &x) {
  return x;
}

int main() {
  int x = 100;
  int &rx = x;
  int *px = &x;
  cout << "id(x) = " << id(x) << endl;
  cout << "id(rx) = " << id(rx) << endl;
  cout << "id(px) = " << id(px) << endl;
  cout << "id(life) = " << id("life") << endl;

  return 0;
}