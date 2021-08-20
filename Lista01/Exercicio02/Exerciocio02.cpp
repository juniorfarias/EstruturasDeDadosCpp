// Autor: juniorfarias
// Data: 19/08/2021
// Objetivo: Observe o programa abaixo. Escreva um módulo que substitua a sequência de comandos repetidos.
//PROGA
//int a = (2 + 3) * (2 * 3);
//int b = a*6;
//Escreva(b)
//int c = (3 + 4) * (3 * 4);
//int d = c *12;
//Escreva(d)
//PROGB
//int a = (5 + 6) * (5 * 6);
//int b = a*30;
//Escreva(b)
//int c = (7 + 8) * (7 * 8);
//int d = c *56;
//Escreva(d)
//int c = (6 + 7) * (6 * 7);
//int d = c *42;
//Escreva(d)

//Suponha que os comandos acima estão em um mesmo módulo de um programa, o
//modulo Principal, por exemplo. Observe que necessariamente serão enviados para
//seu módulo números seguidos, no exemplo, 2,3;3,4;6,7 e por aí vai.
//Escreva UMA função que permita calcular os trechos de código repetido. A sua
//função deverá utilizar uma quantidade mínima de parâmetros, ou seja, se existir uma
//solução que utilize uma quantidade menor de parâmetros então a sua solução não
//estará correta

#include <iostream>
using namespace std;

void calcResult(int num1, int num2){
	int resultParcial = (num1 + num2)*(num1 * num2);
    int result = resultParcial * (num1 * num2);
	cout << "Resultado: " << result << endl; 

}
int main(){
	calcResult(2, 3);
    calcResult(3, 4);
	return 0;
}