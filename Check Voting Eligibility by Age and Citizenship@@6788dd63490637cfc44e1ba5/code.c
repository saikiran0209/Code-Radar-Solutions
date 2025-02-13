// Your code here...
#include <stdio.h>
int main(){
    int age,b;
    scanf("%d",&age);
    scanf("%d",&b);
    if(age>=18 && b==1){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
return 0;
}