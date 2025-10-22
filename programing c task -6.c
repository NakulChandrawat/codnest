#include <stdio.h>
int main(){
int num=1,sum=0;
while(num<=100)
    {
        if(num%2==0)
        {
            sum=num+sum;
            
        }
        num++;
    }
     printf("The sum of even numbers between 1 to 100 is: %d",sum);
    return 0;
}
