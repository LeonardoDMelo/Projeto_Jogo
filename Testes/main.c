#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char titulo[10][48] = {
    "######                                   #####  ",
    "#     #   ####   #    #  ######         #     # ",
    "#     #  #    #  #   #   #              #      " ,
    "######   #    #  ####    #####   #####  #       ",
    "#        #    #  #  #    #              #       ",
    "#        #    #  #   #   #              #     # ",
    "#         ####   #    #  ######          #####  "
    };
    for(int i=0;i<10;i++)
        {
            printf("\n");
            for(int j=0;j < 48;j++)
            {
                printf("%c",titulo[i][j]);

            }
        }
    return 0;
}
