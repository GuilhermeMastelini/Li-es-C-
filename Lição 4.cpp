// Crie um Algoritmo em C++, que calcula a potência B^E, em que 
//o usuário informa um número real B e um número natural E.
//Nesse algoritmo, sempre que é informado o resultado da potência,
//é perguntado ao usuário, se deseja calcular outra potência.

#include <iostream>

using namespace std;

float b;
int e;
int ch;
int loop = 1;

float exponeciação (float base , int exp){
    float base_ac = 1;
    for (int i = 1 ; i < exp +1; i++){
    base_ac *= base ;
    }
    return base_ac;
}


int main(){

do {
cout << "Insira a base" << endl;
cin >> b;
cout << "\nInsira o expoente";
cin >> e;
cout << "\n\n"<< exponeciação(b,e) << endl; 
cout << "Deseja continuar?     (1) para sim      qualquer tecla para continuar\n\n" << endl;
cin >> ch;
  if (ch != 1)
    break;
}
while(loop == 1);

return 0;
}