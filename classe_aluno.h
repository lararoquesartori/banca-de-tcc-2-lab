#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno{
	protected:
		string nome;
		string curso;
        string email;
        int matricula;
        int telefone_fixo;
        int celular;
        int tcc;
        int semestre;
        int frequencia;
	public:
	Aluno(string nome){
        this->nome = nome;
    }
	Aluno(string nome, string curso, string email, int matricula, int telefone_fixo, int celular, int tcc, int semestre, int frequencia ){
		this->nome = nome;
        this->curso = curso;
        this->email = email;
        this->matricula = matricula;
        this->telefone_fixo = telefone_fixo;
        this-> celular = celular;
        this->tcc = tcc;
        this->semestre = semestre;
        this->frequencia;
	}
	void setNome(string nome){
		this->nome = nome;
	}
    void setCurso(string curso){
        this->curso =curso;
    }
    void setEmail(string email){
        this->email=email;
    }
    void setMatricula(int matricula){
        this->matricula = matricula;
    }
    void setTelefone(int telefone_fixo){
        this->telefone_fixo = telefone_fixo;
    }
    void setCelular(int celular){
        this->celular = celular;
    }
    void setTcc(int tcc){
        this->tcc = tcc;
    }
    void setSemestre(int semestre){
        this->semestre = semestre;
    }
    void setFrequencia(int frequencia){
        this->frequencia = frequencia;
    }
	string getNome(){
		return this->nome;
	
    }
    string getCurso(){
        return this->curso =curso;
    }
    string getEmail(){
        return this->email=email;
    }
    int getMatricula(){
        return this->matricula = matricula;
    }
    int getTelefone(){
        return this->telefone_fixo = telefone_fixo;
    }
    int getCelular(){
        return this->celular = celular;
    }
    int getTcc(){
        return this->tcc = tcc;
    }
    int getSemestre(){
        return this->semestre = semestre;
    }
    int getFrequencia(){
        return this->frequencia = frequencia;
    }

};