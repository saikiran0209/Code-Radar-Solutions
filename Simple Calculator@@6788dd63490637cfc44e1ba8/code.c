// Your code here...
#include <stdio.h>
int main(){
    int a,b; char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    switch (c){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            if(!(b == 0)){
                                printf("%f",a/b);

            }else{
                                printf("error");

            }
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}