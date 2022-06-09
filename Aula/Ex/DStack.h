//
// Created by delair on 12/04/2022.
//
#ifndef VETORORDENADODINAMICO_DSTACK_H
#define VETORORDENADODINAMICO_DSTACK_H

#define INIT_ARRAY_SIZE 4

enum DException{ARRAY_OVERFLOW,ARRAY_UNDERFLOW,ALOCATION_ERROR};

class DStack {
    int *array;
    int topIndex;
    int arraySize;

    void arrayResize(int);
public:
    DStack();
    ~DStack();

    void push(int);
    void pop();
    int top() const;
};
#endif //VETORORDENADODINAMICO_DSTACK_H
