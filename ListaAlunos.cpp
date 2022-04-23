#include <cstring>
#include <iostream>
#include "ListaAlunos.h"
ListaAlunos::ListaAlunos(int numeroAlunos, const char* novoNomeDisciplina) {
    contAlunosDisciplina = 0;
    numAlunosDisciplina = numeroAlunos;

    ponteiroAlunoRelAtual = NULL;
    ponteiroAlunoRelPrim = NULL;

    strcpy(nomeDisciplina, novoNomeDisciplina);
}

ListaAlunos::~ListaAlunos() {
    AlunoRel* ponteiroAux1;
    AlunoRel* ponteiroAux2;

    ponteiroAux1 = ponteiroAlunoRelPrim;
    ponteiroAux2 = ponteiroAux1;

    while (ponteiroAux1 != NULL) {
        ponteiroAux2 = ponteiroAux1->ponteiroProxAlunoRel;
        delete(ponteiroAux1);
        ponteiroAux1 = ponteiroAux2;
    }

    ponteiroAlunoRelPrim = NULL;
    ponteiroAlunoRelAtual = NULL;
}

void ListaAlunos::incluirAluno(Aluno *ponteiroNovoAluno) {
    if((contAlunosDisciplina < numAlunosDisciplina) && ponteiroNovoAluno != NULL) {
        AlunoRel* ponteiroAuxAlunoRel = NULL;
        ponteiroAuxAlunoRel = new AlunoRel();
        ponteiroAuxAlunoRel->setAluno(ponteiroNovoAluno);

        if(ponteiroAlunoRelPrim == NULL) {
            ponteiroAlunoRelPrim = ponteiroAuxAlunoRel;
            ponteiroAlunoRelAtual = ponteiroAuxAlunoRel;
        } else {
            ponteiroAlunoRelAtual->ponteiroProxAlunoRel = ponteiroAuxAlunoRel;
            ponteiroAuxAlunoRel->ponteiroAnteAlunoRel = ponteiroAlunoRelAtual;
            ponteiroAlunoRelAtual = ponteiroAuxAlunoRel;
        }
        contAlunosDisciplina++;
    } else {
        if(ponteiroNovoAluno != NULL) {
            cout << "Aluno nao incluido. Turma lotada em " << numAlunosDisciplina <<  " alunos" << endl;
        } else {
            cout << "Ponteiro Nulo" << endl;
        }
    }
}

void ListaAlunos::listarAlunos() {
    AlunoRel* ponteiroAlunoRelAux = NULL;
    ponteiroAlunoRelAux = ponteiroAlunoRelPrim;

    while (ponteiroAlunoRelAux != NULL) {
        cout << "Aluno " << ponteiroAlunoRelAux->getNomeAluno() << ", ";
        cout << "matriculado em " << nomeDisciplina << endl;
        ponteiroAlunoRelAux = ponteiroAlunoRelAux->ponteiroProxAlunoRel;
    }
}

void ListaAlunos::listarAlunosV2() {
    AlunoRel* ponteiroAlunoRelAux = NULL;
    ponteiroAlunoRelAux = ponteiroAlunoRelAtual;

    while (ponteiroAlunoRelAux != NULL) {
        cout << "Aluno " << ponteiroAlunoRelAux->getNomeAluno() << ", ";
        cout << "matriculado em " << nomeDisciplina << endl;
        ponteiroAlunoRelAux = ponteiroAlunoRelAux->ponteiroAnteAlunoRel;
    }
}


