#include "ListaDepartamentos.h"
#include <cstring>
#include <iostream>

using namespace std;

ListaDepartamentos::ListaDepartamentos(int novoNumeroDepartamentos, const char *novoNomeDepartamento) {
    numeroDepartamentos = novoNumeroDepartamentos;
    contDepartamentos = 0;

    ponteiroDepartamentoRelPrim = NULL;
    ponteiroDepartamentoRelAtual = NULL;

    strcpy(nomeDepartamento, novoNomeDepartamento);
}

ListaDepartamentos::~ListaDepartamentos() {
    DepartamentoRel* ponteiroDepartamentoAux1;
    DepartamentoRel* ponteiroDepartamentoAux2;

    ponteiroDepartamentoAux1 = ponteiroDepartamentoRelPrim;
    ponteiroDepartamentoAux2 = ponteiroDepartamentoAux1;

    while (ponteiroDepartamentoAux1 != NULL) {
        ponteiroDepartamentoAux2 = ponteiroDepartamentoAux2->ponteiroProxDepartamento;
        delete ponteiroDepartamentoAux1;
        ponteiroDepartamentoAux1 = ponteiroDepartamentoAux2;
    }

    ponteiroDepartamentoRelPrim = NULL;
    ponteiroDepartamentoRelAtual = NULL;
}

void ListaDepartamentos::setNomeDepartamento(const char* novoNomeDepartamento) {
    strcpy(nomeDepartamento, novoNomeDepartamento);
}

void ListaDepartamentos::incluirDepartamento(Departamento* ponteiroNovoDepartamento) {
    if((contDepartamentos < numeroDepartamentos) && (ponteiroNovoDepartamento != NULL)
    || (numeroDepartamentos == -1) && (ponteiroNovoDepartamento != NULL)) {
        DepartamentoRel* ponteiroDepartamentoRelAux;
        ponteiroDepartamentoRelAux = new DepartamentoRel();
        ponteiroDepartamentoRelAux->setDepartamento(ponteiroNovoDepartamento);

        if (ponteiroDepartamentoRelPrim == NULL) {
            ponteiroDepartamentoRelPrim = ponteiroDepartamentoRelAux;
            ponteiroDepartamentoRelAtual = ponteiroDepartamentoRelAux;
        } else {
            ponteiroDepartamentoRelAtual->ponteiroProxDepartamento = ponteiroDepartamentoRelAux;
            ponteiroDepartamentoRelAux->ponteiroAnteDepartamento = ponteiroDepartamentoRelAtual;
            ponteiroDepartamentoRelAtual = ponteiroDepartamentoRelAux;
        }
        contDepartamentos++;
    } else {
        if(ponteiroNovoDepartamento != NULL) {
            cout << "Departamento " << nomeDepartamento << " nao incluso. Quantidade lotada em " << numeroDepartamentos <<  " Departamentos" << endl;
        } else {
            cout << "Ponteiro Nulo" << endl;
        }
    }
}

void ListaDepartamentos::listarDepartamentos() {
    DepartamentoRel* ponteiroDepartamentoAux;
    ponteiroDepartamentoAux = ponteiroDepartamentoRelPrim;

    while (ponteiroDepartamentoAux != NULL) {
        cout << "Departamento " << ponteiroDepartamentoAux->getNomeDepartamento() << ", ";
        cout << "pertence ao Departamento " << nomeDepartamento << endl;
        ponteiroDepartamentoAux = ponteiroDepartamentoAux->ponteiroProxDepartamento;
    }
}

void ListaDepartamentos::listarDepartamentosInverso() {
    DepartamentoRel* ponteiroDepartamentoAux;
    ponteiroDepartamentoAux = ponteiroDepartamentoRelAtual;

    while (ponteiroDepartamentoAux != NULL) {
        cout << "Departamento " << ponteiroDepartamentoAux->getNomeDepartamento() << ", ";
        cout << "pertence ao Departamento " << nomeDepartamento << endl;
        ponteiroDepartamentoAux = ponteiroDepartamentoAux->ponteiroAnteDepartamento;
    }
}
