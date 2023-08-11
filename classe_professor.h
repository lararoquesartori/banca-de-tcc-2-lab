#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Professor{
	protected:
	string nome;
    int siape;
    string email;
    string instituicao;
    int telefone_fixo;
    int celular;
    
	public:
    Professor(string nome){
        this->nome = nome;
    }
	
	Professor(string nome,string email, string instituicao, int siape, int telefone_fixo, int celular ){
		this->nome = nome;
        this->email = email;
        this->instituicao = instituicao;
        this->siape = siape;
        this->telefone_fixo = telefone_fixo;
        this-> celular = celular;
        
	}
	void setNome(string nome){
		this->nome = nome;
	}
    void setEmail(string email){
        this->email = email;
    }
    void setInstituicao(string instituicao){
        this->instituicao = instituicao;
    }
    void setSiape(int matricula){
        this->siape = siape;
    }
    void setTelefone(int telefone_fixo){
        this->telefone_fixo = telefone_fixo;
    }
    void setCelular(int celular){
        this->celular = celular;
    }
	string getNome(){
		return this->nome;
	
    }
    string getEmail(){
        return this->email = email;
    }
    string getInstituicao(){
        return this->instituicao = instituicao;
    }
    int getSiape(){
        return this->siape = siape;
    }
    int getTelefone(){
        return this->telefone_fixo = telefone_fixo;
    }
    int getCelular(){
        return this->celular = celular;
    }
    

};





