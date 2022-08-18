//Em um programa de Moradia Popular, somente pessoas
//maiores de 21 anos e com renda abaixo de R$ 1200,00 
//podem participar.
//Crie um Algoritmo em que C++, em que o usuário informa sua 
// idade e sua renda, e é informado se ele pode
//ou não participar desse programa.

#include <iostream>


using namespace std;

int main(){

int idade;
float rnd;

    cout << "Informe sua idade: \n";
    cin >> idade;
    cout << "Informe sua renda : R$ \n";
    cin >> rnd;

    if (idade > 20 && rnd <= 1200.0){
        cout << "Deferido";
    }
    else
        cout << "Indeferido";



    return 0;
}

