#include "dominios.h"

#include <cctype>
#include <iostream>

// IMPLEMENTAÇÃO DA MATRÍCULA
void matricula::set_matricula(int matricula) {
    this->matricula = matricula;
}

int matricula::get_matricula() {
    return matricula;
}

void matricula::validar_matricula(int matricula) {
    string str = to_string(matricula);
    int tamanho = str.length();
    // if (tamanho <= 0)
}

// IMPLEMENTAÇÃO DO TELEFONE
void telefone::set_telefone(int telefone) {
    this->telefone = telefone;
}
int telefone::get_telefone() {
    return telefone;
}
void telefone::validar_telefone(int telefone) {
    string str = to_string(telefone);
    int tamanho = str.length();
    if (tamanho >= 7 && tamanho <= 15) {
        continue;
    } else {
        throw invalid_argument("Telefone inválido");
    }
}

// IMPLEMENTAÇÃO DA SENHA
void senha::set_senha(string senha) {
    this->senha = senha;
}
string senha::get_senha() {
    return senha;
}

// IMPLEMENTAÇÃO DO CÓDIGO
void codigo::validar_codigo(string codigo) {
    int tamanho = codigo.length();
    if (tamanho < 6) {
        throw invalid_argument("Código Inválido");
    }
    for (int i = 0; i < 3; i++) {
        if (!isalpha(codigo[i])) {
            throw invalid_argument("Código Inválido");
        }
    }
    for (int i = 4; i < 6; i++) {
        if (!isdigit(codigo[i])) {
            throw invalid_argument("Código Inválido");
        }
    }
}
void codigo::set_codigo(string codigo) {
    this->codigo = codigo;
}
string codigo::get_codigo() {
    return codigo;
}

// IMPLEMENTAÇÃO DA DATA
void data::set_data(string data) {
    this->data = data;
}

string data::get_data() {
    return data;
}

void data::validar_data();

// IMPLEMENTAÇÃO DO TEXTO
void texto::set_texto(string texto) {
    this->texto = texto;
}
string texto::get_texto() {
    return texto;
}