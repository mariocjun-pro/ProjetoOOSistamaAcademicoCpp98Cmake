#include "AlunoRel.h"

AlunoRel::AlunoRel() { }

void AlunoRel::setAluno (Aluno* ponteiroNovoAluno) {
    ponteiroAlunoRel = ponteiroNovoAluno;
}

AlunoRel::~AlunoRel() {

}

Aluno *AlunoRel::getAluno() {
    return ponteiroAlunoRel;
}

char *AlunoRel::getNomeAluno() {
    return ponteiroAlunoRel->getNome();
}


