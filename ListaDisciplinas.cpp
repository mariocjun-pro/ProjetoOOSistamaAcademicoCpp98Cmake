#include "ListaDisciplinas.h"
#include <cstring>
#include <iostream>

ListaDisciplinas::ListaDisciplinas(int novoNumeroDisciplinas, const char *novoNomeDisciplina) {
    numeroDisciplinas = novoNumeroDisciplinas;
    contDisciplinas = 0;

    ponteiroDisciplinaRelPrim = NULL;
    ponteiroDisciplinaRelAtual = NULL;

    strcpy(nomeDisciplina, novoNomeDisciplina);
}

ListaDisciplinas::~ListaDisciplinas() {
    DisciplinaRel* pAux1;
    DisciplinaRel* pAux2;

    pAux1 = ponteiroDisciplinaRelPrim;
    pAux2 = pAux1;

    while (pAux1 != NULL) {
        pAux2 = pAux1->ponteiroProxDisciplina;
        delete pAux1;
        pAux1 = pAux2;
    }

    ponteiroDisciplinaRelPrim = NULL;
    ponteiroDisciplinaRelAtual = NULL;
}

void ListaDisciplinas::setNomeDisciplina(const char *novoNomeDisciplina) { strcpy(nomeDisciplina, novoNomeDisciplina); }

void ListaDisciplinas::incluirDisciplina(Disciplina *novoPonteiroDisciplina) {
    if((contDisciplinas < numeroDisciplinas) && (novoPonteiroDisciplina != NULL)
    || (numeroDisciplinas == -1) && (novoPonteiroDisciplina != NULL)) {
        DisciplinaRel* ponteiroAuxDisciplinaRel;
        ponteiroAuxDisciplinaRel = new DisciplinaRel();
        ponteiroAuxDisciplinaRel->setDisciplina(novoPonteiroDisciplina);

        if(ponteiroDisciplinaRelPrim == NULL) {
            ponteiroDisciplinaRelPrim = ponteiroAuxDisciplinaRel;
            ponteiroDisciplinaRelAtual = ponteiroAuxDisciplinaRel;
        } else {
            ponteiroDisciplinaRelAtual->ponteiroProxDisciplina = ponteiroAuxDisciplinaRel;
            ponteiroAuxDisciplinaRel->ponteiroAnteDisciplina = ponteiroDisciplinaRelAtual;
            ponteiroDisciplinaRelAtual = ponteiroAuxDisciplinaRel;
        }
        contDisciplinas++;
    } else {
        if(novoPonteiroDisciplina != NULL) {
            cout << "Disciplina " << nomeDisciplina << " nao inclusa. Quantidade lotada em " << numeroDisciplinas <<  " Disciplinas" << endl;
        } else {
            cout << "Ponteiro Nulo" << endl;
        }
    }
}

void ListaDisciplinas::listarDisciplinas() {
    DisciplinaRel* pAuxDisciplinaRel;
    pAuxDisciplinaRel = ponteiroDisciplinaRelPrim;

    while (pAuxDisciplinaRel != NULL) {
        cout << "Disciplina " << pAuxDisciplinaRel->getNomeDisciplina() << ", ";
        cout << "pertence ao Departamento " << nomeDisciplina << endl;
        pAuxDisciplinaRel = pAuxDisciplinaRel->ponteiroProxDisciplina;
    }
}

void ListaDisciplinas::listarDisciplinasInverso() {
    DisciplinaRel* pAuxDisciplinaRel;
    pAuxDisciplinaRel = ponteiroDisciplinaRelAtual;

    while (pAuxDisciplinaRel != NULL) {
        cout << "Disciplina " << pAuxDisciplinaRel->getNomeDisciplina() << ", ";
        cout << "pertence ao Departamento " << nomeDisciplina << endl;
        pAuxDisciplinaRel = pAuxDisciplinaRel->ponteiroAnteDisciplina;
    }
}
