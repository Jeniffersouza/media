#include <stdio.h>
 
int main() {
 
        float a,b,c, media;
        scanf ("%f %f %f", &a, &b, &c);
        media = (a+b+c)/3;

        if (media < 6) {
            printf("voce reprovou, sua nota foi = %f\n", media);
        }else{
            printf("voce foi aprovada, sua nota foi = %f\n", media);
        }

        return 0;
}