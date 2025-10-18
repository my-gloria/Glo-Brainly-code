#include <stdio.h>
#include <math.h> //For sqrt()
int main(){
int n, i, isprime;//Declare variables
printf("Prime numbers from 1 to 100 are:\n");
//FOR n=1 To 100
for(n=1; n<=100; n++){
    if(n==2){
        printf("%d", n);
    }
    //IF n>2 THEN check for factors
    else if (n>2){
        isprime=1; //Assume prime number
        //FOR i=2 TO sqrt(n)
        for (i=2; i<=sqrt(n); i++){
            //IF n MOD i==o THEN not prime
            if (n % i==0){
                isprime=0;
                break;
            }
        }
        //IF isPrime=1 THEN PRINT n
        if(isprime==1){
            printf("%d", n);
        }
    }
}
printf("\n");
//STOP
return 0;
}
