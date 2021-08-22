// Autor: juniorfarias
// Data: 21/08/2021
/*
    Escreva um programa calculadora com as quatro operações básicas. Seguem
    restrições:
        a. O operador de divisão resulta na parte inteira do cálculo.
        b. O seu programa não poderá utilizar os comandos “*”, “/” e nem DIV.
*/
#include <iostream>
using namespace std;

int soma(int num1, int num2) {
    int result = num1 + num2;
    return result;
}
int subtracao(int num1, int num2) {
    int result = num1 - num2;
    return result;
}
int divisao(int num1, int num2) {
    int result;
    if(num2 > num1){
        return result = 0;
    } else {
        while(num1>0){
            num1 = num1 - num2;
            result++;
        }
        return result;
    }
}
int multiplicacao(int num1, int num2) {
    int result = num1;
    for(int i = 1; i < num2; i++){
        result += num1;
    }
    return result;
}
int calculadora(int opp, int num1, int num2){
    int result;
    if(opp == 1){
        return result = soma(num1, num2);
    } else if (opp == 2){
        return result = subtracao(num1, num2);
    }else if (opp == 3){
        return result = divisao(num1, num2);
    }else if (opp == 4){
        return result = multiplicacao(num1, num2);
    } else {
        return result = 0;
    }
}
int main () {
    int num1, num2, opp;
    cout << "-----------Escolha uma opcao:------------" << endl;
    cout << "|  1   ---->      Soma                  |" << endl;
    cout << "|  2   ---->      Subtracao             |" << endl;
    cout << "|  3   ---->      Divisao               |" << endl;
    cout << "|  4   ---->      Multiplicacao         |" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "#  -> ";
    cin >> opp;
    if(opp>0 && opp<5){
        cout << "Informe o primeiro numero -> ";
        cin >> num1;
        cout << "Informe  o segundo numero -> ";
        cin >> num2;
        if(num2 != 0 || opp != 3){
            cout << "Resultado: " << abs(calculadora(opp, num1, num2)) <<endl;
        } else {
            cout << "##Operacao invalida. Re-run....." << endl;    
        }
    } else {
        cout << "#Operacao invalida. Re-run....." << endl;
    }
    
}