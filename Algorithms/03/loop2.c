#include <stdio.h>

int main () {

    int v;

    /*for (v = 1; v <= 10; v++) {
        printf("%d\n", v);

        if (v == 7){
            break;
        }
    }*/

    for (v = 1; v <= 10; v++) {

        if (v == 7){
            continue;
        }
        printf("%d\n", v);
    }
}