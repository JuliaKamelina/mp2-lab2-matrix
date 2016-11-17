// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main() {
  int sizeA, sizeB;

  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;

  cout << "Ведите размер матрицы A" << endl;
  cin >> sizeA;
  cout << "Введите матрицу A" << endl;
  TMatrix<int> A(sizeA);
  cin >> A;
  cout << "Ведите размер матрицы В" << endl;
  cin >> sizeB;
  cout << "Введите матрицу В" << endl;
  TMatrix<int> B(sizeB);
  cin >> B;

  TMatrix<int> C(sizeA);

      C = A + B;

      cout << "Matrix A = " << endl << A << endl;
      cout << "Matrix B = " << endl << B << endl;
      cout << "Matrix C = A + B" << endl << C << endl;

      C = A - B;
      cout << "Matrix C = A - B" << endl << C << endl;
}
//---------------------------------------------------------------------------
