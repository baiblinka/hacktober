#include<stdio.h>
//include
#include<stdlib.h>
//hello
void main(int n,char *a[])
{
  float avg=0;
  if(n==1)
    printf("At least 1 value required.\n");
  else
  {

  //loops over the elements
    for(int i=1;i<n;i=i+1)
      avg+=atoi(a[i]);

    for(int i=1;i<n;i++)
      avg= avg + atoi(a[i]);


    for(int i=1;i<n;i++){
      avg= avg + atoi(a[i]);
    }
    
    avg=avg/(n-1);
    printf("The average = %f\n",avg);
  }
}
//hello
//hi
//hesoyam
