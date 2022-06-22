//
// Created by leo on 19/04/2022.
//

#include <stdexcept>
#include "arranjo.h"

arranjo::arranjo():tam(0) {

}

bool arranjo::busca(int x) const {
    int ini,fim,i;//variaveis
    fim=tam;
    ini=0;
    i=tam/2;//começa buscando no meio
    while (ini<fim) {
        //alteração do intervalo
        if (valores[i] != x) {
            if (x > valores[i]){
                ini=i+1;
            }else{
                fim=i;
            }
            i=(ini+fim)/2;//atualiza o indice de busca
        } else {
            return true;
        }
    }
    return false;//terminou o laço e nao encontrou
}

void arranjo::inserir(int x) {
    if(tam==tamMax){
        throw std::overflow_error("arranjo cheio");//lançamento de excessao ja termina a rotina
    }
    int aux,i;
    int ini,fim;//variaveis
    fim=tam;
    ini=0;
    i=tam/2;//começa buscando no meio
    while (ini<fim) {
        //alteração do intervalo
        if (valores[i] != x) {
            if (x > valores[i]){
                ini=i+1;
            }else{
                fim=i;
            }
            i=(ini+fim)/2;//atualiza o indice de busca
        } else {
            //sair do loop pois encontrou um valor igual ao inserido
            break;
        }
    }

    aux=valores[i];
    valores[i++]=x;//guarda valor passado e incrementa indice
    x=aux;//atualiza proximo valor a ser guardado
    tam++;//registra aumento do arranjo
    //laço que move os outros valores para frente
    while (i<tam){
        aux=valores[i];//salva valor que ira avançar
        valores[i++]=x;//salva valor que estava no anterior
        x=aux;//atualiza valor para guardar na proxima iteração
    }

}

bool arranjo::remover(int x) {
    if(tam==0)throw std::underflow_error(" arranjo vazio ");
    //faz busca do valor
    int aux,i;
    int ini,fim;//variaveis
    fim=tam;
    ini=0;
    i=tam/2;//começa buscando no meio
    while (ini<fim) {
        //alteração do intervalo
        if (valores[i] != x) {
            if (x > valores[i]){
                ini=i+1;
            }else{
                fim=i;
            }
            i=(ini+fim)/2;//atualiza o indice de busca
        } else {
            //sair do loop pois encontrou um valor igual ao inserido
            break;
        }
    }
    if(ini>=fim){
        //valor nao encontrado
        return false;
    }
    //apaga caso encontre
    while (i<tam){
        if(i<tam-1) valores[i] = valores[i + 1];//retrocede os valores na frente do valor que se quer apagar
            i++;//incremento do indice

    }
    --tam;//atualiza o tamanho

    //retorna sucesso da exclusao
    return true;
}

int arranjo::getTam() const {
    return tam;
}

int arranjo::getValor(int indice) const{
    if(indice<tam && indice>=0)return valores[indice];
    throw std::invalid_argument("indice invalido");

}
