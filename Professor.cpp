//
// Created by CIANDT\mariocj on 04/04/22.
//
#include "Professor.h"

Professor::Professor(int novoId) { idPessoa = novoId; }

Professor::~Professor() {
    profDepartamento = NULL;
    profDepartamento = NULL;
}

void Professor::setProfUniversidade(Universidade *novaProfUniversidade) {
    profUniversidade = novaProfUniversidade;
}

void Professor::setProfDepartamento(Departamento *novoProfDepartamento) {
    profDepartamento = novoProfDepartamento;
}

void Professor::imprimeLocalTrabalho() {
    std::cout << nomePessoa << ", Trabalha para a " << profUniversidade->getNomeUni() << std::endl;
}

void Professor::imprimeDepartamentoProfessor() {
    std::cout << nomePessoa << ", Trabalha para a " << profUniversidade->getNomeUni();
    std::cout << ", e para o departamento " << profDepartamento->getNomeDepart() << std::endl;
}


