//
// Created by rgm43566 on 11/04/2022.
//

#ifndef EX1_PARINT_H
#define EX1_PARINT_H

/***
 * classe para representar o par de inteiros
 */
class ParInt {
///atributos
    int first,second;
public:
    //contrutor que inicializa os atributos
    ParInt(int first, int second);
    //getters
    int getFirst() const;

    int getSecond() const;
    //setters
    void setFirst(int first);

    void setSecond(int second);
    ///função para trocar os valores
    void swap();
    ///função que retorna o maior valor
    int greaterValue() const;
};


#endif //EX1_PARINT_H
