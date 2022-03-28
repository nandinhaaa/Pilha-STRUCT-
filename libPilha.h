#include <stdio.h>
#include <stdlib.h> //importante para alocação de memória 
#define MAX 10 

typedef int tdado;
typedef struct {
	int topo;
	tdado pilha [MAX];
}tpilha;

void inicializa (tpilha *p) {
	p->topo=-1; 
} 
//--------------------------
int push (tpilha *p, tdado x) {
	if (p->topo==MAX-1) //está cheio
	return 0;
	p->topo++;
	p->pilha[p->topo]=x; //dados no vetor (dado no p em direção ao topo)
	return 1; 
}
//--------------------------
tdado pop(tpilha *p){
	tdado aux; 
	aux = p->pilha[p->topo];
	p->topo--; 
	return aux; 
}

tdado peek (tpilha p){
return p.pilha[p.topo];
}

//--------------------------
int isEmpty (tpilha p) //p passagem de valor *p (passagem por referencia) 
{  
	if (p.topo== -1)
		return 1;
	else 
		return 0;  
}	
//--------------------------
void mostraPilha (tpilha p)
{
	while (p.topo!= -1) {
		printf ("%d |",p.pilha [p.topo]); //mostra o valor do topo
		p.topo --;//desce a posição
	} //fim do while
	printf ("\n");
}
//--------------------------
