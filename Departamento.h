#ifndef PROJETOOOSISTEMAACADEMICOCPP98_DEPARTAMENTO_H
#define PROJETOOOSISTEMAACADEMICOCPP98_DEPARTAMENTO_H

class Disciplina;
class Universidade;
class ListaDisciplinas;

class Departamento {
private:
    char nomeDepart[30];
    Universidade* ponteiroUniversidade; // Associação Departamento com Universidade
    ListaDisciplinas* ObjetoListaDisciplinas;
public:
    Departamento();
    ~Departamento();
    Departamento* ponteiroProxDepartamento;
    Departamento* ponteiroAnteDepartamento;

    char* getNomeDepart();
    void setNomeDepart(const char* novoNomeDepart = "");

    void setUniDepartamento(Universidade* novaUniDepartamento);
    Universidade* getUniDepartamento();

    void incluirDisciplinas(Disciplina* ponteiroNovaDisciplina);
    void listarDisciplinas();
    void listarDisciplinasInverso();
};

#endif //PROJETOOOSISTEMAACADEMICOCPP98_DEPARTAMENTO_H
