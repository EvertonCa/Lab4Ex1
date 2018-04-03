//
// Created by Everton Cardoso on 28/03/2018.
//

#ifndef LAB4EX1_INTEGERSET_H
#define LAB4EX1_INTEGERSET_H

#include <vector>
#include <iostream>

using namespace std;


class IntegerSet
{
public:
    IntegerSet();
    IntegerSet(vector<int> vetorDeInteiros, unsigned long tamanho);

    IntegerSet unionOfSets(IntegerSet segundoVetor);
    IntegerSet intersectionOfSets(IntegerSet segundoVetor);

    void insertElement(int k);
    void deleteElement(int k);

    void printSet();

    bool isEqualTo(IntegerSet segundoVetor);

private:
    vector <int> vetor;
};


#endif //LAB4EX1_INTEGERSET_H
