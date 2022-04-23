#ifndef ALUNOREL_H
#define ALUNOREL_H
#include "Aluno.h"

class AlunoRel
{
private:
    Aluno* ponteiroAlunoRel;
public:
    AlunoRel();
    ~AlunoRel();

   AlunoRel* ponteiroProxAlunoRel;
   AlunoRel* ponteiroAnteAlunoRel;

   void setAluno(Aluno* ponteiroAluno);
   Aluno* getAluno();
   char* getNomeAluno();
};

#endif // ALUNOREL_H
