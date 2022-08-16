#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void merge(int[] ,int ,int ,int );
void mergeSort(int[] ,int ,int );

void main()
{
int a[15000],n,i,j,temp;
clock_t start,end;
n=500;
while(n<=15000)
{
for(i=0;i<n;i++)
{a[i]=rand();}

start=clock();
mergeSort(a,0,n-1);
for(j=0;j<50000000;j++)
{temp=38/600;}
end=clock();

printf("\n Time taken to sort %d numbers is %f Secs",n,(((double)(end-start))/CLOCKS_PER_SEC));
n=n+1000;
}
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r){
        int m =(l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
        }
}

void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int firstsubarray=m-l+1;
    int secondsubarray=r-m;

    int L[firstsubarray], R[secondsubarray];

    for (i = 0; i < firstsubarray; i++)
        L[i] = arr[l + i];

    for (j = 0; j < secondsubarray; j++)
        R[j] = arr[m + 1 + j];

        i=0;
        j=0;
        k=1;
    while (i < firstsubarray && j < secondsubarray) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < firstsubarray) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < secondsubarray) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


/*
array-size	time
500	0.083
1500	0.083
2500	0.094
3500	0.78
4500	0.094
5500	0.078
6500	0.094
7500	0.094
8500	0.078
9500	0.094
10500	0.93
11500	0.078
12500	0.094
13500	0.078
14500	0.094
*/
