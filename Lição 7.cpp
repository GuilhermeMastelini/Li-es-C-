//Crie um Algoritmo em C++, em que o usuário informa a dimensão de
//uma matriz e os elementos de duas matrizes
// (ambas com a mesma dimensão) e o Algoritmo mostra a soma
// entre estas duas matrizes

#include <iostream>

using namespace std;


int main(){

  int dimension;
  
  cout << "Enter the dimensions of the Matrix: \n" << endl;
  cin >> dimension;
  int matrix_1 [dimension][dimension];
  int matrix_2 [dimension][dimension];
  int matrix_sum [dimension][dimension];
  
  // Values fo the matrix_1:

  for (int i = 0 ; i < dimension ; i++ ){
    for ( int j = 0 ; j < dimension ; j++ ){
      cout << "\n\nMatrix 1 \n\n";
      cout << "Enter the value " << i+1 << " " << j+1 << endl;
      cin >> matrix_1[i][j];
      

    }
  }

  for (int i = 0 ; i < dimension ; i++ ){
    cout << "\n";
    for (int j = 0 ; j < dimension ; j++ ){
      cout << matrix_1[i][j] << "  ";}
    }


    
  cout << "\n\n\n\n";
  
  // Values of the matrix_2:
  for (int i = 0 ; i < dimension ; i++ ){
    for ( int j = 0 ; j < dimension ; j++ ){
      cout << "\n\nMatrix 2 \n\n";
      cout << "Enter the value " << i+1 << " " << j+1 << endl;
      cin >> matrix_2[i][j];
    }
  }
  
   for (int i = 0 ; i < dimension ; i++ ){
    cout << "\n";
    for (int j = 0 ; j < dimension ; j++ ){
      cout << matrix_2[i][j] << "  ";
    }
  }
  
  cout << "\n\n\n\n";

// Sum of Matrices:

  for (int i = 0 ; i < dimension ; i++ ){
    for (int j = 0 ; j < dimension ; j++ ){
      matrix_sum[i][j] = 0;
      matrix_sum[i][j] = matrix_1[i][j] + matrix_2[i][j]; 
    }
  }

  // Matrix printing:
  
  cout << "\n\n\n\n";
  
  for (int i = 0 ; i < dimension ; i++ ){
    cout << "\n";
    for (int j = 0 ; j < dimension ; j++ ){
      cout << matrix_sum[i][j] << "  ";
    }
  }
  

  return 0;
}
