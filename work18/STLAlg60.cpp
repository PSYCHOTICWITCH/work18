#include <iostream>
#include <vector>
#include <list>
#include "in_list.h"
#include <numeric>

using namespace std;

int comp(int a, int b) {
  return a+b;
}

int main() {
  list<int> l;
  vector<int> v;

  menu(l);

  adjacent_difference(l.begin(), l.end(), v.begin(), comp);

  for (const auto& it : v) {
    cout << it << " ";
  }

}