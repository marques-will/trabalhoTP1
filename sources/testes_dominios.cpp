#include "../headers/testes_dominios.h"

using namespace std;

//---------------------------------------------------------------------
void TUDominios::showResult(int result, string nome_dominio) {
    string resultado[] = {"\033[32mSUCESSO\033[0m", "\033[31mFALHA\033[0m"};
    cout << setw(16) << left << setfill('.') << nome_dominio << resultado[result] << endl;
}

int TUDominios::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//---------------------------------------------------------------------
// IMPLEMENTAÇÃO DO TESTE DA MATRÍCULA - 221006351

const string TUMatricula::VALOR_VALIDO = "1234567";
const string TUMatricula::VALOR_INVALIDO = "1234568";

void TUMatricula::setUp() {
    matricula = new Matricula();
    estado = SUCESSO;
}

void TUMatricula::tearDown() {
    delete matricula;
}

void TUMatricula::testarCenarioSucesso() {
    try {
        matricula->setValor(VALOR_VALIDO);
        if (matricula->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha() {
    try {
        matricula->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (matricula->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//---------------------------------------------------------------------
// IMPLEMENTAÇÃO DO TESTE DO CÓDIGO - 221006351

const string TUCodigo::VALOR_VALIDO = "ABC123";
const string TUCodigo::VALOR_INVALIDO = "123ABC";

void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}
void TUCodigo::tearDown() {
    delete codigo;
}

void TUCodigo::testarCenarioSucesso() {
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha() {
    try {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//---------------------------------------------------------------------
// IMPLEMENTAÇÃO DO TESTE DO TELEFONE - 221020940

const string TUTelefone::VALOR_VALIDO = "+1234567";
const string TUTelefone::VALOR_INVALIDO = "1234567";

void TUTelefone::setUp() {
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown() {
    delete telefone;
}

void TUTelefone::testarCenarioSucesso() {
    try {
        telefone->setValor(VALOR_VALIDO);
        if (telefone->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha() {
    try {
        telefone->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (telefone->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//---------------------------------------------------------------------
// IMPLEMENTAÇÃO DO TESTE DO DATA - 221020940

const string TUData::VALOR_VALIDO = "29/FEV/2020";
const string TUData::VALOR_INVALIDO = "29/FEV/2021";

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioSucesso() {
    try {
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha() {
    try {
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (data->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//---------------------------------------------------------------------
// IMPLEMENTAÇÃO DO TESTE DA SENHA - 221020940

const string TUSenha::VALOR_VALIDO = "w1Ly4n";
const string TUSenha::VALOR_INVALIDO = "minhasenha123";

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

void TUSenha::testarCenarioSucesso() {
    try {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha() {
    try {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

//---------------------------------------------------------------------
// IMPLEMENTAÇÃO DO TESTE DA TEXTO - 221020940

const string TUTexto::VALOR_VALIDO = "o joao eh aaa";
const string TUTexto::VALOR_INVALIDO = "abc123";

void TUTexto::setUp() {
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown() {
    delete texto;
}

void TUTexto::testarCenarioSucesso() {
    try {
        texto->setValor(VALOR_VALIDO);
        if (texto->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha() {
    try {
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (texto->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}