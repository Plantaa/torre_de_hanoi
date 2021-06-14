#include <stdio.h>

int passos = 0;

void hanoi(int n,char ini,char aux,char dest){
	if (n == 0){}
	else{
		hanoi(n-1,ini,dest,aux);
		printf("move de %c para %c\n",ini,dest);
		hanoi(n-1,aux,ini,dest);
	}
}

int main(){
	hanoi(15,'E','M','D');
	printf("Passos: %d",passos);
	return 0;
}
