//Menu antigo ja substituído no código principal

#include <iostream>
#include <conio.h>
#include <clocale>

int menu()
{
    int opcao;

inicio:
    system("cls");
    system("color 0F");
    std::cout << "1 - JOGAR \n2 - REGRAS \n3 - CREDITOS \n4 - SAIR\n";
    opcao = getch();
    switch (opcao)
    {
    case '1':
dificuldade:
        system("cls");
        std::cout << "1 - FACIL \n2 - DIFICIL \n3 - IMPOSSIVEL \n4 - RETORNAR AO MENU INICIAL \n5 - SAIR\n";
        opcao = getch();
        switch(opcao)
        {
        case '1':
            system("cls");
            return 1;
            break;
        case '2':
            system("cls");
            return 2;
            break;
        case '3':
            system("cls");
            return 3;
            break;
        case '4':
            system("cls");
            goto inicio;
            break;
        case '5':
            std::cout << "Vocï¿½ pediu para sair, precione qualquer tecla para continuar" << std::endl;
            system("pause");
            exit(0);
        default:
            std::cout << "voce deve escolher uma opcao valida\n";
            std::cout << "Precione qualquer tecla para voltar ao menu\n\n";
            system("pause");
            goto dificuldade;
        }
        break;
    case '2':
regras:
        system("cls");
        std::cout << "REGRAS: " << std::endl;
        std::cout << std::endl << "O objetivo do jogo ï¿½ completar todos os quadrados utilizando nï¿½meros de 1 a 9. " << std::endl;
        std::cout << std::endl << "Para completï¿½-los basta seguir as seguintes regras:" << std::endl;
        std::cout << std::endl << "Nï¿½o podem haver nï¿½meros repetidos nas linhas horizontais" << std::endl;
        std::cout << "Nï¿½o podem haver nï¿½meros repetidos nas linhas verticais" << std::endl;
        std::cout << "Nï¿½o podem haver nï¿½meros repetidos nos quadrados delimitados" << std::endl;
        std::cout << "O numero 0 equivale a um espaï¿½o vazio, voce devera preenchelos" << std::endl;
        std::cout << "Escreva a coordenada do espaï¿½o vazio e digite o numero desejado" << std::endl;
        std::cout << "ATENï¿½ï¿½O: NENHUM NUMERO PODERA SER TROCADO, COM GRANDES PODERES VEM GRANDES RESPONSABILIDADES" << std::endl;
        std::cout << "SUDOKU ï¿½ um jogo de raciocï¿½nio e lï¿½gica." << std::endl;
        std::cout << std::endl << "1 - RETORNAR AO MENU INICIAL \n2 - SAIR\n" << std::endl;
        opcao = getch();
        switch(opcao)
        {
        case '1':
            system("cls");
            goto inicio;
            break;
        case '2':
            system("cls");
            std::cout << "voce pediu para sair, prencione qualquer tecla para continuar\n";
            system("pause");
            exit(0);
        default:
            std::cout << "voce deve escolher uma opcao valida\n";
            std::cout << "Precione qualquer tecla para voltar ao menu\n\n";
            system("pause");
            goto regras;

        }
        return 0;
        break;
    case '3':
creditos:
        system("cls");
        std::cout << "CREDITOS: " << std::endl;
        std::cout << std::endl << "###################################################" << std::endl;
        std::cout << "IFMG- BAMBUI" << std::endl;
        std::cout << "Nome: Daniel Reis Goncalves Sant'ana" << std::endl;
        std::cout << "Data: 24/08/2022" << std::endl;
        std::cout << "Turma: ENGC-2022" << std::endl;
        std::cout << "Titulo: Trabalho Final AED1 - Sudoku" << std::endl;
        std::cout << "###################################################" << std::endl;
        std::cout << std::endl << "1 - RETORNAR AO MENU INICIAL \n2 - SAIR\n" << std::endl;
        opcao = getch();
        switch(opcao)
        {
        case '1':
            system("cls");
            goto inicio;
            break;
        case '2':
            system("cls");
            std::cout << "voce pediu para sair, prencione qualquer tecla para continuar\n";
            system("pause");
            exit(0);
        default:
            std::cout << "voce deve escolher uma opcao valida\n";
            std::cout << "Precione qualquer tecla para voltar ao menu\n\n";
            system("pause");
            goto creditos;
        }
        return 0;
        break;
    case '4':
        system("cls");
        std::cout << "voce pediu para sair, prencione qualquer tecla para continuar\n";
        system("pause");
        exit(0);
    default:
        std::cout << "voce deve escolher uma opcao valida\n";
        std::cout << "Precione qualquer tecla para voltar ao menu\n\n";
        system("pause");
        goto inicio;
    }

}



int main(void){
    setlocale(LC_ALL, "Portuguese" );
    system("color 0F");
    int dificuldade=0;

    dificuldade = menu();


    std::cout << dificuldade << std::endl;

}