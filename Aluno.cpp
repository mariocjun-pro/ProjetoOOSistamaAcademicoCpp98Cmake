#include <cstring>
#include "Aluno.h"

Aluno::Aluno(int idPessoa) : Pessoa(idPessoa), RA(0) { }

Aluno::~Aluno() { }

void Aluno::setRA(int novoRA) {
    Aluno::RA = novoRA;
}

int Aluno::getRA() const {
    return Aluno::RA;
}

