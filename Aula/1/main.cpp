#include <iostream>
#include "DStack.h"

using namespace std;

int main() {
    DStack stack;
    int i;

    for (i = 0; i < 10; ++i) {
        stack.push(i);
    }

    for (i = 0; i < 10; ++i) {
        cout<<stack.top()<<endl;
        stack.pop();
    }

    return 0;
}

