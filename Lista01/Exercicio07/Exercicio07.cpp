// Autor: juniorfarias
// Data: 21/08/2021
// Escreva uma função para calcular a média de dois números. O módulo principal de
// seu programa deverá solicitar os valores a serem somados, chamar a sua função e o
// resultado deverá ser mostrado a partir de comando incluído na função main.
#include <iostream>
using namespace std;

int media(int num1, int num2) {
    int result = (num1 + num2)/2;
    return result;
}
int main () {
    int num1, num2;
    cout << "Informe o primeiro numero:" << endl;
    cin >> num1;
    cout << "Informe o segundo numero:" << endl;
    cin >> num2;
    cout << "Resultado: " << media(num1, num2) <<endl;
}