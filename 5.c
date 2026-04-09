#include <stdio.h>

int main(){
    int monthNo=0;
    char months[][12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter a number between 1 and 12: ");
    scanf("%d",&monthNo);
    printf("%s",months[monthNo-1]);
    return 0;
}
