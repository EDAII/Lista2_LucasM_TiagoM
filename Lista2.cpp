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
            this->Sexo = a.Sexo;
            this->CPF = a.CPF;
            this->RG = a.RG;
            this->Peso = a.Peso;
            this->Altura = a.Altura;
            this->Estado_Civil = a.Estado_Civil;
            this->Cidade = a.Cidade;
            this->Estado = a.Estado;
            this->Nacionalidade = a.Nacionalidade;
            this->Escolaridade = a.Escolaridade;
            this->Renda = a.Renda;

            return *this;

        }

};

void swap(Pessoa a, Pessoa b){

    Pessoa temp;
    temp = a;
    a = b;
    b = a;

}

void selection_sort_estavel(vector <Pessoa>){


}


int main(){

    Pessoa Eu(14), Vc(10);

    Vc = Eu;

    cout << Vc.Idade << endl;

    return 0;
}