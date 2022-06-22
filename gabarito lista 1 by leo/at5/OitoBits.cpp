//
// Created by rgm43566 on 25/04/2022.
//

#include "OitoBits.h"

OitoBits::OitoBits(char *entrada) {
    for (int i = 0; i <8; ++i) {
        bits=bits<<1;//coloca um 0 a esquerda
        if(entrada[i]=='1'){
            //caso a entrada para esse bit seja 1, é trocado o 0 por 1
            bits+=1;
        }
    }
}

OitoBits::OitoBits(std::string entrada) {
    for (int i = 0; i <8; ++i) {
        bits=bits<<1;//coloca um 0 a esquerda
        if(entrada[i]=='1'){
            //caso a entrada para esse bit seja 1, é trocado o 0 por 1
            bits+=1;
        }
    }
}

bool OitoBits::getBit(int indice)const {
    //considerando que o indice sera valido sempre( de 0 ate 7)
    int val = bits/ pow(2,indice);//pegando do bit selecionado para frente
    return val%2;//retornando apenas o bit selecionado
}

void OitoBits::setBit(int indice, bool novo_valor) {
   unsigned char aux=bits;
   unsigned char retorno=0;
    for (int i = 7; i >= 0; --i) {//começa operação dos bits mais significativos
        retorno=retorno<<1;
        if(indice == i){//altera somente o indice solicitado
            if(novo_valor){
                retorno+=1;
            }
        }else{
            retorno+=aux/128;//pega bit mais significativo e coloca no inicio
        }
        aux=aux<<1;//shift para atualizar bit mais significativo
    }
    bits = retorno;//atualiza os bits apos finalizar a alteração

}

OitoBits::paridade OitoBits::verificaParidade() const {
    int count=0;
    char aux=bits;
    for (int i = 0; i < 8; ++i) {
        if(aux%2==1){//verifica bit menos significativo
            count++;
        }
        aux=aux>>1;//shift a direita
    }
    //caso seja impar o valor o resto é diferente de 0, ou seja verdadeiro
    if(count%2==1){
        return impar;//é retornado impar
    }
    //do contrario se retorna par
    return par;
}
