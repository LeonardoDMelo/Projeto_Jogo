#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
void linhaCol(int lin, int col);
void textColor(int letras, int fundo);
void box(int lin1, int col1,int lin2,int col2);
int menu(int lin1,int col1,int qtd, char lista[3][40]);


void linhaCol(int lin, int col)
{
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){col-1,lin-1});// coorddenada na tela
}
enum
{
    BLACK,                 //0
    BLUE,                  //1
    GREEN,                 //2
    CYAN,                  //3
    RED,                   //4
    MAGENTA,               //5
    BROWN,                 //6
    LIGHTGRAY,             //7
    DARKGRAY,              //8
    LIGHTBLUE,             //9
    LIGHTGREEN,            //10
    LIGHTCYAN,             //11
    LIGHTRED,              //12
    LIGHTMAGENTA,          //13
    YELLOW,                //14
    WHITE                  //15
};
enum
 {
    _BLACK=0,                 //0
    _BLUE=16,                  //1
    _GREEN=32,                 //2
    _CYAN=48,                  //3
    _RED=64,                   //4
    _MAGENTA=80,               //5
    _BROWN=96,                 //6
    _LIGHTGRAY=112,             //7
    _DARKGRAY=128,              //8
    _LIGHTBLUE=144,             //9
    _LIGHTGREEN=160,            //10
    _LIGHTCYAN=176,             //11
    _LIGHTRED=192,              //12
    _LIGHTMAGENTA=208,          //13
    _YELLOW=224,                //14
    _WHITE=240                  //15
 };

void textColor(int letras, int fundo)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),letras+fundo);
}

void box(int lin1, int col1,int lin2,int col2)
{
    int i,j,tamlin,tamcol;

    tamlin=lin2-lin1;
    tamcol=col2-col1;

    for(i=col1;i<=col2;i++) //linhas
    {
        linhaCol(lin1,i);
        printf("%c",196);
        linhaCol(lin2,i);
        printf("%c",196);
    }
    for(i=lin1;i<=lin2;i++) //Colunas
    {
        linhaCol(i,col1);
        printf("%c",179);
        linhaCol(i,col2);
        printf("%c",179);
    }
    for(i=lin1+1;i<lin2;i++)
    {
        for(j=col1+1;j<col2;j++)
        {
            linhaCol(i,j);printf(" ");
        }
    }

    //Cantos
    linhaCol(lin1,col1);
    printf("%c",218);
    linhaCol(lin1,col2);
    printf("%c",191);
    linhaCol(lin2,col1);
    printf("%c",192);
    linhaCol(lin2,col2);
    printf("%c",217);
}

int menu(int lin1,int col1,int qtd, char lista[3][40])
{
   int opc=1, lin2, col2, linha,i;
   int tamMaxitem, tecla;

    //Calculando as coordenadas

    tamMaxitem = strlen(lista[0]);
    //Tamanho Maxido
    for(i=1;i<qtd;i++)
    {
        if(strlen(lista[i])>tamMaxitem)
        {
            tamMaxitem = strlen(lista[i]);
        }
    }

    lin2 = lin1+(qtd*2+2);
    col2 = col1+tamMaxitem+4;

    //Tela do Menu
    textColor(WHITE,_BLUE);
    setlocale(LC_ALL,"C");
    box(lin1, col1,lin2,col2);
    setlocale(LC_ALL,"");

    //Opções

    while (1)
    {
        linha = lin1+2;
        for(i=0;i<qtd;i++)
        {
            if(i+1 == opc)textColor(BLACK, _LIGHTGREEN);
            else textColor(WHITE,_BLUE);

        linhaCol(linha,col1+2);
        printf("%s",lista[i]);
        linha+=2;
        }

        //Esperando Teclas
        linhaCol(1,1);
        tecla = getch();
        linhaCol(22,1);

        //printf("tecla: %d",tecla);
        /*
        Cima:      72
        Baixo:     80
        Esquerda:  75
        Direita:   77
        */
       if(tecla == 27)
       {
        opc=0;
        break;
       }


        if(tecla == 72)
        {
            if(opc>1)
            {
             opc-- ;
            }
        }
        else if(tecla == 80)
        {
            if(opc<qtd)
            {
                opc++;
            }
        }
    }

return opc;
}


int main()
{
    int opc;
    char lista[3][40] = {"opcao1","opcao2","opcao3"};
    setlocale(LC_ALL,"");
    while (1)
    {
        opc = menu(10,10,5,lista);
        if(opc == 0)
        {
            break;
        }
    }
    textColor(WHITE,_BLACK);
    linha(24,1);
    printf("");


    return 0;

}
