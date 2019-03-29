#ifndef LISTADE_H_INCLUDED
#define LISTADE_H_INCLUDED


#define MAX 100
typedef char TipoLDE[MAX];


// Lista Duplamente Encadeada de Cidades
// DE = Duplamente Encadeada
typedef struct ListaNoDE
{
    char info[MAX]; // nome da cidade
    struct ListaNoDE *ant, *prox;
} *pListaNoDE;

typedef struct TListaDE
{
    pListaNoDE primeiro, ultimo, iterador;
    int longitude;
} * ListaDE;


ListaDE inicLista();

void primListaDE(ListaDE lst);
void ultListaDE(ListaDE lst);

void posListaDE(ListaDE lst, int pos);

int fimListaDE(ListaDE lst);

void segListaDE(ListaDE lst);

char* infoListaDE(ListaDE lst);

int longListaDE(ListaDE lst);

//3 casos: Lista vazia, iterador sobre o ultimo elemento, iterador sobre um elemento intermediario
void anxListaDE( ListaDE lst, TipoLDE elem );


//3 casos: Lista vazia, iterador sobre o primeiro elemento, iterador sobre qualquer outro elemento
void insListaDE( ListaDE lst, TipoLDE elem );


void elimListaDE( ListaDE lst );

#endif // LISTADE_H_INCLUDED
