// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main() {
  int sizeA, sizeB;

  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������"
    << endl;

  cout << "������ ������ ������� A" << endl;
  cin >> sizeA;
  cout << "������� ������� A" << endl;
  TMatrix<int> A(sizeA);
  cin >> A;
  cout << "������ ������ ������� �" << endl;
  cin >> sizeB;
  cout << "������� ������� �" << endl;
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
