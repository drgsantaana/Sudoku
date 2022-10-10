#include <iostream>
#include <conio.h>
#include <clocale>

void LimpaTela(){
    system("clear");
}

void PausaTela(){
    system("pause");
}

void Jogar(){
    int opt;
    LimpaTela();
    std::cout << "1 - FÁCIL \n2 - MÉDIO \n3 - DIFÍCIL \n4 - VOLTAR AO MENU INICIAL\n5 - SAIR\n";
}

void Inicio(){
    int opt;
    LimpaTela();
    std::cout << "1 - JOGAR \n2 - REGRAS \n3 - CRÉDITOS \n4 - SAIR\n";
    opt = getch();
    switch (opt)
    {
    case 1:
        
        break;
    
    default:
        break;
    }
}


int main(void){
    setlocale(LC_ALL, "Portuguese" );
    system("color 0F");
    
    Inicio();

}