// Author: @juniorfarias
// Date: 08/25/2021 20:51:41
/*
    Goal: Uma função difere de um procedimento porque, no primeiro caso, há retorno de um
    valor e no segundo caso não há retorno de nenhum valor. Como seria possível
    implementar uma função de modo que o programa chamador da função, na prática,
    obtivesse dois “retornos”? Elabore um exemplo.
    ==> Sugestão: utilize passagem de parâmetro por referência.
*/
#include <iostream>
using namespace std;
void changeValues(int &num1, int &num2){
    int aux = num1;
    num1 = num2;
    num2 = aux;
}
int main(){
    int numeroX, numeroY;
    cout << "----------Inverter--------------" << endl;
    cout << "Insira o primeiro valor => ";
    cin >> numeroX;
    cout << "Insira  o segundo valor => ";
    cin >> numeroY;
    cout << "--------------------------------" << endl;
    changeValues(numeroX, numeroY);
    cout << "Novo valor do primeiro numero => " << numeroX << endl;
    cout << "Novo  valor do segundo numero => " << numeroY << endl;
    return 0;
}