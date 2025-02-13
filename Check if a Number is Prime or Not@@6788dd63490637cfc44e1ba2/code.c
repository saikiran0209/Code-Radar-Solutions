// Your code here...
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num%2==0 || num%3==0){
        printf("Not Prime");
}else{
    printf("Prime");
}
return 0;
}