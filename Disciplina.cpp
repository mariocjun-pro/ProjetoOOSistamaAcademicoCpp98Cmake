#include "Disciplina.h"
#include <cstring>

Disciplina::Disciplina(int novoNumeroAlunosDisciplina, const char* novaAreaDisciplina):
        ObjetoListaAlunos(novoNumeroAlunosDisciplina, novaAreaDisciplina) {
    ponteiroDepartamentoAssociado = NULL;
    ponteiroAnteriorDisciplina = NULL;
    ponteiroProxDisciplina = NULL;
    strcpy(areaDisciplina, novaAreaDisciplina);
}

Disciplina::~Disciplina() {
    ponteiroDepartamentoAssociado = NULL;
    ponteiroProxDisciplina = NULL;
    ponteiroAnteriorDisciplina = NULL;
}

int Disciplina::getIdDisciplina() const { return idDisciplina; }
void Disciplina::setIdDisciplina(int novoIdDisciplina) { idDisciplina = novoIdDisciplina; }

char *Disciplina::getNomeDisciplina() { return nomeDisciplina; }
void Disciplina::setNomeDisciplina(const char *novoNomeDisciplina) { strcpy(nomeDisciplina, novoNomeDisciplina); }

Departamento* Disciplina::getDepartamentoDisciplina() { return ponteiroDepartamentoAssociado; }
void Disciplina::setDepartamento(Departamento* novoDepartamento) { ponteiroDepartamentoAssociado = novoDepartamento; }

void Disciplina::incluirAluno(Aluno *ponteiroAluno) { ObjetoListaAlunos.incluirAluno(ponteiroAluno); }
void Disciplina::listarAlunos() { ObjetoListaAlunos.listarAlunos(); }
void Disciplina::listarAlunosInverso() { ObjetoListaAlunos.listarAlunosV2(); }

