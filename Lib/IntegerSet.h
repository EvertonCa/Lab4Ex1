/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos
Programa criado para receber dois conjuntos de numeros inteiros entre 0 e 100 e manipula-los
 */

#ifndef LAB4EX1_INTEGERSET_H
#define LAB4EX1_INTEGERSET_H

#include <vector>
#include <iostream>

using namespace std;


class IntegerSet
{
public:
    IntegerSet(); //construtor padrão
    IntegerSet(vector<int> vetorDeInteiros, unsigned long tamanho); //construtor que recebe um vetor de inteiros e os usa para o objeto criado

    IntegerSet unionOfSets(IntegerSet segundoVetor); //função que retorna a união dos dois conjuntos
    IntegerSet intersectionOfSets(IntegerSet segundoVetor); //função que retorna a intersecção dos dois conjuntos

    void insertElement(int k); //insere um elemento no conjunto
    void deleteElement(int k); //deleta um elemento do conjunto

    void printSet(); //imprime o conjunto

    bool isEqualTo(IntegerSet segundoVetor); //retorna verdadeiro caso os dois conjuntos sejam iguais

private:
    vector <int> vetor;
};


#endif //LAB4EX1_INTEGERSET_H
