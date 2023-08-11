#include <iostream>
#include "classe_aluno.h"
#include "classe_banca.h"
#include "classe_professor.h"
#include "funcoes_alunos.h"
#include "funcoes_banca.h"
#include "funcoes_professor.h"
using namespace std;

void salvar(){
	salvar_aluno();
	salvar_professor();
	salvar_banca();
}

void ler(){
	ler_aluno();
	ler_professor();
	ler_banca();
}
/*
    EQUIPE:
    Fernanda Amorim
    Lara Roque
    Leon Araujo
    Marcus Luan
    Milena Gomes "Engenharia de software"

*/

int main(){
int num = 0;
int opcao = 0;

    while(1){
    
        cout << "EXIBIR:" << endl << "1-aluno \t 2-professor \t 3-banca" << endl;
        cout << "ADICIONAR:" << endl << "4-aluno \t 5-professor \t 6-banca" << endl;
        cout << "ATUALIZAR:" << endl << "7-aluno \t 8-professor \t 9-banca" << endl;
        cout << "EXCLUIR:" << endl << "10-aluno \t 11-professor \t 12-banca" << endl;
        cout << "Para salvar na memoria digite 13, Para carregar o arquivo salvo 14" << endl;

        cout << "Para fechar o programa digite 15" << endl;
    
        cin >> opcao;
    
        if(opcao > 15 || opcao <  1){
            cout << "Opção invalida, por favor reinicie o programa" << endl;
            break;
        }
        switch(opcao){
            case 1:
                imprimir_todos_alunos();
                break;
            case 2:
                imprimir_todos_professores();
                break;
            case 3:
                imprimir_todas_bancas();
                break;
            case 4:
            int num;
                cout << "digite o numero de alunos a adicionar";
                cin >> num;
                cout << endl;
                for (int i = 0; i < num; ++i){
                    cadastrar_aluno();
                }            
                break;
            case 5:
                cout << "digite o numero de profesores a adicionar";
                cin >> num;
                cout << endl;
                for (int i = 0; i < num; ++i){
                    cadastrar_professor();
                }       

                break;
            case 6:
                cout << "digite o numero de bancas a adicionar";
                cin >> num;
                cout << endl;
                for (int i = 0; i < num; ++i){
                    cadastrar_banca();
                }
                break;

            
            case 7:
                atualizar_aluno();
                break;
            case 8:
                atualizar_professor();
                break;
            case 9:
                atualizar_banca();
                break;
            case 10:
                cout << "digite a matricula do aluno a se excluir";
                cin >> num;
                cout << endl;
                remover_aluno(num);
                break;
            case 11:
                cout << "digite o siape do professor a se excluir";
                cin >> num;
                cout << endl;
                remover_professor(num);
                break;
            case 12:
                cout << "digite o id da banca a se excluir";
                cin >> num;
                cout << endl;
                remover_aluno(num);
                break;
            case 13:
                cout << endl << "Arquivos salvos com sucesso!!!!";
                salvar();
                break;
            case 14:
                cout << endl <<"Sua base de dados foi carregada com sucesso!!!!, se ela existir.";
                ler();
                break; 
            case 15:
                return 0;
        }   
    }  

  return 0;
}
