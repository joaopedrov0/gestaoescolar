#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Aluno {
private:
    string nome;
    int matricula;

public:
    Aluno(string nome, int matricula) : nome(nome), matricula(matricula) {}

    string adicionarNome() {
        return nome;
    }

    string obterMatricula() {
        return to_string(matricula);
    }

    void exibirDados() {
        cout << "Aluno: " << nome << ", Matrícula: " << matricula << endl;
    }
};

class Disciplina {
private:
    string nome;
    // string professor; // pode ser que o professor mude na turma, então o ideal é cadastrar em Turma

public:
    Disciplina(string nome, string professor) : nome(nome){}//, professor(professor) {}

    string obterNome() {
        return nome;
    }

    // string obterProfessor() {
    //     return professor;
    // }

    void exibirDados() {
        cout << "Disciplina: " << nome;// << ", Professor: " << professor << endl;
    }
};

class Turma {
private:
    Disciplina disciplina;
    vector<Aluno> nomesAlunos;

public:
    Turma(Disciplina disciplina) : disciplina(disciplina) {}

    void adicionarAluno(Aluno aluno) {
        nomesAlunos.insert(aluno)
        nomesAlunos.push_back(aluno);
    }

    void listarAlunos() {
        cout << "Alunos da disciplina " << disciplina.obterNome() << ":\n";
        for (auto& aluno : nomesAlunos) {
            aluno.exibirDados();
        }
    }

    Disciplina obterDisciplina() {
        return disciplina;
    }

    vector<Aluno> obterAlunos() {
        return nomesAlunos;
    }
};

void matricularAluno()
{}

void cadastrarDisciplina()
{}

void cadastrarTurma()
{}

void vincularAlunoDisciplina()
{}

void mostrarAlunos()
{}

void mostrarDisciplinas()
{}

void mostrarTurmas()
{}

int main() {

    int opcao = 0;
    do {
        cout << "... menu ...\n1 - Matricular aluno \n 2 - Cadastrar disciplina \n3 - Cadastrar turma \n4 - Vincular aluno a turma \n 5 - Mostrar alunos\n6 - Mostrar disciplinas\n7 - Mostrar turmas\n 0 - Fechar o programa";
        cin >> opcao;

        if (opcao == 1) matricularAluno(); 
        else if (opcao == 2) cadastrarDisciplina();
        else if (opcao == 3) cadastrarTurma();
        else if (opcao == 4) vincularAlunoDisciplina();
        else if (opcao == 5) mostrarAlunos();
        else if (opcao == 6) mostrarDisciplinas();
        else if (opcao == 7) mostrarTurmas();

    } while (opcao != 0);

    return 0;
}
