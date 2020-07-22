#include<stdio.h>

int main(){
int a ,b;
printf("Enter two numberss");
scanf("%d%d",&a,&b);

if(a<b)
{
	printf("Reslt is negative and is %d",a-b);
}
else
{
	printf("Result is positive or zero and is %d" , a-b);
}
int i;
for(int i=0; i<10; i++)
{
	continue;
}


return 0;
}
