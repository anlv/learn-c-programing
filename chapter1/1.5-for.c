#include<stdio.h>
int main(){
    float doC, doF;
    for(doF = 300; doF >= 0; doF-= 20){
        doC = (5.0/9.0)*(doF - 32);
        printf("%.0f\t%f\n", doF, doC);
    }
    return 0;


}
