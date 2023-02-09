#include <stdio.h>
#include <locale.h>

int fib(int n);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int num, r;
	scanf("%d", &num);
	r = fib(num);
	if(r == -1){
	    printf("Entrada Inv�lida");	
	}
	else{
	    printf("%d", fib(num));	
	} 
	return 0;
}
/*
	Fun��o: Calcular Fibonacci
	Entrada: n inteiro
	Sa�da: Fibonacci de n, se n > 0 ou -1, se n < 0
*/
int fib(int n) {
	if(n == 0) {
		return 0;	
	}
	if(n == 1){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
