//#include "in_list.h"
//#include "in_vector.h"
//#include <iostream>
//#include <list>
//#include <vector>
//#include <algorithm>
//
//int main() {
//  list<int> l;
//
//  vector<int> v;
//
//  menu(l);
//
//  for (auto it = l.begin(); it != l.end(); it++) {
//    cout << *it << " ";
//  }
//
//  cout << endl;
//
//  menu(v);
//
//  for (auto it = v.begin(); it != v.end(); it++) {
//    cout << *it << " ";
//  }
//
//  cout << endl;
//
//  auto half = v.begin();
//
//  for (int i = 0; i < (v.size())/2; i++) {
//    ++half;
//  }
//
//  auto needed = find_first_of(l.rbegin(), l.rend(), v.begin(), half);
//
//  if (needed != l.rend()) {
//    auto needed_2 = (++needed).base();
//
//    l.insert(needed_2, 1, *needed_2);
//  }
//
//  for (auto it = l.begin(); it != l.end(); ++it) {
//    cout << *it << " ";
//  }
//
//}