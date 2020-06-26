#include <stdio.h>
int main(){
    int number,afford;
    printf("please enter the number of costomers:");
    scanf("%d",&number);
    afford = number * 300;
    if(afford<3000){
    printf("total:%d",afford);
    }
    if(afford>=3000){
    afford = afford*0.8;
    printf("total:%d",afford);
    }
    return 0;
    }
