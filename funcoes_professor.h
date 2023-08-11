#include <iostream>
#include <vector>
#include <algorithm> 
int tamanho_professor;

  vector<Professor> vetor_professor; 

int verificar_professor(int siape){
  for (auto x : vetor_professor){
    if(x.getSiape() == siape){
      return 1;
    }
     
}
  return 0;
}

void cadastrar_professor_teste(string nome, string email, string instituicao, int siape, int telefone_fixo, int celular ){
    Professor professor(nome);
    professor.setEmail(email);
    professor.setInstituicao(instituicao);
    professor.setSiape(siape);
    professor.setTelefone(telefone_fixo);
    professor.setCelular(celular);
    if(verificar_professor(siape)){
    cout << "professor já cadastrado" << endl;   
    return;  
    }
    vetor_professor.push_back(professor);
}

void cadastrar_professor(){//funciona

      string nome;
      cout << " Digite o nome do professor(sem espacos, coloque '_'no lugar): "<< endl;
      cin >> nome;

      string email;
      cout << " Digite o email do professor(ex: eu@gmail.com): "<< endl;
      cin >> email;

      string instituicao;
      cout << " Digite a instituicao do professor(sem espacos, coloque '_'no lugar): "<< endl;
      cin >> instituicao;

      int siape;
      cout << " Digite o siape do professor:(ex: 9999) "<< endl;
      cin >> siape;

      int telefone_fixo;
      cout << " Digite o telefone do professor:(ex: (99)99999-9999) "<< endl;
      cin >> telefone_fixo;

      int celular;
      cout << " Digite o celular do professor: (ex: (99)99999-9999)"<< endl;
      cin >> celular;
    
    cout << endl << endl;

    Professor professor(nome);
    professor.setEmail(email);
    professor.setInstituicao(instituicao);
    professor.setSiape(siape);
    professor.setTelefone(telefone_fixo);
    professor.setCelular(celular);
    if(verificar_professor(siape)){
    cout << "Professor já cadastrado! Verifique o Siape e reenvie." << endl;   
    return;  
    }
    vetor_professor.push_back(professor);
}


void cadastrar_professor_restrito(int siape){//funciona

      string nome;
      cout << " Digite o nome do professor(sem espacos, coloque '_'no lugar): "<< endl;
      cin >> nome;

      string email;
      cout << " Digite o email do professor(ex: eu@gmail.com): "<< endl;
      cin >> email;

      string instituicao;
      cout << " Digite a instituicao do professor(sem espacos, coloque '_'no lugar): "<< endl;
      cin >> instituicao;

      int telefone_fixo;
      cout << " Digite o telefone do professor:(ex: (99)99999-9999) "<< endl;
      cin >> telefone_fixo;

      int celular;
      cout << " Digite o celular do professor: (ex: (99)99999-9999)"<< endl;
      cin >> celular;
    
    cout << endl << endl;

    Professor professor(nome);
    professor.setEmail(email);
    professor.setInstituicao(instituicao);
    professor.setSiape(siape);
    professor.setTelefone(telefone_fixo);
    professor.setCelular(celular);
    
    vetor_professor.push_back(professor);
}

void imprimir_todos_professores(){//funciona
  cout << "***Imprimindo todos os professores: ***"<< endl << endl;
  for (auto x : vetor_professor){
    cout << "  NOME: "<<x.getNome() << endl;
    cout << "  SIAPE: "<<x.getSiape()<< endl << endl;
  }
}

void imprimir_um_professor(int siape){//funciona
  for (auto x : vetor_professor){
    if(x.getSiape() == siape){
    cout << "Imprimindo o professor selecionado: "<< endl << endl;
    cout << "  NOME: "<<x.getNome() << endl;
    cout << "  SIAPE: "<<x.getSiape()<< endl << endl;
    }
     
  }
}

void remover_professor(int siape){//funciona
  int position=0;
  for (auto x : vetor_professor){
    if(x.getSiape() == siape)
      vetor_professor.erase(vetor_professor.begin()+position);
    else{
      position++;
    }
  }   
}


void atualizar_professor(){
    int siape;
    cout << "Digite a siape do professor para atualiza-lo" << endl;
    cin >> siape;
    if(verificar_professor(siape) == 0){
        cout << "siape incorreto" << endl;
    }else{
        imprimir_um_professor(siape);
        remover_professor(siape);
        cout << endl << "Coloque os novos valores do professor" << endl;
        cadastrar_professor_restrito(siape);
    }
}

void salvar_professor(){

  ofstream MeuArquivo;
  Professor professor;
  string nome;
  string email;
  string instituicao;

  
  nome = (char *)malloc(sizeof(char)*100);
  email = (char *)malloc(sizeof(char)*100);
  instituicao = (char *)malloc(sizeof(char)*100);

  MeuArquivo.open("arquivocpp.bin",ios_base::out | ios::binary);
  tamanho_professor = vetor_professor.size();

  MeuArquivo.write((char *) &tamanho_professor, sizeof(int));
  for( int i=0; i < vetor_professor.size(); i++){
      aluno = vetor_aluno.at(i);    
      MeuArquivo.write((char *) &professor, sizeof(Professor));
      nome = professor.getNome();
      email = professor.getEmail();
      instituicao = professor.getInstituicao();
      MeuArquivo.write((char *) &nome, sizeof(char)*100);
      MeuArquivo.write((char *) &email, sizeof(char)*100);
      MeuArquivo.write((char *) &instituicao, sizeof(char)*100);
      
      
  }
  
  MeuArquivo.close();
}


void ler_professor(){
  int tamanho;  
  Professor professor;
  string nome;
  string email;
  string instituicao;

  
  nome = (char *)malloc(sizeof(char)*100);
  email = (char *)malloc(sizeof(char)*100);
  instituicao = (char *)malloc(sizeof(char)*100);



  ifstream fin;
  fin.open("arquivocpp.bin", ios_base::in | ios_base::binary);
  
  fin.read((char *) &tamanho, sizeof(int));
 for( int i=0; i< tamanho; i++){
      fin.read((char *) &professor, sizeof(Professor));
      fin.read((char *) &nome, sizeof(char)*100);
      fin.read((char *) &email, sizeof(char)*100);
      fin.read((char *) &instituicao, sizeof(char)*100);
      cout<< professor.getSiape()<<endl;
      
     
  }
  cout << tamanho << endl;
  
  fin.close();
}

