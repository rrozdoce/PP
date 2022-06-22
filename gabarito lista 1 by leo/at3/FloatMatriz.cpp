//
// Created by leo on 19/04/2022.
//

#include "FloatMatriz.h"

FloatMatriz::FloatMatriz() {
    for(int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            this->matriz[i][j] = 0;//iniciando matriz com 0
        }
    }
}

FloatMatriz::FloatMatriz(FloatMatriz *m) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            this->matriz[i][j] = m->getValor(i,j);//inicia matriz baseado em outra matriz
        }
    }
}

FloatMatriz::FloatMatriz(float i11, float i12, float i21, float i22) {
    this->matriz[0][0]=i11;
    this->matriz[0][1]=i12;
    this->matriz[1][0]=i21;
    this->matriz[1][1]=i22;
}

float FloatMatriz::getValor(int linha, int coluna) const{
    return this->matriz[linha][coluna];
}

void FloatMatriz::setValor(float valor, int linha, int coluna) {
   matriz[linha][coluna] = valor;//atribui valor na posição escolhida
}

float FloatMatriz::determinante() const{
    float retorno;
    //calculo do determinante
    retorno = this->matriz[0][0]*this->matriz[1][1];//multiplica a diagonal principal
    retorno-= this->matriz[0][1]*this->matriz[1][0];//subtrai pela multiplicação da outra diagonal
    return retorno;
}

FloatMatriz FloatMatriz::multiplicacao(FloatMatriz matriz) const{
    FloatMatriz retorno;
    int aux;
    //laço da multiplicação
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            //parte que faz o calculo do elemento da matriz resultante da multiplicação
            aux = this->matriz[i][0]*matriz.getValor(0,j);
            aux+= this->matriz[i][1]*matriz.getValor(1,j);
            retorno.setValor(aux,i,j);
        }
    }
    return retorno;//retorna a matriz resultante da multiplicação
}

FloatMatriz FloatMatriz::calcInversa() const {
//irei usar a formula (1/determinante)* adjunta da matriz
    if(this->determinante()==0) throw std::logic_error("nao tem inversa");// caso determinante seja 0, matriz nao tem inversa
    FloatMatriz matrizInversa;
    //calculo adjunta
    float adjunta[2][2];
    adjunta[0][0] = matriz[1][1];
    adjunta[0][1] = matriz[0][1]*-1;
    adjunta[1][0] = matriz[1][0]*-1;
    adjunta[1][1] = matriz[0][0];

    float determinante = this->determinante();
    float aux =1;
    aux= aux/determinante;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrizInversa.setValor(adjunta[i][j]*aux,i,j);
        }
    }
    return FloatMatriz(&matrizInversa);
}
