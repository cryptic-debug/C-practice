#include <stdio.h>
#include <string.h>
int main(){
    float C;
    printf("Enter the temp in celsius: ");
    scanf("%f",&C);
    printf("your temp in fahrenhieit is %.2f F", (C*9.0/5)+32);
return 0;
}