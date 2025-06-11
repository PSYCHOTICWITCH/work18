#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void keyboard_in(vector<int> &a) {
  int n, elem;
  cout << "ведите размер вектора: ";
  cin >> n;
  cout << "введите элементы: ";
  for (int i = 0; i < n; i++) {
    cin >> elem;
    a.push_back(elem);
  }
}

void random_in(vector<int> &a) {
  int n;
  cout << "ведите размер вектора: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    a.push_back(rand());
  }
}

void file_in(vector<int> &a) {
  cout << "введите название файла: ";
  string f;
  cin >> f;
  ifstream in(f);

  string line;
  int elem;

  if (in.is_open()) {
    while (in >> line) {
      elem = stoi(line, 0, 10);
      a.push_back(elem);
    }
    in.close();
  } else {
    cout << "такого файла нет" << endl;
    file_in(a);
  }
}

void menu(vector<int> &a) {
  system("chcp 65001");
  int variant;

  cout << "каким образом хотите ввести вектор:" << endl << "1. с клавиатуры" << endl << "2. случайно" << endl
       << "3. с файла" << endl;
  cin >> variant;

  switch (variant) {
    case 1:keyboard_in(a);
      break;
    case 2:random_in(a);
      break;
    case 3:file_in(a);
      break;
  }
}