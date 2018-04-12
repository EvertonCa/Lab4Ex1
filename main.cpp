/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos
Programa criado para receber dois conjuntos de numeros inteiros entre 0 e 100 e manipula-los
 */

#include <iostream>
#include "IntegerSet.h"

using namespace std;

int main()
{
    vector<int> vetorTemp;
    int temp;
        
    //mensagem de boas vindas e preenchimento do primeiro conjunto
    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "|                     BEM VINDO AO VECTOR ANALIST 3000                     |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "|                             PRIMEIRO CONJUNTO                            |" << endl;
    cout << "| Entre com os inteiros que deseja armazenar (entre 0 e 100) sem repeticao:|" << endl;
    cout << "| Obs.: Entrar com qualquer numero fora do intervalo encerra a aquisicao   |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;

    cin >> temp;

    //preenchimento usando o construtor que passa um vetor de inteiros para a criação do conjunto
    while(temp >= 0 && temp <= 100)
    {
        vetorTemp.push_back(temp);
        cin >> temp;
    }

    IntegerSet primeiroVetor(vetorTemp, vetorTemp.size());

    vetorTemp.clear();

    //mensagem de preenchimento do segundo conjunto
    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "|                             SEGUNDO CONJUNTO                             |" << endl;
    cout << "| Entre com os inteiros que deseja armazenar (entre 0 e 100) sem repeticao:|" << endl;
    cout << "| Obs.: Entrar com qualquer numero fora do intervalo encerra a aquisicao   |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;

    cin >> temp;

    //preenchimento usando o construtor padrão e adicionando cada numero no conjunto
    IntegerSet segundoVetor;
    
    while(temp >= 0 && temp <= 100)
    {
        segundoVetor.insertElement(temp);
        cin >> temp;
    }

    bool teste = true;

    while (teste) //loop de execução infinita até que seja solicitado fim do programa
    {
        int opcao;
        //menu de opções para o usuário
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
            case 0: //FIM DO PROGRAMA
            {
                cout << "|--------------------------------------------------------------------------|" << endl;
                cout << "|                 Obrigado por usar o VECTOR ANALIST 3000!                 |" << endl;
                cout << "|--------------------------------------------------------------------------|" << endl;
                teste = false;
                break;
            }

            case 1: //monstra a união entre os dois conjuntos
            {
                IntegerSet terceiroVetor = primeiroVetor.unionOfSets(segundoVetor);
                terceiroVetor.printSet();
                break;
            }

            case 2: //mostra a intersecção entre os dois conjuntos
            {
                IntegerSet terceiroVetor = primeiroVetor.intersectionOfSets(segundoVetor);
                terceiroVetor.printSet();
                break;
            }

            case 3: // verifica se os dois conjuntos são iguais (contém os mesmos numeros)
            {
                bool igual = primeiroVetor.isEqualTo(segundoVetor);
                if(igual)
                    cout << "Sao iguais" << endl;
                else
                    cout << "Sao diferentes" << endl;

                break;
            }

            case 4: //imprime o primeiro conjunto
            {
                primeiroVetor.printSet();
                break;
            }

            case 5: //inmprime o segundo conjunto
            {
                segundoVetor.printSet();
                break;
            }
                
            case 6: //imprime o primeiro conjunto após perguntar qual numero do mesmo deve ser apagado e em seguida, o apaga.
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
                
            //imprime o segundo conjunto após perguntar qual numero do mesmo deve ser apagado e em seguida, o apaga.
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

            // mensagem de opção inválida
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
