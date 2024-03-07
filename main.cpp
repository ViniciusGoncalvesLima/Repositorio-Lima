#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const float altura = 1.85f;
    string nome = "Carl Johnson", endereco = "Grove Street, Ganton - East Los Santos", vida = "cheia", cheat = "a";
    const int idade = 56;
    int opcao;
    bool continuar = true, vermais = true;
    char perfil = 'P', extra = 'E';
    double dinheiro = 350.00;
    
    cout<<"Olá! Seja bem-vindo ao InstagrAndreas."<<endl;
    cout<<"Esse perfil pertence ao usuário: CJ"<<endl;
    
    while (continuar = 1) {
                        cout<<"O que gostaria de saber sobre ele?"<<endl;
                        cout<<"1. Nome"<<endl;
                        cout<<"2. Altura"<<endl;
                        cout<<"3. Idade"<<endl;
                        cout<<"4. Endereço"<<endl;
                        cin>>opcao;
    
                       switch (opcao) {
    
                                        case 1:
                                            
                                        cout<<"O nome de CJ é: "<<nome<<"."<<endl;
                                        break;
                                        
                                        case 2:
                                        
                                        cout<<"A altura de CJ é: "<<altura<<"."<<endl;
                                        break;
                                        
                                        case 3:
                                        
                                        cout<<"A idade de CJ é: "<<idade<<"."<<endl;
                                        break;
                                        
                                        case 4:
                                        
                                        cout<<"O endereço de CJ é: "<<endereco<<"."<<endl;
                                        break;
                                        
                                        default:
                                        
                                        cout<<"Opção inválida. Selecione o número correspondente ao conteúdo."<<endl;
                                        break;
    
                                        }
    
                        cout<<"Gostaria de ver mais sobre?"<<endl;
                        cout<<"S. Sim"<<endl;
                        cout<<"N. Não"<<endl;
                        cin>>perfil;
                        if (perfil == 'N') {
                            break;
                        }
                        
                     }
    
    cout<<"Gostaria de informações extras?"<<endl;
    cout<<"S. Sim"<<endl;
    cout<<"N. Não"<<endl;
    cin>>extra;
    if (extra == 'S') {
                        cout<<"O que gostaria de ver?"<<endl;
    cout<<"1. Dinheiro"<<endl;
    cout<<"2. Vida"<<endl;
    cin>>opcao;
    
    switch (opcao) {
    
                    case 1:
                                            
                            cout<<"O dinheiro de CJ é: $"<<dinheiro<<"."<<endl;
                            cout<<"Deixar assim?"<<endl;
                            cin>>cheat;
                            if (cheat == "HESOYAM"){
                                dinheiro+=250000000;
                                cout<< setprecision(9)<<"O dinheiro de CJ é: $"<<dinheiro<<"."<<endl;
                            }
                            break;
                                        
                            case 2:
                                        
                            cout<<"A vida de CJ está: "<<vida<<"."<<endl;
                            break;
    }
                       }
                     
    return 0;
}