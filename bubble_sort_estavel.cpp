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

vector<Pessoa> bubble_sort_estavel(vector<Pessoa> a){

    int i, j, cont_swap=0;
    Pessoa temp;
    clock_t Ticks[2];
    Ticks[0] = clock();

    for(i=0; i < a.size()-1; i++){

        for(j=0; j < a.size()-i-1; j++){
            if(a.at(j) > a.at(j+1)){
                cont_swap++;
                temp = a.at(j);
                a.at(j) = a.at(j+1);
                a.at(j+1) = temp;
            }
        }

    }
    Ticks[1] = clock();
    auto tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Quantidade de swaps Bubble Sort estavel: " << cont_swap << endl;
    cout << "Tempo Bubble Sort estável: " << tempo << "ms" << endl;

    return a;

}

vector<Pessoa> bubble_sort_instavel(vector<Pessoa> a){

    int i, j, cont_swap=0;
    Pessoa temp;
    clock_t Ticks[2];
    Ticks[0] = clock();

    for(i=0; i < a.size()-1; i++){

        for(j=0; j < a.size()-i-1; j++){
            if(a.at(j) >= a.at(j+1)){
                cont_swap++;
                temp = a.at(j);
                a.at(j) = a.at(j+1);
                a.at(j+1) = temp;
            }
        }

    }
    Ticks[1] = clock();
    auto tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Quantidade de swaps Bubble Sort instável: " << cont_swap << endl;
    cout << "Tempo Bubble Sort instável: " << tempo << "ms" << endl;

    return a;

}

vector<Pessoa> insert_sort_estavel(vector<Pessoa> a){
    
    int i, j;
    Pessoa chave;
    int swap = 0;
    clock_t Ticks[2];
    int tempo;

    Ticks[0] = clock();
    for(i=1; i < a.size(); i++){

        chave = a[i];
        j = i - 1;

        while( j >= 0 && a[j] > chave ){
            a[j+1] = a[j];
            swap++;
            j--;
        }

        a[j+1] = chave;
    }
    Ticks[1] = clock();
    tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Quantidade de swaps Insertion Sort estável: " << swap << endl;
    cout << "Tempo Insertion Sort estável: " << tempo << "ms" << endl;

    return a;

}

vector<Pessoa> insert_sort_instavel(vector<Pessoa> a){
    
    int i, j;
    Pessoa chave;
    int swap = 0;
    clock_t Ticks[2];
    int tempo;

    Ticks[0] = clock();
    for(i=1; i < a.size(); i++){

        chave = a[i];
        j = i - 1;

        while( j >= 0 && a[j] >= chave ){
            a[j+1] = a[j];
            swap++;
            j--;
        }

        a[j+1] = chave;
    }
    Ticks[1] = clock();
    tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Quantidade de swaps Insertion Sort instável: " << swap << endl;
    cout << "Tempo Insertion Sort instável: " << tempo << "ms" << endl;

    return a;

}

vector<Pessoa> selection_sort_estavel(vector<Pessoa> a){

    int i, j, min_indx;
    int swap = 0;
    clock_t Ticks[2];
    int tempo;
    Pessoa temp;

    Ticks[0] = clock(); 
    for(i=0; i < a.size()-1; i++){

        min_indx = i;
        for(j=i+1; j < a.size(); j++){
            if(a.at(j) < a.at(min_indx)){
                min_indx=j;
                swap++;
            }
        }

        temp = a.at(min_indx);
        a.at(min_indx) = a.at(i);
        a.at(i) = temp;
    }
    Ticks[1] = clock();
    tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Quantidade de swaps Selection Sort estável: " << swap << endl;
    cout << "Tempo Selection Sort estável: " << tempo << "ms" << endl;

    return a;
}

vector<Pessoa> selection_sort_instavel(vector<Pessoa> a){

    int i, j, min_indx;
    int swap = 0;
    clock_t Ticks[2];
    int tempo;
    Pessoa temp;

    Ticks[0] = clock();
    for(i=0; i < a.size()-1; i++){

        min_indx = i;
        for(j=i+1; j < a.size(); j++){
            if(a.at(j) <= a.at(min_indx)){
                min_indx=j;
                swap++;
            }
        }

        temp = a.at(min_indx);
        a.at(min_indx) = a.at(i);
        a.at(i) = temp;
    }
    Ticks[1] = clock();
    tempo = ((Ticks[1] - Ticks[0]) * 1000 / CLOCKS_PER_SEC);

    cout << "Quantidade de swaps Selection Sort instável: " << swap << endl;
    cout << "Tempo Selection Sort estável: " << tempo << "ms" << endl;

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

    bubble_sort_estavel(teste);
    bubble_sort_instavel(teste);
    cout << endl;
    insert_sort_estavel(teste);
    insert_sort_instavel(teste);
    cout << endl;
    selection_sort_estavel(teste);
    selection_sort_instavel(teste);

    return 0;
}