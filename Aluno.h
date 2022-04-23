#ifndef PROJETOOOSISTEMAACADEMICOCPP98_ALUNO_H
#define PROJETOOOSISTEMAACADEMICOCPP98_ALUNO_H
#include "Pessoa.h"

class Departamento;

using namespace std;

class Aluno : public Pessoa {
private:
    int RA;
public:
    Aluno(int idPessoa = -1);
    ~Aluno();

    void setRA(int RA);
    int getRA() const;

    Aluno *ponteiroProximoAluno;
    Aluno *ponteiroAnteriorAluno;
};


#endif //PROJETOOOSISTEMAACADEMICOCPP98_ALUNO_H
