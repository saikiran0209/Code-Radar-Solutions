#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age;
    scanf("%d",&age);
    if(age>=60){
        printf("Eligible");
    }else{
        printf("Not Eligible");
    }
    return 0;
}