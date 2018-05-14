#include<stdio.h>
float convertFtoC(float F);
int main(){
    float F = 152.0;
    printf("Chuyen sang C: %f", convertFtoC(F));
    return 0;
}

float convertFtoC(float F) {
    return (5.0 / 9.0)*(F - 32.0);
}
