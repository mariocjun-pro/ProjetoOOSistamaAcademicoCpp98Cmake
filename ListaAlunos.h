#ifndef PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTAALUNOS_H
#define PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTAALUNOS_H
#include "Aluno.h"
#include "AlunoRel.h"

class ListaAlunos {
private:
    char nomeDisciplina[150];
    int numAlunosDisciplina;
    int contAlunosDisciplina;

    AlunoRel* ponteiroAlunoRelPrim;
    AlunoRel* ponteiroAlunoRelAtual;
public:
    ListaAlunos(int numeroAlunos = 45, const char* nomeDisciplina = "");
    ~ListaAlunos();

    void incluirAluno(Aluno* ponteiroAluno);
    void listarAlunos();
    void listarAlunosV2();
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98CMAKE_LISTAALUNOS_H
