#include <iostream>
#include <cstdlib>
using namespace std;

void geraNumerosAleatorios(int & n1, int n2){
	n1 = n2 + n1;
} 

int main(){
	int num1, num2, i;
	for(i = 0; i < 10; i++){
    srand(i + rand());
		num1 = 1+rand()%10;
		num2 = 1+rand()%10;
		cout << "N1: "<<num1 << ", N2: " << num2 << endl;
		geraNumerosAleatorios(num1, num2);
		cout << "N1*: "<< num1 << ", N2: " << num2 << endl;
	}

	return 0;
}