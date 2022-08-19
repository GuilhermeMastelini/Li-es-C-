//Crie um Algoritmo em C++, que tenha uma função recebe dois 
//ponteiros e troca o valor de referência entre os dois.
#include <iostream>

using namespace std;

void function(int &p_1, int &p_2){
    int x = p_1;
    int y  =p_2;
    p_1 = y;
    p_2 = x;
;
}

int main(){

int *pointer_1 = new int;
int *pointer_2 = new int;

*pointer_1 = 1;
*pointer_2 = 2;

cout << "Pointer 1: " << pointer_1 << endl;
cout << "Pointer 2: " << pointer_2 << endl;

cout << "\n\n\n";


function(*pointer_1,*pointer_2);

cout << "Pointer 1: " << *pointer_1 << endl;
cout << "Pointer 2: " << *pointer_2 << endl;



return 0;}

