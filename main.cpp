#include <iostream>
#include <vector>
#include <string>

using namespace std;



// class Escola {
// private:
//     string nome;
//     vector<Aluno*> alunosMatriculados;
//     vector<Disciplina*> disciplinasDisponiveis;
//     vector<Turma*> turmas;
// public:
//     void alterarNome(string nome){}
//     void matricularAluno(Aluno* aluno){}
//     void cadastrarDisciplina(Disciplina* disciplina){}
//     void criarTurma(Turma* turma){}
    
//     string obterNome(){}
//     vector<Aluno*>(){}
// };

class Aluno {
private:
    string nome;
    int matricula;

public:


    // Aluno(string nome, int matricula) : nome(nome), matricula(matricula) {}

    void alterarNome(string nome) {
        this->nome = nome;
    }

    void alterarMatricula(int matricula) {
        this->matricula = matricula;
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
    // Disciplina(string nome, string professor) : nome(nome){}//, professor(professor) {}

    string obterNome() {
        return nome;
    }
    
    void alterarNome(string nome) {
        this->nome = nome;
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
    Disciplina* disciplina;
    vector<Aluno*> nomesAlunos;

public:
    // Turma(Disciplina disciplina) : disciplina(disciplina) {}

    void adicionarAluno(Aluno* aluno) {
        nomesAlunos.push_back(aluno);
    }

    void listarAlunos() {
        cout << "Alunos da disciplina " << disciplina->obterNome() << ":\n";
        for (Aluno* aluno : nomesAlunos) {
            aluno->exibirDados();
        }
    }
    
    void alterarDisciplina(Disciplina* disciplina){
        this->disciplina = disciplina;
    }

    Disciplina* obterDisciplina() {
        return disciplina;
    }

    vector<Aluno*> obterAlunos() {
        return nomesAlunos;
    }
};

Turma* turma = new Turma;
Disciplina* matematica = new Disciplina;

void matricularAluno()
{
    string nome;
    int matricula;
    cout << "Digite o nome do aluno: \n";
    cin >> nome;
    cout << "Digite o número de matrícula do aluno: \n";
    cin >> matricula;
    Aluno* aluno = new Aluno;
    aluno->alterarNome(nome);
    aluno->alterarMatricula(matricula);
    turma->adicionarAluno(aluno);
}

void cadastrarDisciplina()
{}

void cadastrarTurma()
{}

void vincularAlunoDisciplina()
{}

void mostrarAlunos()
{
    turma->listarAlunos();
}

void mostrarDisciplinas()
{}

void mostrarTurmas()
{}

int main() {
    
    // nao posso colocar isso fora da main, pq nao se eu posso instanciar os objetos??
    matematica->alterarNome("Matemática");
    turma->alterarDisciplina(matematica);
    // -------------------------------------------------------------------------------
    
    int opcao = 0;
    do {
        cout << "... menu ...\n1 - Matricular aluno \n2 - Cadastrar disciplina \n3 - Cadastrar turma \n4 - Vincular aluno a turma \n5 - Mostrar alunos\n6 - Mostrar disciplinas\n7 - Mostrar turmas\n0 - Fechar o programa\nDigite o código da ação: ";
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
