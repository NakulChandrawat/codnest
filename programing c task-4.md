# codnest
#include <stdio.h>
int main(){
    int num=5,table;
    for(int i=1;i<11;i++)
    {
      table=num*i;
      printf("%d * %d = %d\n",num,i,table);
    }
    return 0;
}