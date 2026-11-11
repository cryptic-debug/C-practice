#include <stdio.h>
#include <string.h>
int main(){
    float r;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    printf("Area of circle with radius %.2f is %.2f", r, 22.0/7*r*r);
return 0;
}
