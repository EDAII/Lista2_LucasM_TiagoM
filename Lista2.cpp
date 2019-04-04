#include<bits/stdc++.h>

using namespace std;

class Pessoa{

    public:

        int Idade;
        string Nome;
        string Sexo;
        string CPF;
        string RG;
        double Peso;
        double Altura;
        string Nome_Pai;
        string Nome_Mae;
        string Estado_Civil;
        string Cidade;
        string Estado;
        string Nacionalidade;
        string Escolaridade;
        double Renda;

        Pessoa(int Idade){
            this-> Idade = Idade;
        }

        Pessoa(int Idade, string Nome, string Sexo, string CPF, string RG, double Peso, double Altura,
                        string Nome_Pai, string Nome_Mae, string Estado_Civil, string Cidade, string Estado, string Nacionalidade,
                        string Escolaridade, double Renda){

            this->Idade = Idade;
            this->Nome = Nome;
            this->Sexo = Sexo;
            this->CPF = CPF;
            this->RG = RG;
            this->Peso = Peso;
            this->Altura = Altura;
            this->Nome_Pai = Nome_Pai;
            this->Nome_Mae = Nome_Mae;
            this->Estado_Civil = Estado_Civil;
            this->Cidade = Cidade;
            this->Estado = Estado;
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

};


int main(){


    return 0;
}