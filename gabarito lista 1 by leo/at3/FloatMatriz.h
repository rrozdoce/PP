//
// Created by leo on 19/04/2022.
//

#ifndef AT3_FLOATMATRIZ_H
#define AT3_FLOATMATRIZ_H
#include "stdexcept"

class FloatMatriz {
float matriz[2][2];


public:
    FloatMatriz();
    FloatMatriz(float i11, float i12, float i21, float i22);
    FloatMatriz(FloatMatriz *m);
    float getValor(int linha, int coluna) const;
    void setValor(float valor, int linha, int coluna);
    float determinante() const;
    FloatMatriz multiplicacao(FloatMatriz matriz) const;
    FloatMatriz calcInversa() const;

};


#endif //AT3_FLOATMATRIZ_H
