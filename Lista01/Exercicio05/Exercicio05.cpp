// Autor: juniorfarias
// Data: 19/08/2021
// Objetivo: Explique em detalhes, utilizando o diagrama de memória mostrado em sala de aula,
// por que o número 13 é mostrado ao final da execução do programa abaixo.
#include <iostream>
using namespace std;

void OperacaoZ (int parA) {
    parA = parA + 15;
}
int main () {
    int a = 13;
    OperacaoZ (a);
    cout << a << endl;
}
/* Resposta: A função OperacaoZ recebe os valores de entrada por parâmetro e não por referência. Por esse motivo essa função está recebendo o valor e está armazenando na memória.
** Porém nesse caso, a função não altera nada na variável "a" presente na função main por causa do contexto. Portanto ao iniciar-se a execução, a variável "a" é criada na memória.
** O valor contido na variável é envido como parâmetro para a função OperaçãoZ que por sua vez faz uma operação matemática e como a função é void, não tem retorn ou alterações na 
** variáveis.
*/ 