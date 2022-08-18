//Crie em Algoritmo em C++, em que o usuário informa as notas de três
//provas de um determinado aluno e também a média de nota da turma toda.
//O Algoritmo deve calcular a média deste aluno e informar se sua nota é 
//acima da média, abaixo da média ou está na média.

#include <iostream>

using namespace std;

int main(){

// notas 1, 2 e 3 do aluno. med_s é a média da sala, e med_a a é a média do aluno.

float nota [] = {0,0,0};
float med_s, med_a;

    for (int i = 0 ; i < 3 ; i++){
        cout << "Nota"<< i + 1 << endl;
        cin >> nota [i];
    }
cout << "\nMedia da sala: ";
cin >> med_s;

med_a = (nota[0] + nota[1] + nota[2])/3;
cout<< "\nMédia individual  "<< med_a<< "\n"<< endl;

if (med_a == med_s)
    cout << "\nA média do aluno está igual a media da sala";
    
else if (med_a < med_s)
    cout << "\nA média do aluno está abaixo da média da sala";

else
    cout << "\nA média do aluno está acima da média da sala";

    return 0;
}