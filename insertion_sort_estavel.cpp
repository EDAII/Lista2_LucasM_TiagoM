#include<bits/stdc++.h>

using namespace std;

class Pessoa{

    public:

        int Idade;
        string Nome;
        string CPF;
        double Peso;
        double Altura;
        string Estado_Civil;
        string Endereco;
        string Nacionalidade;
        string Escolaridade;
        double Renda;

        Pessoa(int Idade){
            this-> Idade = Idade;
        }

        Pessoa(){

        }

        Pessoa(int Idade, string Nome, string CPF, double Peso, double Altura,
                        string Estado_Civil, string Endereco, string Nacionalidade,
                        string Escolaridade, double Renda){

            this->Idade = Idade;
            this->Nome = Nome;
            this->CPF = CPF;
            this->Peso = Peso;
            this->Altura = Altura;
            this->Estado_Civil = Estado_Civil;
            this->Endereco = Endereco;
            this->Nacionalidade = Nacionalidade;
            this->Escolaridade = Escolaridade;
            this->Renda = Renda;
        }

        friend bool operator < (Pessoa const& a, Pessoa const& b){
            return a.Idade < b.Idade;
        }
        
        friend bool operator <= (Pessoa const& a, Pessoa const& b){
            return a.Idade <= b.Idade;
        }

        friend bool operator > (Pessoa const& a, Pessoa const& b){
            return a.Idade > b.Idade;
        }

        friend bool operator >= (Pessoa const& a, Pessoa const& b){
            return a.Idade >= b.Idade;
        }

        Pessoa& operator=(Pessoa& a){

            this->Idade = a.Idade;
            this->Nome = a.Nome;
            this->CPF = a.CPF;
            this->Peso = a.Peso;
            this->Altura = a.Altura;
            this->Estado_Civil = a.Estado_Civil;
            this->Endereco = a.Endereco;
            this->Nacionalidade = a.Nacionalidade;
            this->Escolaridade = a.Escolaridade;
            this->Renda = a.Renda;

            return *this;

        }

        ~Pessoa(){
        }

};

vector<Pessoa> insert_sort_estavel(vector<Pessoa> a){

    int i, j;
    Pessoa chave;

    for(i=1; i < a.size(); i++){

        chave = a.at(i);
        j = i - 1;

        while(a.at(j) > chave && j>=0){
            a.at(j+1) = a.at(j);
            j = j-1;
        }

        a.at(j+1) = chave;
    }

    return a;

}


int main(){

    return 0;
}