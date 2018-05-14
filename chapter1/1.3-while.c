#include<stdio.h>

int main(){
    float doC, doF, step, max, min;
    min = 0;
    max = 300;
    step = 20;

    doF = min;
    while (doF <= max) {
    	doC = (5.0f/9.0f) * (doF - 32);
	printf("%.0f\t%f\n",doF, doC);
	doF += step;
    }
    return 0;


}
