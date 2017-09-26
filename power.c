#include<stdio.h>

int power(int a,int b){
int i,ans =1;

for(i=0;i<b;i++)
	ans *=a;
return ans;
}
