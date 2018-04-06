//
// Created by Everton Cardoso on 28/03/2018.
//

#include "IntegerSet.h"

IntegerSet::IntegerSet()
{
    vetor.resize(100);
};

IntegerSet::IntegerSet(vector<int> vetorDeInteiros, unsigned long tamanho)
{
    for (int i = 0; i < 100; ++i)
    {
        vetor.push_back(0);
    }

    for (int i = 0; i < tamanho; ++i)
    {
        insertElement(vetorDeInteiros[i]);
    }
};

IntegerSet IntegerSet::unionOfSets(IntegerSet segundoVetor)
{
    IntegerSet terceiroVetor;

    for (int i = 0; i < 100; ++i)
    {
        if(vetor[i] == 1 || segundoVetor.vetor[i] == 1)
            terceiroVetor.vetor[i] = 1;
    }

    return terceiroVetor;
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet segundoVetor)
{
    IntegerSet terceiroVetor;

    for (int i = 0; i < 100; ++i)
    {
        if(vetor[i] == 1 && segundoVetor.vetor[i] == 1)
            terceiroVetor.vetor[i] = 1;
    }

    return terceiroVetor;
}

void IntegerSet::insertElement(int k)
{
    vetor[k] = 1;
}

void IntegerSet::deleteElement(int k)
{
    vetor[k] = 0;
}

void IntegerSet::printSet()
{
    int contador = 0;

    for (int i = 0; i < 100; ++i)
    {
        if(vetor[i] == 1)
            cout << i << " ";
        else
            contador++;
    }

    if(contador == 100)
        cout << "---";

    cout<<endl;
}

bool IntegerSet::isEqualTo(IntegerSet segundoVetor)
{
    bool igual = true;

    for (int i = 0; i < 100; ++i)
    {
        if(vetor[i] != segundoVetor.vetor[i])
        {
            igual = false;
            break;
        }
    }

    return igual;
}