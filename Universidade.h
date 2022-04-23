#ifndef PROJETOOOSISTEMAACADEMICOCPP98_UNIVERSIDADE_H
#define PROJETOOOSISTEMAACADEMICOCPP98_UNIVERSIDADE_H

#include "ListaDepartamentos.h"

class DepartamentoRel;
class Departamento;

class Universidade {
private:
    char nomeUni[150];
    ListaDepartamentos* ObjetoListaDepartamentos;
public:
    Universidade();
    ~Universidade();

    char* getNomeUni();
    void setNomeUni(const char* novoNomeUni);

    void incluirDepartamentos(Departamento* ponteiroDepartamento);
    void listarDepartamentos();
    void listarDepartamentosInverso();
};

#endif //PROJETOOOSISTEMAACADEMICOCPP98_UNIVERSIDADE_H
