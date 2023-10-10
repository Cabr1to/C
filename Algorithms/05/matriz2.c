#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){

    int mat[3][5] = {{1, 2, 3, 4, 5}, 
                     {6, 7, 8, 9, 10}, 
                     {11, 12, 13, 14, 15}};

    int i, j;

    printf("Imprimindo a primeira linha da matriz:\n");
    for(j = 0; j < 5; j++){
        printf("%d ", mat[0][j]);
    }

    printf("\n\nImprimindo toda a matriz:\n");
    for (i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", mat[i][j]);
    }    
    printf("\n");
 }

}