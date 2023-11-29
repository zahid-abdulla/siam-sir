#include <stdio.h>
int main(){
int arr[10],i,n;
printf("Enter the number:");
scanf("%d",&n);

for(i=0;i<n;i++){
    arr[i]=rand()%(55-20)+20;
}

for(i=0;i<n;i++){
    printf("Values of the arrays :%d\n",arr[i]);
}


    return 0;
}