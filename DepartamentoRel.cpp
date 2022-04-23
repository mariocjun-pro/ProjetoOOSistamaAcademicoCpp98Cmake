#include "DepartamentoRel.h"
#include <cstring>

DepartamentoRel::DepartamentoRel() {
    ponteiroProxDepartamento = NULL;
    ponteiroAnteDepartamento = NULL;
}

DepartamentoRel::~DepartamentoRel() {
    ponteiroProxDepartamento = NULL;
    ponteiroAnteDepartamento = NULL;
}

void DepartamentoRel::setDepartamento(Departamento *ponteiroNovoDepartamentoRel) {
    ponteiroDepartamento = ponteiroNovoDepartamentoRel;
}

Departamento* DepartamentoRel::getDepartamento() {
    return ponteiroDepartamento;
}

char* DepartamentoRel::getNomeDepartamento() {
    return ponteiroDepartamento->getNomeDepart();
}

