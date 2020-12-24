#include<stdio.h>
int main()
{
    float meter,inch,feet;
    scanf("%f",&meter);
    feet=3.28*meter;
    inch=(feet-(int)feet)*12;
    printf("%d feet %.2f inch",(int)feet,inch);

    return 0;

}
