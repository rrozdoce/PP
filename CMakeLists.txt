cmake_minimum_required(VERSION 3.22)
project(PP)

set(CMAKE_CXX_STANDARD 14)

include_directories(Aula/1)
include_directories(Aula/Ex)
include_directories(Aula/Pilha)

add_executable(PP
        Aula/1/DStack.cpp
        Aula/1/DStack.h
        Aula/1/main.cpp
        Aula/construtorDeCopias/Ccopias.cpp
        Aula/Ex/DStack.cpp
        Aula/Ex/DStack.h
        Aula/Ex/main.cpp
        Aula/excecoes/1.cpp
        Aula/excecoes/2.cpp
        Aula/funcoesVirtuais/1.cpp
        Aula/heran�a/1.cpp
        Aula/Pilha/main.cpp
        Aula/Pilha/pilha.cpp
        Aula/Pilha/pilha.h
        Aula/sobrecarga/operador=.cpp
        Aula/templates/classeTemplate_1.cpp
        Aula/templates/Templates.cpp
        Aula/testes/teste_1.cpp
        Aula/testes/teste_2.cpp
        lista1/1.cpp
        lista1/2.cpp
        lista1/2_fab.cpp
        lista1/3.cpp
        lista1/4.cpp
        lista1/5.cpp
        lista1/6.cpp
        lista1/teste.cpp
        lista2/1.cpp)
