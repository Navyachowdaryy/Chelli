#include<stdio.h>
#include<math.h>
int main(){
long int n;
int i=0,rem,result=0;
printf("enter number :");
scanf("%d",&n);
int temp=n;
while(temp!=0){
rem=temp%10;
result=result+rem*pow(2,i);
i++;
temp=temp/10;
}
printf("%d",result);
return 0;
}
