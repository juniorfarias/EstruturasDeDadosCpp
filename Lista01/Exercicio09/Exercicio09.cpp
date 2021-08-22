// Autor: juniorfarias
// Data: 21/08/2021
/*
    Escreva uma função para calcular a média de quatro números. Você deverá utilizar,
    exclusivamente, a função para calcular a média de dois números na função que
    calcula a média de quatro números. Não é permitido utilizar as operações de divisão
    e soma em sua função que calcula a média de quatro números.
*/
#include <iostream>
using namespace std;

float media(float num1, float num2) {
    float result = (num1 + num2)/2;
    return result;
}
float mediaQuatroNum(float num1, float num2, float num3, float num4) {
    float media1, media2;
    media1 = media(num1, num2);
    media2 = media(num3, num4);
    float result = media(media1, media2);
    return result;
}
int main () {
    float num1, num2, num3, num4;
    cout << "Informe o primeiro numero:" << endl;
    cin >> num1;
    cout << "Informe o segundo numero:" << endl;
    cin >> num2;
    cout << "Informe o terceiro numero:" << endl;
    cin >> num3;
    cout << "Informe o quarto numero:" << endl;
    cin >> num4;
    cout << "Resultado: " << mediaQuatroNum(num1, num2, num3, num4) <<endl;
}