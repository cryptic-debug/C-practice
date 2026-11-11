#include <stdio.h>
#include <string.h>
int main(){
    float r;
    int h;
    printf("Enter radius of cylinder: ");
    scanf("%f",&r);
    printf("enter the height of cylinder: ");
    scanf("%d", &h);
    printf("Volume of cylinder with radius %.2f and height %d is %.2f", r, h, 22.0/7*r*r*h);
return 0;
}