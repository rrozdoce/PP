//
// Created by delair on 12/04/2022.
//

#include "DStack.h"
#include <cstring>

void DStack::arrayResize(int vSize) {
    int *pAux;

    pAux = new int[vSize];
    if(pAux == nullptr)
        throw ALOCATION_ERROR;

    memcpy(pAux,array,sizeof(int)*topIndex);

    delete [] array;
    array = pAux;

    arraySize = vSize;
}

DStack::DStack():
    topIndex(0),
    arraySize(INIT_ARRAY_SIZE),
    array(new int[INIT_ARRAY_SIZE])
{}

DStack::~DStack() {
    delete [] array;
}

void DStack::push(int element) {
    if(topIndex>=arraySize)
        arrayResize(arraySize*2);
    array[topIndex] = element;
    ++topIndex;
}
void DStack::pop() {
    if(topIndex == 0)
        throw (DException) ARRAY_UNDERFLOW;

    if(topIndex-1 <= arraySize/2)
        arrayResize(arraySize/2);
    --topIndex;
}

int DStack::top() const{
    if(topIndex == 0)
        throw (DException) ARRAY_UNDERFLOW;
    return array[topIndex-1];
}
