#include <iostream>
#include <math.h>

using namespace std;

int a , b, c; 


int sum (int x, int y){
    return x + y;
}

int sub(int x,int y){
    return x - y;}

int mul (int x, int y){
    return x*y;
}

float div(float x, float y){
    return x/y;
}

int main(){

    cout << " Calculadora"<< endl;
    cout << " Escolha a operação\n(1)Soma\n(2)Subtração\n(3)Multiplicação\n(4)Divisão\n";
    cin >> c;
    
    cout << " Informe o primeiro valor: " << endl;
    cin >> a;
    cout << " Informe o segundo valor: " << endl;
    cin >> b;

    if (c == 1)
        cout << " A soma entre " << a << " e " << b << " é igual à " << sum(a,b) << endl;

    if (c == 2)
        cout << " A diferença entre " << a <<" e " << b << " é igual à " << sub(a,b) << endl;

    if (c == 3)
        cout << " O produto entre " << a <<" e " << b << " é igual à " << mul(a,b) << endl;
    
    if (c == 4)
        cout << " O quociente entre " << a <<" e " << b << " é igual à "<< div((float)a,(float)b) << endl;



    return 0;

}
