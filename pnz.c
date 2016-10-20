#include<stdio.h>
int main()
{
int num;
printf("enter any number");
scanf("%d",&num);
if(num>0){
printf("number s positive");
}
else if(num<0){
printf("number s negative");
}
else{
printf("number s zero");
}
return 0;
}
