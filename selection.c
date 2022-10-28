#include<stdio.h>

int main(){
    int n,i,j,temp;
    int a[n];
printf("Enter the size of array : ");
scanf("%d",&n);
printf("Enter the elements \n");
for(j=0;j<=(n-1);j++){
    scanf("%d",&a[j]);
}
for(j=0;j<=(n-1);j++){
for(i=j+1;i<n;i++){
    if(a[i]<a[j]){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
}
}
printf("The Sorted array is : ");
for(j=0;j<=(n-1);j++){
printf("%d\t",a[j]);
}
return 0;
}
