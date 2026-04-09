#include <stdio.h>
//input value in seconds. The program should compute hours, minutes and seconds and display them

int main(){
    int secs=0;
    int mins=0;
    int hrs=0;
    int temp1=0;
    printf("Enter number of seconds: ");
    scanf("%d",&secs);

    hrs=secs/3600;      //1
    temp1=secs-(hrs*3600); //83

    mins=temp1/60;   //1
    secs=temp1-(mins*60);//23
    printf("Time in hrs,mins,secs: %d:%d:%d",hrs,mins,secs);

    return 0;
}




//63 ---> 1 min 3 seconds
//3683 ---> 1 hr,1 min,23 seconds 
