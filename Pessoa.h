//
// Created by CIANDT\mariocj on 24/03/22.
//

#ifndef EXPESSOA_PESSOA_H
#define EXPESSOA_PESSOA_H

#include "Universidade.h"

class Pessoa {
protected:
    int idadePessoa;
    int diaPessoa;
    int mesPessoa;
    int anoPessoa;
    int idPessoa;
    char nomePessoa[50];
public:
    Pessoa(int idPessoa = -1);
    virtual ~Pessoa();

    void imprimeIdade();
    void calculaIdade(int diaAT, int mesAT, int anoAT); // AT = atual
    void inicializa(int diaNP = 0, int mesNP = 0, int anoNP = 0, const char *nomeNP = "");
    int getIdade() const;
    char* getNome();
    void setNome(const char *nomeNP = "");
    int getIdPessoa();
    void setIdPessoa(int idPessoa);
};

#endif //EXPESSOA_PESSOA_H
