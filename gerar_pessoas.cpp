#include<bits/stdc++.h>

using namespace std;

class Pessoa{
    public:
        int Idade; // idade_aleat.txt
        string Nome; // nomes_aleat.txt
        string CPF; // cpfs_aleat.txt
        double Peso; // pesos_aleat.txt
        double Altura; //alturas_aleat.txt
        string Estado_Civil; //est_civil.txt
        string Endereco; //lista_ceps.txt
        string Nacionalidade; //lista_paises.txt
        string Escolaridade; //escolaridade.txt
        double Renda; //renda_aleat.txt

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
};

int main(){

    int j;
    vector<Pessoa> pessoas;
    vector<string> nomes;
    vector<bool> numeros;
    vector<string> CPF;
    Pessoa aux2;
    string buffer{""};

    ifstream arquivo("nomes_aleat.txt");

    while(getline(arquivo ,linha)){
        nomes.push_back(linha);
    }

    ifstream arquivo_num("numeros.txt");

    return 0;
}