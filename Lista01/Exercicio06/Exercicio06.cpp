// Autor: juniorfarias
// Data: 20/08/2021
// Explique em detalhes, utilizando o diagrama de memória mostrado em sala de aula,
// por que o número 28 é mostrado ao final da execução do programa abaixo.
#include <iostream>
using namespace std;

void OperacaoZ (int *parA) {
    *parA = *parA + 15;
}
int main () {
    int a = 13;
    OperacaoZ (&a);
    cout << a << endl;
}
/*
    Resposta: Nesse caso a como a função OperacapZ recebe o endereço de memória, logo na execução da função altera a variável declarada no método main. 
*/