//Menu ja implementado no codigo principal

#include <iostream>
#include <conio.h>
#include <clocale>

void LimpaTela(){
    system("cls");
}

void PausaTela(){
    system("pause");
}

void SairMenu(){
    LimpaTela();
    std::cout << "Você pediu para sair!!" << std::endl;
    PausaTela();
    exit(0);
}

int MenuDificuldade(){
    int retorno=0;
    int opcao;
    LimpaTela();
    std::cout << "1 - FACIL \n2 - DIFICIL \n3 - IMPOSSIVEL \n4 - RETORNAR AO MENU INICIAL \n5 - SAIR\n";
    opcao = getch();
    switch (opcao)
    {
    case '1':
        LimpaTela();
        retorno= 1;
        break;
    case '2':
        LimpaTela();
        retorno= 2;
        break;
    case '3':
        LimpaTela();
        retorno= 3;
        break;
    case '4':
        LimpaTela();
        retorno= 0;
        break;
    case '5':
        SairMenu();
        break;
    default:
        std::cout << "Você deve escolher uma opcao valida\n";
        std::cout << "Pressione qualquer tecla para voltar ao menu\n\n";
        PausaTela();
        retorno = MenuDificuldade();
    }
    return retorno;
}

int MenuRegras(){
    int retorno=0;
    int opcao;
    LimpaTela();
    std::cout << "REGRAS: " << std::endl;
    std::cout << std::endl << "O objetivo do jogo é completar todos os quadrados utilizando numeros de 1 a 9. " << std::endl;
    std::cout << std::endl << "Para completa-los basta seguir as seguintes regras:" << std::endl;
    std::cout << std::endl << "Não podem haver numeros repetidos nas linhas horizontais" << std::endl;
    std::cout << "Não podem haver numeros repetidos nas linhas verticais" << std::endl;
    std::cout << "Não podem haver numeros repetidos nos quadrados delimitados" << std::endl;
    std::cout << "O numero 0 equivale a um espaço vazio, Você devera preenchelos" << std::endl;
    std::cout << "Escreva a coordenada do espaço vazio e digite o numero desejado" << std::endl;
    std::cout << "ATENÇÃO: NENHUM NUMERO PODERA SER TROCADO, COM GRANDES PODERES VEM GRANDES RESPONSABILIDADES" << std::endl;
    std::cout << "SUDOKU é um jogo de raciocinio e logica." << std::endl;
    std::cout << std::endl << "1 - RETORNAR AO MENU INICIAL \n2 - SAIR\n" << std::endl;

    opcao = getch();

    switch(opcao)
    {
    case '1':
        LimpaTela();
        retorno = 0;
        break;
    case '2':
        SairMenu();
        break;
    default:
        std::cout << "Você deve escolher uma opcao valida\n";
        std::cout << "Pressione qualquer tecla para voltar ao menu\n\n";
        PausaTela();
        retorno = MenuRegras();
    }
    return retorno;
}

int MenuCreditos(){
    int retorno=0;
    int opcao;
    LimpaTela();
    std::cout << "CREDITOS: " << std::endl;
    std::cout << std::endl << "###################################################" << std::endl;
    std::cout << "IFMG- BAMBUI" << std::endl;
    std::cout << "Nome: Daniel Reis Gonçalves Sant'ana" << std::endl;
    std::cout << "Turma: ENGC-2022" << std::endl;
    std::cout << "Titulo: Sudoku Project" << std::endl;
    std::cout << "###################################################" << std::endl;
    std::cout << std::endl << "1 - RETORNAR AO MENU INICIAL \n2 - SAIR\n" << std::endl;
    opcao = getch();
    switch(opcao)
    {
    case '1':
        LimpaTela();
        retorno= 0;
        break;
    case '2':
        SairMenu();
        break;
    default:
        std::cout << "Você deve escolher uma opcao valida\n";
        std::cout << "Pressione qualquer tecla para voltar ao menu\n\n";
        PausaTela();
        MenuCreditos();
    }
    return retorno;
}

int MenuInicial(){
    int opcao;
    int retorno=0;
    LimpaTela();
    std::cout << "1 - JOGAR \n2 - REGRAS \n3 - CRÉDITOS \n4 - SAIR\n";
    opcao = getch();
    switch (opcao)
    {
    case '1':
        retorno = MenuDificuldade();
        break;
    case '2':
        retorno = MenuRegras();
        break;
    case '3':
        retorno = MenuCreditos();
        break;
    case '4':
        SairMenu();
        break;
    default:
        std::cout << "Você deve escolher uma opcao valida\n";
        std::cout << "Pressione qualquer tecla para voltar ao menu\n\n";
        PausaTela();
        MenuInicial();
    }

}


int main(void){
    setlocale(LC_ALL, "Portuguese" );
    system("color 0F");
    int dificuldade=0;

    do{

    dificuldade = MenuInicial();

    }while(dificuldade==0);

    std::cout << dificuldade << std::endl;

}