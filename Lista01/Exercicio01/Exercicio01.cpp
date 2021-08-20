// Autor: juniorfarias
// Data: 19/08/2021
// Objetivo: Identifique os trechos repetidos no algoritmo abaixo e elabore uma versão que utilize um procedimento.

#include <iostream>
using namespace std;

void soma(){
	int num1, num2;
	cout << "Digite o primeiro número: \n";
	cin >> num1;
	cout << "Digite o segundo número: \n";
	cin >> num2;

	int result = num1 + num2;
	cout << "Resultado: " << result << endl; 

}
int main(){
	soma();
	return 0;
}