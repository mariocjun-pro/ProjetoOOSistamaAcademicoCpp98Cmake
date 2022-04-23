//
// Created by CIANDT\mariocj on 11/04/22.
//

#include <time.h>
#include <iostream>
#include "DataAtual.h"

void DataAtual::imprimeDataAtual() {
    time_t data_hora_segundos; // guarda os segundos deste 01/01/1970
    struct tm *timeinfo; // declara uma estrutura tm
    time(&data_hora_segundos); // preenche a variável data_hora_segundos
    // preenche a estrutura timeinfo
    timeinfo = localtime(&data_hora_segundos);

    // obtém e exibe a data atual no formato DD/MM/YYYY
    char data_atual[80];
    strftime(data_atual, 80, "A data de hoje é: %d/%m/%Y", timeinfo);

    // mostra o resultado
    std::cout << data_atual << std::endl;
}
