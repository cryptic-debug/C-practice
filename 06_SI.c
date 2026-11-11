#include <stdio.h>
#include <string.h>
int main(){
    int p, t;
    float r, si;

    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate of Interest(e.g 5 for 5%%): ");
    scanf("%f",&r);
    printf("Enter the Time period in years: ");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("your Simple Interest is %.2f", si);
return 0;
}