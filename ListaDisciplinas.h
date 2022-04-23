#ifndef PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTADISCIPLINAS_H
#define PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTADISCIPLINAS_H
#include "DisciplinaRel.h"
#include "Disciplina.h"

class ListaDisciplinas {
private:
    int contDisciplinas;
    int numeroDisciplinas;
    char nomeDisciplina[150];

    DisciplinaRel* ponteiroDisciplinaRelPrim;
    DisciplinaRel* ponteiroDisciplinaRelAtual;
public:
    ListaDisciplinas(int numeroDisciplinas = 10, const char* nomeDisciplina = "");
    ~ListaDisciplinas();

    void setNomeDisciplina(const char* nomeDisciplina);

    void incluirDisciplina(Disciplina* ponteiroDisciplina);
    void listarDisciplinas();
    void listarDisciplinasInverso();
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTADISCIPLINAS_H

