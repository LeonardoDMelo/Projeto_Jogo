#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Pokemon1
{
    char *nome;      // nome
    char *ataque[4]; // ataque
    int vida;        // vida
    char *tipo;      // tipo
} Pokemon1;

Pokemon1 pokemon_1;

typedef struct Pokemon2
{
    char *nome;      // nome
    char *ataque[4]; // ataque
    int vida;        // vida
    char *tipo;      // tipo
} Pokemon2;

Pokemon2 pokemon_2;

typedef struct Pokemon3
{
    char *nome;      // nome
    char *ataque[4]; // ataque
    int vida;        // vida
    char *tipo;      // tipo
} Pokemon3;

Pokemon3 pokemon_3;

void criando_Pokemon(void)
{
    // printf("Começa aqui\n");
    // Criando Pokemon-1

    pokemon_1.nome = "Charmander";
    pokemon_1.vida = 100;
    pokemon_1.ataque[0] = "flamethrower";
    pokemon_1.ataque[1] = "Slash";
    pokemon_1.ataque[2] = "Ember";
    pokemon_1.ataque[3] = "Shadow Claw";
    pokemon_1.tipo = "Fogo";

    // Criando Pokemon-2

    pokemon_2.nome = "Bulbassaur";
    pokemon_2.vida = 100;
    pokemon_2.ataque[0] = "Vine Whip";
    pokemon_2.ataque[1] = "Tackle";
    pokemon_2.ataque[2] = "Raio-solar";
    pokemon_2.ataque[3] = "Sleep Powder";
    pokemon_2.tipo = "Grama";

    // Criando Pokemon-3

    pokemon_3.nome = "Squirtle";
    pokemon_3.vida = 100;
    pokemon_3.ataque[0] = "Water Gun";
    pokemon_3.ataque[1] = "Tackle";
    pokemon_3.ataque[2] = "Ice Beam";
    pokemon_3.ataque[3] = "Hydro Pump";
    pokemon_3.tipo = "Agua";

    return;
}

int main()
{
    criando_Pokemon();
    setlocale(LC_ALL, "Portuguese");
    int escolha = 0;
    printf("Bem vindo ao Pokemon\n");
    printf("Voce pode escolher um entre esses 3 e batalhará contra os outros 2\n\n");
    printf("Nome: %s\n", pokemon_1.nome);
    printf("Tipo: %s\n", pokemon_1.tipo);
    printf("Vida: %d\n", pokemon_1.vida);
    printf("Ataques: ");
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            printf("%s. \n\n", pokemon_1.ataque[i]);
        }
        else
        {
            printf("%s, ", pokemon_1.ataque[i]);
        }
    }
    printf("Nome: %s\n", pokemon_1.nome);
    printf("Tipo: %s\n", pokemon_1.tipo);
    printf("Vida: %d\n", pokemon_1.vida);
    printf("Ataques: ");
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            printf("%s. \n\n", pokemon_1.ataque[i]);
        }
        else
        {
            printf("%s, ", pokemon_1.ataque[i]);
        }
    }

    printf("Nome: %s\n", pokemon_3.nome);
    printf("Tipo: %s\n", pokemon_3.tipo);
    printf("Vida: %d\n", pokemon_3.vida);
    printf("Ataques: ");
    for (int i = 0; i < 4; i++)
    {
        if (i == 3)
        {
            printf("%s. \n\n", pokemon_3.ataque[i]);
        }
        else
        {
            printf("%s, ", pokemon_3.ataque[i]);
        }
    }

    printf("Escolha um Pokemon: ");
    scanf("%i", &escolha);
    printf("Voce escolheu: \n");
    

    if (escolha == 1)
    {
        printf("Nome: %s\n", pokemon_1.nome);
        printf("Tipo: %s\n", pokemon_1.tipo);
        printf("Vida: %d\n", pokemon_1.vida);
        printf("Ataques: ");
        for (int i = 0; i < 4; i++)
        {
            if (i == 3)
            {
                printf("%s. \n\n", pokemon_1.ataque[i]);
            }
            else
            {
                printf("%s, ", pokemon_1.ataque[i]);
            }
        }
    }
    else if (escolha == 2)
    {
        printf("Nome: %s\n", pokemon_2.nome);
        printf("Tipo: %s\n", pokemon_2.tipo);
        printf("Vida: %d\n", pokemon_2.vida);
        printf("Ataques: ");
        for (int i = 0; i < 4; i++)
        {
            if (i == 3)
            {
                printf("%s. ", pokemon_2.ataque[i]);
            }
            else
            {
                printf("%s, ", pokemon_2.ataque[i]);
            }
        }
    }
    else
    {
        printf("Nome: %s\n", pokemon_3.nome);
        printf("Tipo: %s\n", pokemon_3.tipo);
        printf("Vida: %d\n", pokemon_3.vida);
        printf("Ataques: ");
        for (int i = 0; i < 4; i++)
        {
            if (i == 3)
            {
                printf("%s. ", pokemon_3.ataque[i]);
            }
            else
            {
                printf("%s, ", pokemon_3.ataque[i]);
            }
        }
    }

    return 0;
}
