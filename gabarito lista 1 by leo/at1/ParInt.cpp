//
// Created by rgm43566 on 11/04/2022.
//

#include "ParInt.h"

ParInt::ParInt(int first, int second) : first(first), second(second) {}

void ParInt::setFirst(int first) {
    ParInt::first = first;
}

void ParInt::setSecond(int second) {
    ParInt::second = second;
}

int ParInt::getFirst() const {
    return first;
}

int ParInt::getSecond() const {
    return second;
}

void ParInt::swap() {
    int aux;//variavel auxiliar para efetuar a troca

    //parte onde é feita a troca
    aux = this->first;
    this->first = this->second;
    this->second = aux;
}

int ParInt::greaterValue()const {
    //faz uso de comparação para retornar o maior valor
    if(this->first>this->second) return this->first;
    /*como são apenas dois valores, se o primeiro nao é maior entao o segundo é >= ao first
    logo, se retorna o second por ser um retorno valido para o problema
    */
    else return this->second;

}
