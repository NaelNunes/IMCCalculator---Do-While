#include <stdio.h>

int main()
{
    int i = 0, age;
    float height, imc, weight;
    
    do {
    printf("Write your age: \n");
    scanf("%d", &age);
    printf("Write your height: \n");
    scanf("%f", &height);
    printf("Write your weight: \n");
    scanf("%f", &weight);
    imc = (weight / height) / height;
    printf("Your IMC is: %.2f\n", imc);
    i++;
    } while ( i < 11 );
    
    return 0;
}
