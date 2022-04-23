#include <cstring>
#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(int novoIdPessoa) {
    idPessoa = novoIdPessoa;
}

Pessoa::~Pessoa() {

}

void Pessoa::calculaIdade(int diaAT, int mesAT, int anoAT) {
    // ano atual - ano de nascimento da pessoa.
    idadePessoa = anoAT - anoPessoa;

    // se ainda nao fez aniversario no ano atual diminui 1 ano da contagem de idade...
    if(mesPessoa > mesAT) {
        idadePessoa = idadePessoa -1;
    } else {
        // se for o mesmo mes que a data atual...
        if(mesPessoa == mesAT) {
            // se ainda nao estiver no dia do aniversario dimimui 1 ano da contagem de idade...
            if(diaPessoa > diaAT) {
                idadePessoa = idadePessoa - 1;
            }
        }
    }
}

void Pessoa::imprimeIdade() {
    std::cout << getNome() << " " << getIdade() << " anos de idade." << std::endl;
}

void Pessoa::inicializa(int novoDia, int novoMes, int novoAno, const char* novoNomePessoa) {
    Pessoa::diaPessoa = novoDia;
    Pessoa::mesPessoa = novoMes;
    Pessoa::anoPessoa = novoAno;
    strcpy(nomePessoa, novoNomePessoa);
}

int Pessoa::getIdade() const {
    return idadePessoa;
}

char* Pessoa::getNome() {
    return nomePessoa;
}
void Pessoa::setNome(const char* novoNome) {
    strcpy(nomePessoa, novoNome);
}

int Pessoa::getIdPessoa() {
    return idPessoa;
}
void Pessoa::setIdPessoa(int novoIdPessoa) {
    Pessoa::idPessoa = novoIdPessoa;
}







