#include "DisciplinaRel.h"
#include <cstring>

DisciplinaRel::DisciplinaRel() {
    ponteiroProxDisciplina = NULL;
    ponteiroAnteDisciplina = NULL;
}

DisciplinaRel::~DisciplinaRel() {
    ponteiroProxDisciplina = NULL;
    ponteiroAnteDisciplina = NULL;
}

void DisciplinaRel::setDisciplina(Disciplina* ponteiroNovaDisciplina) {
    ponteiroDisciplina = ponteiroNovaDisciplina;
}

Disciplina* DisciplinaRel::getDisciplina() {
    return ponteiroDisciplina;
}

char* DisciplinaRel::getNomeDisciplina() {
    return ponteiroDisciplina->getNomeDisciplina();
}
