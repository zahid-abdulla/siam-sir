#include <stdio.h>
int main(){

int arr[10],arr1[15],i,n,f;
printf("enter the term:");
scanf("%d",&n);


for(i=0;i<=n;i++){
    printf("%d number :",i);
    scanf("%d",&arr[i]);

}
for(i=0;i<=n;i++){
    arr1[i]=arr[n-i];
   printf("%d",arr1[i]);

}





    return 0;
}