#include "Universidade.h"
#include <cstring>

Universidade::Universidade() { ObjetoListaDepartamentos = new ListaDepartamentos(-1); }

Universidade::~Universidade() { if (ObjetoListaDepartamentos) { delete ObjetoListaDepartamentos; } }

char *Universidade::getNomeUni() { return nomeUni; }

void Universidade::setNomeUni(const char *novoNomeUni) { strcpy(nomeUni, novoNomeUni); }

void Universidade::incluirDepartamentos(Departamento *ponteiroNovoDepartamento) { ObjetoListaDepartamentos->incluirDepartamento(ponteiroNovoDepartamento); }

void Universidade::listarDepartamentos() { ObjetoListaDepartamentos->listarDepartamentos(); }

void Universidade::listarDepartamentosInverso() { ObjetoListaDepartamentos->listarDepartamentosInverso(); }


