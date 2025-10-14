#include <stdio.h>
int main(){
    int num,isprime=1; 
    printf("Enter the Number:");
    scanf("%d",&num); 
    if(num<=1)
    {
        isprime=0;
    }
    else{
    for (int i=2;i<num;i++)
    {
       if(num%i==0)
       {
           isprime=0;
           break;
       }
       
    }}
     if(isprime==1)
        {
            printf("The given number is  prime");
        }
        else
        {
            printf("The given number is not prime"); 
        }
    
    return 0;
}