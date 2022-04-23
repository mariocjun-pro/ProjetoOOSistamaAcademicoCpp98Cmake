#ifndef PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTADEPARTAMENTOS_H
#define PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTADEPARTAMENTOS_H
#include "DepartamentoRel.h"
#include "Departamento.h"

class ListaDepartamentos {
private:
    int contDepartamentos;
    int numeroDepartamentos;
    char nomeDepartamento[150];

    DepartamentoRel* ponteiroDepartamentoRelPrim;
    DepartamentoRel* ponteiroDepartamentoRelAtual;
public:
    ListaDepartamentos(int numeroDepartamento = 10, const char* nomeDepartamento = "");
    ~ListaDepartamentos();

    void setNomeDepartamento(const char* nomeDepartamento);
    void incluirDepartamento(Departamento* ponteiroDepartamento);

    void listarDepartamentos();
    void listarDepartamentosInverso();
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTADEPARTAMENTOS_H
