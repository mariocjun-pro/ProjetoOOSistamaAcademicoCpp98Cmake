//
// Created by CIANDT\mariocj on 04/04/22.
//

#ifndef PROJETOOOSISTEMAACADEMICOCPP98_PROFESSOR_H
#define PROJETOOOSISTEMAACADEMICOCPP98_PROFESSOR_H

#include <cstring>
#include <iostream>
#include "../ProjetoOOSistemaAcademicoCpp98Cmake/Pessoa.h"
#include "Universidade.h"
#include "../ProjetoOOSistemaAcademicoCpp98Cmake/Departamento.h"

class Professor: public Pessoa {
private:
    Universidade *profUniversidade;
    Departamento *profDepartamento;
public:
    Professor(int id = -1);
    ~Professor();

    void setProfUniversidade(Universidade *novaProfUniversidade);
    void setProfDepartamento(Departamento *novoProfDepartamento);

    void imprimeLocalTrabalho();
    void imprimeDepartamentoProfessor();
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98_PROFESSOR_H
