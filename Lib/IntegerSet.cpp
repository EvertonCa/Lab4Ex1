/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos
Programa criado para receber dois conjuntos de numeros inteiros entre 0 e 100 e manipula-los
 */

#include "IntegerSet.h"

IntegerSet::IntegerSet() //função que retorna a união dos dois conjuntos
{
    vetor.resize(101);
};

IntegerSet::IntegerSet(vector<int> vetorDeInteiros, unsigned long tamanho) //construtor que recebe um vetor de inteiros e os usa para o objeto criado
{
    for (int i = 0; i <= 100; ++i)
    {
        vetor.push_back(0);
    }

    for (int i = 0; i < tamanho; ++i)
    {
        insertElement(vetorDeInteiros[i]);
    }
};

//função que retorna a união dos dois conjuntos
IntegerSet IntegerSet::unionOfSets(IntegerSet segundoVetor)
{
    IntegerSet terceiroVetor;

    for (int i = 0; i <= 100; ++i)
    {
        if(vetor[i] == 1 || segundoVetor.vetor[i] == 1)
            terceiroVetor.vetor[i] = 1;
    }

    return terceiroVetor;
}

//função que retorna a intersecção dos dois conjuntos
IntegerSet IntegerSet::intersectionOfSets(IntegerSet segundoVetor)
{
    IntegerSet terceiroVetor;

    for (int i = 0; i <= 100; ++i)
    {
        if(vetor[i] == 1 && segundoVetor.vetor[i] == 1)
            terceiroVetor.vetor[i] = 1;
    }

    return terceiroVetor;
}

//insere um elemento no conjunto
void IntegerSet::insertElement(int k)
{
    vetor[k] = 1;
}

//deleta um elemento do conjunto
void IntegerSet::deleteElement(int k)
{
    vetor[k] = 0;
}

//imprime o conjunto
void IntegerSet::printSet()
{
    int contador = 0;

    for (int i = 0; i <= 100; ++i)
    {
        if(vetor[i] == 1)
            cout << i << " ";
        else
            contador++;
    }

    if(contador == 101)
        cout << "---";

    cout<<endl;
}

//retorna verdadeiro caso os dois conjuntos sejam iguais
bool IntegerSet::isEqualTo(IntegerSet segundoVetor)
{
    bool igual = true;

    for (int i = 0; i <= 100; ++i)
    {
        if(vetor[i] != segundoVetor.vetor[i])
        {
            igual = false;
            break;
        }
    }

    return igual;
}
