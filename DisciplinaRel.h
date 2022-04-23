#ifndef PROJETOOOSISTEMAACADEMICOCPP98CMAKE_DISCIPLINAREL_H
#define PROJETOOOSISTEMAACADEMICOCPP98CMAKE_DISCIPLINAREL_H
#include "Disciplina.h"

class DisciplinaRel {
private:
    Disciplina* ponteiroDisciplina;
public:
    DisciplinaRel();
    ~DisciplinaRel();

    DisciplinaRel* ponteiroProxDisciplina;
    DisciplinaRel* ponteiroAnteDisciplina;

    void setDisciplina(Disciplina* ponteiroDisciplina);
    Disciplina* getDisciplina();

    char* getNomeDisciplina();
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98CMAKE_DISCIPLINAREL_H
