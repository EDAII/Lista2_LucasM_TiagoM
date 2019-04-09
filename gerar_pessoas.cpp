#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<string> idade;
    vector<string> nome;
    vector<string> cpf;
    vector<string> altura;
    vector<string> peso;
    vector<string> estado_civil;
    vector<pair<string, string>> ceps;
    vector<string> nacionalidade;
    vector<string> escolaridade;
    vector<string> renda;

    pair<string,string> aux;
    string linha;
    string buffer{""};

    ifstream arquivo1("./Lista_informacoes/nomes_aleat.txt");

    while(getline(arquivo1 ,linha)){
        nome.push_back(linha);
    }

    arquivo1.close();
    ifstream arquivo2("./Lista_informacoes/cpfs_aleat.txt");

     while(getline(arquivo2 ,linha)){
        cpf.push_back(linha);
    }

    arquivo2.close();
    ifstream arquivo3("./Lista_informacoes/lista_altura.txt");

     while(getline(arquivo3 ,linha)){
        altura.push_back(linha);
    }

    arquivo3.close();
    ifstream arquivo4("./Lista_informacoes/est_civil.txt");

     while(getline(arquivo4 ,linha)){
        estado_civil.push_back(linha);
    }

    arquivo4.close();
    ifstream arquivo5("./Lista_informacoes/lista_ceps.txt");

    while(getline(arquivo5 ,linha)){
        
        buffer = "";

        int j;
        for(j=0; linha[j] != '\t'; j++){
            
            buffer += linha[j];
        }

        aux.first = buffer;

        buffer = "";

        for(j+=1; linha[j] != '\0'; j++){
            buffer += linha[j];
        }

        aux.second = buffer;

        ceps.push_back(aux);
    }

    arquivo5.close();
    ifstream arquivo6("./Lista_informacoes/lista_paises.txt");

     while(getline(arquivo6 ,linha)){
        nacionalidade.push_back(linha);
    }

    arquivo6.close();
    ifstream arquivo7("./Lista_informacoes/escolaridade.txt");

     while(getline(arquivo7 ,linha)){
        escolaridade.push_back(linha);
    }

    arquivo7.close();
    ifstream arquivo8("./Lista_informacoes/lista_renda.txt");

     while(getline(arquivo8 ,linha)){
        renda.push_back(linha);
    }

    arquivo8.close();
    ifstream arquivo9("./Lista_informacoes/lista_pesos.txt");

     while(getline(arquivo9 ,linha)){
        peso.push_back(linha);
    }

    arquivo9.close();
    ifstream arquivo10("./Lista_informacoes/lista_idade.txt");

     while(getline(arquivo10 ,linha)){
        idade.push_back(linha);
    }

    arquivo9.close();

    for (int i=0; i < 200000; i++) {
        srand(clock());

        int pos;

        pos = rand() % idade.size();
        cout << idade[pos] << endl;

        pos = rand() % nome.size();
        cout << nome[pos] << endl;

        pos = rand() % cpf.size();
        cout << cpf[pos] << endl;

        pos = rand() % peso.size();
        cout << peso[pos] << endl;

        pos = rand() % altura.size();
        cout << altura[pos] << endl;

        pos = rand() % estado_civil.size();
        cout << estado_civil[pos] << endl;

        pos = rand() % ceps.size();
        cout << ceps[pos].second << endl;
        
        pos = rand() % nacionalidade.size();
        cout << nacionalidade[pos] << endl;

        pos = rand() % escolaridade.size();
        cout << escolaridade[pos] << endl;

        pos = rand() % renda.size();
        cout << renda[pos] << endl;

        cout << "$" << endl;
    }

    return 0;
}