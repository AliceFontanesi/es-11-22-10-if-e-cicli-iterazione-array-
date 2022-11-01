#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char strG[2], strM[2], strA[4];
    int i, giorno, mese, anno;
    int cnt = 0;
    
    if (argc != 2)
        printf("Errore\n");

    if (strlen(argv[1]) != 8)
        printf("Dimensione stringa incorretta\n");
    
    for (i = 0; i < 2; i++)
    {
        strG[cnt] = argv[1][i];
        cnt++;
    }
    
    giorno = atoi(strG);

    if (giorno > 31 || giorno < 1){
        printf("Data incorretta\n");
        return -1;
    }
        
        
    cnt = 0;
    
    for (i = 2; i < 4; i++)
    {
        strM[cnt] = argv[1][i];
        cnt++;
    }

    mese = atoi(strM);
    
    if (mese > 12 || mese < 1){
        printf("Data incorretta\n");
        return -1;
    }
        
    cnt = 0;
    
    for (i = 4; i < 8; i++)
    {
        strA[cnt] = argv[1][i];
        cnt++;
    }
    
    anno = atoi(strA);
    
    if (anno > 2022 || anno < 1){
        printf("Data incorretta\n");
        return -1;
    }

    if (giorno < 10 && mese < 10)
        printf("0%d/0%d/%d \n", giorno, mese, anno);
    else if (giorno < 10)
        printf("0%d/%d/%d \n", giorno, mese, anno);
    else if (mese < 10)
        printf("%d/0%d/%d \n", giorno, mese, anno);
    else
        printf("%d/%d/%d \n", giorno, mese, anno);
    return 0;
}
