#include <stdio.h>
int main(){
int sum=0;
for(int i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            sum=i+sum;
        }
    }
     printf("The sum of even numbers between 1to 50 is: %d",sum);
    return 0;
}
