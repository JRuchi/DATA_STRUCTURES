#include<stdio.h>

/* Explaination of the algorithm */

/* 1st iteration :  get the greatest value to the end of the array, by comparing the two numbers at a time. 

   2nd iteration : get the second greatest value to the end of the array by comparing n-1 elements, 2 at a time

similarly proceed till list size is 1. 

*/



void bubble_sort(int* x)
{
int i;
int k;
for(k=1;k<=6;k++)
{
for(i=k-1;i<5;i++)
{
int c;
	if (x[i] > x[i+1])
	{
	c = x[i];
        x[i] = x[i+1];
        x[i+1] = c;
	}

}
}

}



int main() {

int arr[6];
int i = 0;
printf("enter the array elements \n");

for(i=0;i<6;i++)
{
scanf("%d",&arr[i]);
}

/*
for(i=0;i<6;i++){

printf("the %d element is %d",i,arr[i]);

}
*/
bubble_sort(arr);

for(i=0;i<6;i++){

printf("the %d element is %d \n",i,arr[i]);

}

return 1;

} 
