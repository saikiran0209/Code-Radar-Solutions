#include <stdio.h>


int main() {
    int a ;
    scanf("%d",&a);
// if(a>0){
//     printf("Positive");
// }else if(a<0){
//     printf("Negative");
// }else{
//     printf("Zero");
// }
(a>0)?printf("Positive"):(a<0)?printf("Negative"):printf("Zero");

    return 0;
}