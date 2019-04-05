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

vector<Pessoa> selection_sort_estavel(vector<Pessoa> a){

    int i, j, min_indx;

    for(i=0; i < a.size()-1; i++){

        min_indx = i;
        for(j=i+1; j < a.size(); j++){
            if(a.at(j) < a.at(min_indx)){
                min_indx=j;
            }
        }

        Pessoa temp;

        temp = a.at(min_indx);
        a.at(min_indx) = a.at(i);
        a.at(i) = temp;
    }

    return a;

}

vector<Pessoa> ler_arquivo(){

    vector<Pessoa> aux;
    Pessoa pessoa;
    string linha;

    ifstream arquivo("Pessoas.txt");

    while(getline(arquivo, linha)){
        pessoa.Idade = atoi(linha.c_str());

        getline(arquivo, linha);
        pessoa.Nome = linha;

        getline(arquivo, linha);
        pessoa.CPF = linha;

        getline(arquivo, linha);
        pessoa.Peso = stod(linha.c_str());

        getline(arquivo, linha);
        pessoa.Altura = stod(linha.c_str());

        getline(arquivo, linha);
        pessoa.Estado_Civil = linha;

        getline(arquivo, linha);
        pessoa.Endereco = linha;

        getline(arquivo, linha);
        pessoa.Nacionalidade = linha;

        getline(arquivo, linha);
        pessoa.Escolaridade = linha;

        getline(arquivo, linha);
        pessoa.Renda = stod(linha.c_str());

        getline(arquivo, linha);

        aux.push_back(pessoa);
    }

    return aux;
}


int main(){

    vector<Pessoa> teste;

    teste = ler_arquivo();

    teste = selection_sort_estavel(teste);

    for(int i=0; i<teste.size(); i++){
        cout << teste.at(i).Idade << endl;
        cout << teste.at(i).Nome << endl;

    }

    return 0;
}