#include <iostream>
#include "Pilha.h"
Pilha::Pilha(int n)
{
    max=n;
    top=-1;
    vetor=new int[n];
}

Pilha::~Pilha()
{
    delete []vetor;
}
void Pilha::insere(int e)
{
    if( !cheia() )
       this-> vetor[++this->top] = e;
    //else
        //cout << "pilha cheia!" << endl;
}
int Pilha::remove(void)
{
    if( !vazia() )
        return vetor[top--];
    else {
        //cout << "pilha vazia!" << endl;
        return 0;
    }
}
int Pilha::topo(void)
{
    if( !vazia() )
        return vetor[top];
    else {
        //cout << "pilha vazia!" << endl;
    return 0;
    }
}
bool Pilha::vazia(void)
{
    return top==-1;
}
bool Pilha::cheia(void)
{
    return top==max-1;
}




