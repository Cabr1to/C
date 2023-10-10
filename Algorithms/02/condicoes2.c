#include <stdio.h>

int main () {

    float m; 

    printf("Insira a nota: \n");
    scanf("%f", &m);

    if(m >= 4 && m < 7) {
        printf("recu pai. \n");
    } else if (m < 4 || m >= 7 ) {
        printf("Nao tem recu pra vc. \n");
    } 

}