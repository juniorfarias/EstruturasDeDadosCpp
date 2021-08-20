// Autor: juniorfarias
// Data: 19/08/2021
// Objetivo: Há algum erro no programa abaixo?
/*
int funcaoX (int parA, int parB) {
int d = parA + 15;
int e = d * parB * 3;
return e;}
int main () {
int a = 3;
int b = 4;
cout << funcaoX (a,b) << endl;
cout << d << endl;
cout << funcaoX (10,20) << endl;
}
*/
#include <iostream>
using namespace std;

int funcaoX (int parA, int parB) {
    int d = parA + 15;
    int e = d * parB * 3;
    return e;
}

int main () {
    int a = 3;
    int b = 4;
    cout << funcaoX (a,b) << endl;
    //cout << d << endl; Existe um erro aqui. A variável "d" não foi declarada nesse contexto, portanto ela só existe no contexto da função funcaoX
    cout << funcaoX (10,20) << endl;
}