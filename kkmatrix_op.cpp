#include <iostream>
using namespace std;

int main() {
  int r1, c1, r2, c2;
  cout << "enter rows and columns for array1: ";
  cin >> r1;
  cin >> c1;
  cout << "enter rows and columns for array2: ";
  cin >> r2;
  cin >> c2;
//input
  int arr[r1][c1];
  int arr1[r2][c2];

  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cout << "enter element  for array 1" << ":" << endl;
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++) {
      cout << "enter element for array 2 " << ":" << endl;
      cin >> arr1[i][j];
    }
  }

  if (c1 == r2) {
    // declare a matrix to store the product
    int res[r1][c2];

    // iterate over the rows of the first matrix
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
        // initialize the sum to 0
        int sum = 0;

        // iterate over the columns of the second matrix
        for (int k = 0; k < c1; k++) {
          sum += arr[i][k] * arr1[k][j];
        }

        // store the sum in the product matrix
        res[i][j] = sum;
      }
    }

    // print the product matrix
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
        cout << res[i][j] << " ";
      }
      cout << endl;
    }
  } else {
    cout << "error";
  }

  return 0;}
  /*enter rows and columns for array1: 2 2
enter rows and columns for array2: 2 2
enter element  for array 1:
1
enter element  for array 1:
2
enter element  for array 1:
3
enter element  for array 1:
4
enter element for array 2 :
5
enter element for array 2 :
6
enter element for array 2 :
7
enter element for array 2 :
8
19 22
43 50
/*
