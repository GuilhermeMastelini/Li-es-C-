// Dada a função f(x) = x^2 - 3x + 5
// Crie um algoritmo em C++, que tenha uma função que calcula o
//valor de f(a), em que a é um número real informado pelo usuário. 

#include <iostream>

using namespace std;

bool w = true;

int main(){

cout << "f(x) = x^2 - 3x + 5\n\nDe a entrada x um numero real    ";
float num;

while( w == true){
    cout <<"Entrada: ";
    cin >> num;
    cout << (num*num - 3*num + 5) << endl;

}

    return 0;
}
