#ifndef PROJETOOOSISTEMAACADEMICOCPP98_DISCIPLINA_H
#define PROJETOOOSISTEMAACADEMICOCPP98_DISCIPLINA_H
#include "Departamento.h"
#include "ListaAlunos.h"

class Disciplina {
private:
    int idDisciplina;
    char nomeDisciplina[50];
    char areaDisciplina[150];
    Departamento* ponteiroDepartamentoAssociado;
    ListaAlunos ObjetoListaAlunos;
public:
    Disciplina(int numeroAlunosDisciplina = 45, const char* areaDisciplina = "");
    ~Disciplina();
    Disciplina* ponteiroProxDisciplina; // Ponteiro lista encadeada
    Disciplina* ponteiroAnteriorDisciplina;

    void setIdDisciplina(int novoIdDisciplina);
    int getIdDisciplina() const;

    void setNomeDisciplina(const char* novoNomeDisciplina);
    char* getNomeDisciplina();

    void setDepartamento(Departamento* novoDepartamento);
    Departamento* getDepartamentoDisciplina();

    void incluirAluno(Aluno* ponteiroAluno);
    void listarAlunos();
    void listarAlunosInverso();
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98_DISCIPLINA_H
