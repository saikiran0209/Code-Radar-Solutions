// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b; char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c",&c);
    switch (c){
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            (!(b == 0))?printf("%d\n",a/b):printf("error\n");
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}