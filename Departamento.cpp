#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include "ListaDisciplinas.h"
#include <cstring>

Departamento::Departamento() { ObjetoListaDisciplinas = new ListaDisciplinas(-1); }

Departamento::~Departamento() { if (ObjetoListaDisciplinas) { delete ObjetoListaDisciplinas; } }

char *Departamento::getNomeDepart() { return nomeDepart; }

void Departamento::setNomeDepart(const char *novoNomeDepart) { strcpy(nomeDepart, novoNomeDepart); ObjetoListaDisciplinas->setNomeDisciplina(novoNomeDepart); }

void Departamento::setUniDepartamento(Universidade* novaUniDepartamento) { ponteiroUniversidade = novaUniDepartamento; }

Universidade* Departamento::getUniDepartamento() { return ponteiroUniversidade; }

void Departamento::incluirDisciplinas(Disciplina *novaDisciplina) { ObjetoListaDisciplinas->incluirDisciplina(novaDisciplina); }

void Departamento::listarDisciplinas() { ObjetoListaDisciplinas->listarDisciplinas(); }

void Departamento::listarDisciplinasInverso() { ObjetoListaDisciplinas->listarDisciplinasInverso(); }



