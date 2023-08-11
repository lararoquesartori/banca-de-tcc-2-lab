#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Banca{
	protected:
    string titulo;
    string resumo;
    string data;
    string horario;
    string local_da_banca;
    int matricula;
    int id;
	
	public:
	void setTitulo(string tituo){
		this->titulo = titulo;
	}
    void setResumo(string resumo){
        this->resumo = resumo;
    }
    void setData(string data){
        this->data = data;
    }
    void setHorario(string horario){
        this->horario = horario;
    }
    void setLocal_da_banca(string local_da_banca){
        this->local_da_banca = local_da_banca;
    }
    void setMatricula(int matricula){
        this->matricula = matricula;
    }
    void setId(int id){
        this->id = id;
    }
	string getTitulo(){
		return this->titulo = titulo;
    }
    string getResumo(){
        return this->resumo = resumo;
    }
    string getData(){
        return this->data = data;
    }
    string getHorario(){
        return this->horario = horario;
    }
    string getLocal_da_banca(){
        return this->local_da_banca = local_da_banca;
    }
    int getMatricula(){
        return this->matricula = matricula;
    }
    int getId(){
        return this->id = id;
    }
    

};
