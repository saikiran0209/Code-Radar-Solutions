#include <stdio.h>
int main (){
    int a,b,c;
    float avg;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    avg = (a + b + c)/3.0;
    printf("Average: %.2f\n",avg);
    return 0;
}