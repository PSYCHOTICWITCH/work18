//#include <iostream>
//#include <vector>
//#include "in_vector.h"
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//  vector<int> V1;
//  vector<int> V2;
//  int a, b;
//
//  menu(V1);
//  menu(V2);
//
//  cout << "введите числа a и b: ";
//  cin >> a >> b;
//
//  fill(V1.begin(), V1.begin()+5, a);
//  fill(V1.rbegin(), V1.rbegin()+5, b);
//
//  fill_n(V2.begin(), 5, a);
//  fill_n(V2.rbegin(), 5, b);
//
//
//  for (auto it : V1) {
//    cout << it << " ";
//  }
//
//  cout << endl;
//
//  for (auto it : V2) {
//    cout << it << " ";
//  }
//}