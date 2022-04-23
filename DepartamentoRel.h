#ifndef PROJETOOOSISTEMAACADEMICOCPP98CMAKE_DEPARTAMENTOREL_H
#define PROJETOOOSISTEMAACADEMICOCPP98CMAKE_DEPARTAMENTOREL_H
#include "Departamento.h"

class DepartamentoRel {
private:
    Departamento* ponteiroDepartamento;
public:
    DepartamentoRel();
    ~DepartamentoRel();

    DepartamentoRel* ponteiroProxDepartamento;
    DepartamentoRel* ponteiroAnteDepartamento;

    void setDepartamento(Departamento* ponteiroDepartamento);
    Departamento* getDepartamento();

    char* getNomeDepartamento();
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98CMAKE_DEPARTAMENTOREL_H
