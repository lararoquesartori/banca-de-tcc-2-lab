#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
 int tamanho_aluno;

  vector<Aluno> vetor_aluno; 

int verificar_aluno(int matricula){
  for (auto x : vetor_aluno){
    if(x.getMatricula() == matricula){
      return 1;
    }
     
}
  return 0;
}
void cadastrar_aluno_teste(string nome, string curso, string email, int matricula, int telefone_fixo, int celular, int tcc, int semestre, int frequencia){
    Aluno aluno;
    aluno.setNome(nome);
    aluno.setCurso(curso);
    aluno.setEmail(email);
    aluno.setMatricula(matricula);
    aluno.setTelefone(telefone_fixo);
    aluno.setCelular(celular);
    aluno.setTcc(tcc);
    aluno.setSemestre(semestre);
    aluno.setFrequencia(frequencia);
    if(verificar_aluno(matricula)){
    cout << "aluno já cadastrado" << endl;   
    return;  
    }
    vetor_aluno.push_back(aluno);
    tamanho_aluno++;
}
void cadastrar_aluno(){//funciona

      string nome;
      cout << "Digite o nome do aluno: "<< endl;
      cin >> nome;

      string curso;
      cout << "Digite o curso do aluno: "<< endl;
      cin >> curso;

      string email;
      cout << "Digite o email do aluno: "<< endl;
      cin >> email;

      int matricula;
      cout << "Digite a matricula do aluno: "<< endl;
      cin >> matricula;

      int telefone_fixo;
      cout << "Digite o telefone do aluno: "<< endl;
      cin >> telefone_fixo;

      int celular;
      cout << "Digite o celular do aluno: "<< endl;
      cin >> celular;

      int tcc;
      cout << "Digite o numero do tcc do aluno: "<< endl;
      cin >> tcc;

      int semestre;
      cout << "Digite o semestretre do aluno: "<< endl;
      cin >> semestre;

      int frequencia;
      cout << "Digite a frequencia do aluno: "<< endl;
      cin >> frequencia;

      Aluno aluno;
      aluno.setNome(nome);
      aluno.setCurso(curso);
      aluno.setEmail(email);
      aluno.setMatricula(matricula);
      aluno.setTelefone(telefone_fixo);
      aluno.setCelular(celular);
      aluno.setTcc(tcc);
      aluno.setSemestre(semestre);
      aluno.setFrequencia(frequencia);
      if(verificar_aluno(matricula)){
        cout << "aluno já cadastrado" << endl;   
        return;  
      }
      vetor_aluno.push_back(aluno);
      tamanho_aluno++;
}

void imprimir_todos_alunos(){//funciona
  cout << "Imprimindo todos os alunos: "<< endl << endl;
  for (auto x : vetor_aluno){
    cout << "  NOME: "<<x.getNome() << endl;
    cout << "  MATRICULA: "<<x.getMatricula()<< endl << endl;
  }
}

void imprimir_um_aluno(int matricula){//funciona
  for (auto x : vetor_aluno){
    if(x.getMatricula() == matricula){
    cout << "Imprimindo o aluno selecionado: "<< endl << endl;
    cout << "  NOME: "<<x.getNome() << endl;
    cout << "  MATRICULA: "<<x.getMatricula()<< endl << endl;
    }
     
    }
  }

void remover_aluno(int matricula){//funciona
  int position=0;
  for (auto x : vetor_aluno){
    if(x.getMatricula() == matricula){
      vetor_aluno.erase(vetor_aluno.begin()+position);
      tamanho_aluno--;
    }
    else{
      position++;
    }
    }
    
}
void salvar_aluno(){

  ofstream MeuArquivo;
  Aluno aluno;
  string nome;
  string email;
  string curso;

  
  nome = (char *)malloc(sizeof(char)*100);
  curso = (char *)malloc(sizeof(char)*100);
  email = (char *)malloc(sizeof(char)*100);

  MeuArquivo.open("arquivocpp.bin",ios_base::out | ios::binary);
  tamanho_aluno = vetor_aluno.size();

  MeuArquivo.write((char *) &tamanho_aluno, sizeof(int));
  for( int i=0; i < vetor_aluno.size(); i++){
      aluno = vetor_aluno.at(i);    
      MeuArquivo.write((char *) &aluno, sizeof(Aluno));
      nome = aluno.getNome();
      curso = aluno.getCurso();
      email = aluno.getEmail();
      MeuArquivo.write((char *) &nome, sizeof(char)*100);
      MeuArquivo.write((char *) &curso, sizeof(char)*100);
      MeuArquivo.write((char *) &email, sizeof(char)*100);
      
      
  }
  
  MeuArquivo.close();
}
void salvar_aluno(){

  ofstream MeuArquivo;
  Aluno aluno;
  string nome;
  string email;
  string curso;

  
  nome = (char *)malloc(sizeof(char)*100);
  curso = (char *)malloc(sizeof(char)*100);
  email = (char *)malloc(sizeof(char)*100);

  MeuArquivo.open("arquivocpp.bin",ios_base::out | ios::binary);
  tamanho_aluno = vetor_aluno.size();

  MeuArquivo.write((char *) &tamanho_aluno, sizeof(int));
  for( int i=0; i < vetor_aluno.size(); i++){
      aluno = vetor_aluno.at(i);    
      MeuArquivo.write((char *) &aluno, sizeof(Aluno));
      nome = aluno.getNome();
      curso = aluno.getCurso();
      email = aluno.getEmail();
      MeuArquivo.write((char *) &nome, sizeof(char)*100);
      MeuArquivo.write((char *) &curso, sizeof(char)*100);
      MeuArquivo.write((char *) &email, sizeof(char)*100);
      
      
  }
  
  MeuArquivo.close();
}

void ler_aluno(){
  int tamanho;  
  Aluno aluno;
  string nome;
  string email;
  string curso;
  nome = (char *)malloc(sizeof(char)*100);
  curso = (char *)malloc(sizeof(char)*100);
  email = (char *)malloc(sizeof(char)*100);


  ifstream fin;
  fin.open("arquivocpp.bin", ios_base::in | ios_base::binary);
  
  fin.read((char *) &tamanho, sizeof(int));
 for( int i=0; i< tamanho; i++){
      fin.read((char *) &aluno, sizeof(Aluno));
      fin.read((char *) &nome, sizeof(char)*100);
      fin.read((char *) &curso, sizeof(char)*100);
      fin.read((char *) &email, sizeof(char)*100);
      cout<< aluno.getMatricula()<<endl;
      
     
  }
  cout << tamanho << endl;
  
  fin.close();
}
