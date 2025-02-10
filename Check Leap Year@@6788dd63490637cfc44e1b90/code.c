#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
    if((year%4==0)&&(!(year%100==0))){
        printf("Leap Year");
    }
    else if ((year % 100 ==0)&&(year%400==0)){
        print("Leap Year");
    }
    else{
        printf("NOt a Leap Year");
    }
    return 0;
}