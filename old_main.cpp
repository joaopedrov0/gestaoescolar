#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Aluno {
public:
    string nome;
    int id;
    Aluno(string nome, int id) : nome(nome), id(id) {}
};

class Disciplina {
public:
    string nome;
    int id;
    Disciplina(string nome, int id) : nome(nome), id(id) {}
};

class Turma {
public:
    Disciplina disciplina;
    vector<Aluno> alunos;

    Turma(Disciplina d) : disciplina(d) {}

    void adicionarAluno(Aluno a) {
        alunos.push_back(a);
    }

    void mostrarAlunos() {
        cout << "Alunos da disciplina " << disciplina.nome << ":\n";
        for (auto& a : alunos) {
            cout << "- " << a.nome << " (ID: " << a.id << ")\n";
        }
    }
    
    Disciplina obterDisciplina() {}

    vector<Alunos> obterAlunos() {}
};

int main(){

    while True

    return 0;
}

