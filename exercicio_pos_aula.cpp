#include <stack>
#include<iostream>
#include<stdlib.h>

using namespace std;

void imprime_pilha(stack <int> pilha) {
	printf("\nPilha:\n");
	
	while (!pilha.empty()){
		printf("%d \n", pilha.top());
		//printf (pilha.top());
		pilha.pop();
	}
	printf("\n");
}

int main(void) {
   int i;
   printf("RAND_MAX=%d\n", RAND_MAX);
   for (i = 0; i<100; i++)
      printf("%d\n", rand());

	stack<int> pilha;
	
	pilha.push(10);
	pilha.push(9);
	pilha.push(8);
	pilha.push(7);
	printf("Tamanho da pilha: %d\n",pilha.size());
	printf("Elemento topo: %d\n",pilha.top());
	imprime_pilha(pilha);
	pilha.pop();
	imprime_pilha(pilha);
	pilha.pop();
	imprime_pilha(pilha);
	
}

