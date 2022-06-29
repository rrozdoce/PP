//
// Created by XSpat on 6/28/2022.
//

#ifndef PP_4_H
#define PP_4_H

template<class T>
class lista
{
public:
    lista(int);
    ~lista();
    bool inserir(T, int);
    T &operator[](int);
    int tamanho();
private:
    int tam = 9;
    T *list, *pos_list;
};

#endif //PP_4_H
