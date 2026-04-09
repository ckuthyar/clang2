#include <stdio.h>

int main(){
    int limit1=0;
    printf("Enter a number: ");
    scanf("%d",&limit1);
    for(int i=1;i<limit1+1;i++){
       printf("%d\n",i);
    }
    return 0;	 
}
