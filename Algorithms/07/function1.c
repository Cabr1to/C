#include <stdio.h>
#include <stdlib.h>

float maior(float num1, float num2);

int main(){
    float a, b, m;
    printf("Insira um numero:\n");
    scanf("%f", &a);
    printf("Insira um numero:\n");
    scanf("%f", &b);
    m = maior(a,b);
    printf("O maior numero: %.2f", m);
}
  
float maior(float num1, float num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}