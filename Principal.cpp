#include <iostream>
#include "Principal.h"

Principal::Principal() {
    diaAtual = 12;
    mesAtual = 4;
    anoAtual = 2022;
    inicializa();
}

void Principal::Execute() {
    calculaIdadeProfessores();
    universidadeProfessores();
    departamentoProfessores();
    listeAlunosDisciplinas();
    listeDisciplinasDepartamentos();

    cout << endl;
    cout << "Teste" << endl;
    cout << "Aluno: " << aluno_fisica_utfpr.getNome() << endl;
    cout << "Dis: " << disciplina_fisica_utfpr.getNomeDisciplina() << endl;
}

void Principal::inicializa() {
    inicializaUniversidades();
    inicializaDepartamentos();
    inicializaDisciplinas();
    inicializaProfessores();
    inicializaAlunos();
}

void Principal::inicializaUniversidades() {
    //Registros dos nomes das Universidades
    utfpr.setNomeUni("[UNIVERSIDADE] UTFPR");
}

void Principal::inicializaDepartamentos() {
    //Registros dos nomes dos Departamentos
    departamento_informatica_utfpr.setNomeDepart("[DEPARTAMENTO] INFORMATICA UTFPR");
    departamento_matematica_utfpr.setNomeDepart("[DEPARTAMENTO] MATEMATICA UTFPR");
    departamento_fisica_utfpr.setNomeDepart("[DEPARTAMENTO] FISICA UTFPR");
}

void Principal::inicializaProfessores() {
    //Inicializacao dos objetos da classe Professor
    professor_fisica_utfpr.inicializa(2,2,1991, "[PROFESSOR] FISICA UTFPR");
    professor_matematica_utfpr.inicializa(4,4,1994, "[PROFESSOR] MATEMATICA UTFPR");
    professor_informatica_utfpr.inicializa(7,7,1997, "[PROFESSOR] INFORMATICA UTFPR");
    //Filiacao a Universidade
    professor_fisica_utfpr.setProfUniversidade(&utfpr);
    professor_informatica_utfpr.setProfUniversidade(&utfpr);
    professor_matematica_utfpr.setProfUniversidade(&utfpr);
    //Filiacao ao Departamento
    professor_fisica_utfpr.setProfDepartamento(&departamento_fisica_utfpr);
    professor_informatica_utfpr.setProfDepartamento(&departamento_informatica_utfpr);
    professor_matematica_utfpr.setProfDepartamento(&departamento_matematica_utfpr);
}

void Principal::inicializaDisciplinas() {
    disciplina_informatica_utfpr.setNomeDisciplina("[DISCIPLINA] INFORMATICA UTFPR");
    disciplina_matematica_utfpr.setNomeDisciplina("[DISCIPLINA] MATEMATICA UTFPR");
    disciplina_fisica_utfpr.setNomeDisciplina("[DISCIPLINA] FISICA UTFPR");

    disciplina_informatica_utfpr.setDepartamento(&departamento_informatica_utfpr);
    disciplina_matematica_utfpr.setDepartamento(&departamento_matematica_utfpr);
    disciplina_fisica_utfpr.setDepartamento(&departamento_fisica_utfpr); //utfpr

    disciplina_informatica_utfpr.incluirAluno(&aluno_informatica_utfpr);
    disciplina_matematica_utfpr.incluirAluno(&aluno_matematica_utfpr);
    disciplina_fisica_utfpr.incluirAluno(&aluno_fisica_utfpr);
}

void Principal::inicializaAlunos() {
    aluno_informatica_utfpr.inicializa(1,1,2012,"[ALUNO] INFORMATICA UTFPR");
    aluno_matematica_utfpr.inicializa(1,1,2012,"[ALUNO] MATEMATICA UTFPR");
    aluno_fisica_utfpr.inicializa(1,1,2012,"[ALUNO] FISICA UTFPR");
}

void Principal::calculaIdadeProfessores() {
    professor_informatica_utfpr.calculaIdade(diaAtual, mesAtual, anoAtual);
    professor_matematica_utfpr.calculaIdade(diaAtual, mesAtual, anoAtual);
    professor_fisica_utfpr.calculaIdade(diaAtual, mesAtual, anoAtual);

    professor_informatica_utfpr.imprimeIdade();
    professor_matematica_utfpr.imprimeIdade();
    professor_fisica_utfpr.imprimeIdade();
}

void Principal::universidadeProfessores() {
    professor_informatica_utfpr.imprimeLocalTrabalho();
    professor_matematica_utfpr.imprimeLocalTrabalho();
    professor_fisica_utfpr.imprimeLocalTrabalho();
}

void Principal::departamentoProfessores() {
    professor_informatica_utfpr.imprimeDepartamentoProfessor();
    professor_matematica_utfpr.imprimeDepartamentoProfessor();
    professor_fisica_utfpr.imprimeDepartamentoProfessor();
}

void Principal::listeDisciplinasDepartamentos() {
    departamento_informatica_utfpr.listarDisciplinas();
    departamento_matematica_utfpr.listarDisciplinas();
    departamento_fisica_utfpr.listarDisciplinas();
}

void Principal::listeAlunosDisciplinas() {
    disciplina_informatica_utfpr.listarAlunos();
    disciplina_matematica_utfpr.listarAlunos();
    disciplina_fisica_utfpr.listarAlunos();
    cout << "\nListar Disciplinas dos Alunos Inverso...\n\n";
    disciplina_informatica_utfpr.listarAlunosInverso();
    disciplina_matematica_utfpr.listarAlunosInverso();
    disciplina_fisica_utfpr.listarAlunosInverso();
}

