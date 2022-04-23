#ifndef PROJETOOOSISTEMAACADEMICOCPP98_PRINCIPAL_H
#define PROJETOOOSISTEMAACADEMICOCPP98_PRINCIPAL_H

#include "Professor.h"
#include "Universidade.h"
#include "../ProjetoOOSistemaAcademicoCpp98Cmake/Aluno.h"
#include "../ProjetoOOSistemaAcademicoCpp98Cmake/Disciplina.h"
#include "../ProjetoOOSistemaAcademicoCpp98Cmake/Departamento.h"


class Principal {
private:
    //Universidades
    Universidade utfpr;
    Universidade ufpr;
    Universidade usp;

    //Departamentos
    Departamento departamento_informatica_utfpr;
    Departamento departamento_matematica_utfpr;
    Departamento departamento_fisica_utfpr; //utfpr

    //Professores
    Professor professor_informatica_utfpr;
    Professor professor_matematica_utfpr;
    Professor professor_fisica_utfpr; //utfpr

    //Alunos
    Aluno aluno_informatica_utfpr;
    Aluno aluno_matematica_utfpr;
    Aluno aluno_fisica_utfpr; //utfpr

    //Disciplinas
    Disciplina disciplina_informatica_utfpr;
    Disciplina disciplina_matematica_utfpr;
    Disciplina disciplina_fisica_utfpr; //utfpr

    int diaAtual;
    int mesAtual;
    int anoAtual;
public:
    Principal();
    //Inicializacoes
    void inicializa();
    void inicializaUniversidades();
    void inicializaDepartamentos();
    void inicializaProfessores();
    void inicializaDisciplinas();
    void inicializaAlunos();

    void Execute();

    void calculaIdadeProfessores();
    void universidadeProfessores();
    void departamentoProfessores();
    void listeDisciplinasDepartamentos();
    void listeAlunosDisciplinas();
};

#endif //PROJETOOOSISTEMAACADEMICOCPP98_PRINCIPAL_H
