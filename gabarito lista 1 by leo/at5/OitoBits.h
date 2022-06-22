//
// Created by rgm43566 on 25/04/2022.
//

#ifndef EX5_OITOBITS_H
#define EX5_OITOBITS_H
#include "string"
#include "math.h"
class OitoBits {
    char bits;

public:
    enum paridade {par,impar};
    ///é dito que a entrada tera que ter 8 valores
    OitoBits(char* entrada);
    OitoBits(std::string entrada);

    bool getBit(int indice) const;
    void setBit(int indice,bool novo_valor);
    paridade verificaParidade() const;
};


#endif //EX5_OITOBITS_H
