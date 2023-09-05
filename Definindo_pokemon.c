#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pokemon1
{
char *nome ;              //nome
char ataque[4];          //ataque
int vida;                //vida
char *tipo;               //tipo
}Pokemon1;

Pokemon1 pokemon_1;


typedef struct Pokemon2
{
char *nome ;             //nome
char ataque[4];         //ataque
int vida;               //vida
char *tipo;              //tipo
}Pokemon2;

Pokemon2 pokemon_2;

typedef struct Pokemon3
{
char *nome ;             //nome
char ataque[4];         //ataque
int vida;               //vida
char *tipo;              //tipo
}Pokemon3;

Pokemon3 pokemon_3;

void criando_Pokemon(void)
{
    //printf("Começa aqui\n");
    //Criando Pokemon-1

   pokemon_1.nome = "Charmander";
   pokemon_1.vida = 100;
   pokemon_1.ataque[0] = "Lança-chamas";
   pokemon_1.ataque[1] = "Arranhão";
   pokemon_1.ataque[2] = "Brasa";
   pokemon_1.ataque[3] = "Cabeçada";
   pokemon_1.tipo = "fogo";

    //Criando Pokemon-2

    pokemon_2.nome = "Bulbassaur";
    pokemon_2.vida =  100;
    pokemon_2.ataque[0] = "Folha navalha";
    pokemon_2.ataque[1] = "Cabeçada";
    pokemon_2.ataque[2] = "Raio-solar";
    pokemon_2.ataque[3] = "Pó do sono";
    pokemon_2.tipo = "grama";

    //Criando Pokemon-3

    pokemon_3.nome = "Squirtle";
    pokemon_3.vida = 100;
    pokemon_3.ataque[0] = "Jato D'agua";
    pokemon_3.ataque[1] = "Cabeçada";
    pokemon_3.ataque[2] = "Raio de Gelo";
    pokemon_3.ataque[3] = "Bolhas";
    pokemon_3.tipo = "agua";

return ;
}


int main()
{
int escolha = 0;

printf("Escolha um Pokemon: ");
scanf("%i",&escolha);
criando_Pokemon();

if(escolha == 1)
{
    printf("Nome: %s\n",pokemon_1.nome);
    printf("Tipo: %s\n",pokemon_1.tipo);
    printf("Vida: %d\n",pokemon_1.vida);
}
else if (escolha == 2)
{
    printf("Nome: %s\n",pokemon_2.nome);
    printf("Tipo: %s\n",pokemon_2.tipo);
    printf("Vida: %d\n",pokemon_2.vida);
}else
{
    printf("Nome: %s\n",pokemon_3.nome);
    printf("Tipo: %s\n",pokemon_3.tipo);
    printf("Vida: %d\n",pokemon_3.vida);
}


return 0;
}



