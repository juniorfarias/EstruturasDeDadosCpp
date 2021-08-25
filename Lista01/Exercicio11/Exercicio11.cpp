// Autor: juniorfarias
// Data: 25/08/2021
/*
    Construa um PROCEDIMENTO que soma dois números, sendo que o resultado da
    soma deve ser mostrado a partir da função main(), ou seja, o “cout” que mostra o
    resultado da soma deve estar dentro da função main. Obs.: não é permitido utilizar
    variáveis globais. Faça uma versão de sua implementação que utilize a menor
    quantidade possível de parâmetros.
*/
#include <iostream>
using namespace std;

void soma(int num1, int num2, int &result) {
    result = num1 + num2;
}

int main () {
    int num1, num2, result;
    cout << "-----------Digite os valores:------------" << endl;
    cout << "|  1   ----> ";
    cin >> num1;
    cout << "|  2   ----> ";
    cin >> num2;
    cout << "-----------------------------------------" << endl;
    soma(num1, num2, result);
    cout << "#  -> " << result;
}