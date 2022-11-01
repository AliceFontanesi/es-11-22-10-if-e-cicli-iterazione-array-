#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    if(argc != 2)
        printf("Errore\n");
    else{
        n =  atoi(argv[1]);
        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    printf("*");
                if(j > 0 && j < n - 1 && i != 0 && i != n - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}




