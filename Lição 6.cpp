//Crie um Algoritmo em C++, em que o usuário informa os gastos com 
//alimentação de 5 famílias, calcula a média de gastos e diz de cada
//família, se seu gasto está na média, abaixo ou acima.

#include <iostream>

using namespace std;

int main(){

    
    float soma;
    float vet [5];

    for (int i = 0 ; i < 6 ; i++ ){

            cout << "Renda da família"<< i+1 << ": " << endl;
            cin >> vet[i];


    } 

    for (int i = 0 ; i < 6 ; i++){
        
        soma += vet[i];

    }

    soma = soma/5;

    for (int i = 0 ; i < 6 ; i++){

        if ( vet[i] > soma)
            cout << "A família " << i + 1 << " está acima da média.";
        
        else if (vet [i] < soma)
            cout << "A família " << i + i << " está abaixo da média.";

        else
            cout << " A família " << i + i << " está exatamente na média.";
    }


    return 0;
}