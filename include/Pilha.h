#ifndef PILHA_H
#define PILHA_H


class Pilha
{
    public:
        Pilha(int);
        virtual ~Pilha(void);
        void insere(int);
        int remove(void);
        int topo(void);
        bool vazia(void);
        bool cheia(void);

    protected:

    private:
        int max;
        int top;
        int *vetor;
};

#endif // PILHA_H
