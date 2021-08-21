// Autor: juniorfarias
// Data: 21/08/2021
/*
    Evolua a sua solução para a questão 7 de modo que, após apresentada a média,
    permita que o usuário informe outros dois números cuja média deverá ser calculada.
    O programa deverá permitir que o usuário informe quantos números ele desejar até
    que ele digite 0 e 0 nos dois números. Isso indicará para o seu programa o final de
    execução (obs.: a questão 62 é uma variação desta questão).
*/
#include <iostream>
using namespace std;

float media(float num1, float num2) {
    float result = (num1 + num2)/2;
    return result;
}
int main () {
    bool exitProgram = false;
    do{
        int  num1, num2;
        cout << "Informe o primeiro numero:" << endl;
        cin >> num1;
        cout << "Informe o segundo numero:" << endl;
        cin >> num2;
        if(num1 == 0 && num2 == 0){
            exitProgram = true;
        } else {
            cout << "Resultado: " << media(num1, num2) << endl;
        }
    }while(!exitProgram);
}