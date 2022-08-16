#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void insertionSort(int n, int a[]);

void main()
{
    int a[15000],n,i,j,ch,temp;
    clock_t start,end;
    n = 500;
    n = 500;
    while(n <= 14500){
        for(i=0;i<n;i++){a[i] = rand();}
        start = clock();
        insertionSort(n,a);
        for(j=0;j<500000;j++){temp = 38/600;}
        end = clock();
        printf("\n Time taken to sort %d elements is %f seconds. \n",n , (((double)(end - start))/CLOCKS_PER_SEC));
        n = n + 1000;
    }
}
void insertionSort(int n, int a[])
{
  for(int step = 1; step < n; step++)
   {
    int key = a[step];
    int j = step - 1;
    while (key < a[j] && j >= 0)
    {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = key;
  }
}
