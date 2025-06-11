//#include <iostream>
//#include <vector>
//#include "in_vector.h"
//#include <algorithm>
//
//using namespace std;
//
//int n;
//
//int main() {
//  vector<int> v;
//
//  menu(v);
//
//  auto nth = v.begin() + v.size() / 2;
//
//  nth_element(v.begin(), nth, v.end());
//
//  auto maxe = max_element(v.begin(), nth);
//  auto mine = min_element(nth+1, v.end()++);
//
//  for (auto it : v) {
//    cout  << it << " ";
//  }
//
//  cout << endl << "три центральных элемента: " << endl;
//  cout << *maxe << " " << *nth << " " << *mine;
//
//}