#include <iostream>
#include "IntegerSet.h"

using namespace std;

int main()
{
    vector<int> vetorTemp;
    int temp;

    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "|                     BEM VINDO AO VECTOR ANALIST 3000                     |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "|                             PRIMEIRO CONJUNTO                            |" << endl;
    cout << "| Entre com os inteiros que deseja armazenar (entre 0 e 100) sem repeticao:|" << endl;
    cout << "| Obs.: Entrar com qualquer numero fora do intervalo encerra a aquisicao   |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;

    cin >> temp;

    while(temp >= 0 && temp <= 100)
    {
        vetorTemp.push_back(temp);
        cin >> temp;
    }

    IntegerSet primeiroVetor(vetorTemp, vetorTemp.size());

    vetorTemp.clear();

    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "|                             SEGUNDO CONJUNTO                             |" << endl;
    cout << "| Entre com os inteiros que deseja armazenar (entre 0 e 100) sem repeticao:|" << endl;
    cout << "| Obs.: Entrar com qualquer numero fora do intervalo encerra a aquisicao   |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;

    cin >> temp;

    IntegerSet segundoVetor;

    while(temp >= 0 && temp <= 100)
    {
        segundoVetor.insertElement(temp);
        cin >> temp;
    }

    bool teste = true;

    while (teste)
    {
        int opcao;
        cout << "|--------------------------------------------------------------------------|" << endl;
        cout << "| Entre com a opcao desejada:                                              |" << endl;
        cout << "| 1 - Uniao dos conjuntos:                                                 |" << endl;
        cout << "| 2 - Interseccao dos conjuntos:                                           |" << endl;
        cout << "| 3 - Verificar se os conjuntos sao iguais:                                |" << endl;
        cout << "| 4 - Imprimir primeiro conjunto:                                          |" << endl;
        cout << "| 5 - Imprimir segundo conjunto:                                           |" << endl;
        cout << "| 6 - Apagar um numero do primeiro conjunto:                               |" << endl;
        cout << "| 7 - Apagar um numero do segundo conjunto:                                |" << endl;
        cout << "| 0 - Fim do programa:                                                     |" << endl;
        cout << "|--------------------------------------------------------------------------|" << endl;
        cin >> opcao;

        switch (opcao)
        {
            case 0:
            {
                cout << "|--------------------------------------------------------------------------|" << endl;
                cout << "|                 Obrigado por usar o VECTOR ANALIST 3000!                 |" << endl;
                cout << "|--------------------------------------------------------------------------|" << endl;
                teste = false;
                break;
            }

            case 1:
            {
                IntegerSet terceiroVetor = primeiroVetor.unionOfSets(segundoVetor);
                terceiroVetor.printSet();
                break;
            }

            case 2:
            {
                IntegerSet terceiroVetor = primeiroVetor.intersectionOfSets(segundoVetor);
                terceiroVetor.printSet();
                break;
            }

            case 3:
            {
                bool igual = primeiroVetor.isEqualTo(segundoVetor);
                if(igual)
                    cout << "Sao iguais" << endl;
                else
                    cout << "Sao diferentes" << endl;

                break;
            }

            case 4:
            {
                primeiroVetor.printSet();
                break;
            }

            case 5:
            {
                segundoVetor.printSet();
                break;
            }
                
            case 6:
            {
                cout << "|--------------------------------------------------------------------------|" << endl;
                cout << "|                  Qual dos numeros abaixo deseja apagar?                  |" << endl;
                cout << "|--------------------------------------------------------------------------|" << endl;
                primeiroVetor.printSet();
                
                int digitado;
                
                cin >> digitado;
                primeiroVetor.deleteElement(digitado);
                
                cout << "|--------------------------------------------------------------------------|" << endl;
                cout << "|                              Numero APAGADO!                             |" << endl;
                cout << "|--------------------------------------------------------------------------|" << endl;
                
                break;
            }
                
            case 7:
            {
                cout << "|--------------------------------------------------------------------------|" << endl;
                cout << "|                  Qual dos numeros abaixo deseja apagar?                  |" << endl;
                cout << "|--------------------------------------------------------------------------|" << endl;
                segundoVetor.printSet();
                
                int digitado;
                
                cin >> digitado;
                segundoVetor.deleteElement(digitado);
                
                cout << "|--------------------------------------------------------------------------|" << endl;
                cout << "|                              Numero APAGADO!                             |" << endl;
                cout << "|--------------------------------------------------------------------------|" << endl;
                
                break;
            }

            default:
            {
                cout << "|--------------------------------------------------------------------------|" << endl;
                cout << "|                        Entre com uma opcao valida!                       |" << endl;
                cout << "|--------------------------------------------------------------------------|" << endl;
            }

        }
    }


    return 0;
}
