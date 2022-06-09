#include <iostream>

using namespace std;

// lista 1 exercicio 1

class sla {
   public: 
    sla(int a, int b): first(a), second(b)
    {}
    void getsla();
    void swap();
    void maiorsla();
   private:
    int first, second , maior;
};

// a
void sla::swap(){
    int aux;
    aux = this->first;
    this->first = this->second;
    this->second = aux;
}

void sla::getsla() {
    cout << "First: " << first << "\n" << "Second: " << second << endl;
}
// b
void sla::maiorsla() {
    first > second ? maior = first : maior = second;
    cout << "Maior: " << maior << endl;
}

int main() {
    sla opa(2, 3);
    opa.swap();
    opa.getsla();
    opa.maiorsla();
    return 0;
};