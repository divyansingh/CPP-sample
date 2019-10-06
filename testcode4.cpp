#include<stdio.h>
#include<string.h>

int main() {
	char str[1000],ch='A',ch1='a',ch2,ch3;
	int k,i,x,y,z,k1;
	gets(str);
	scanf("%d",&k);
	for(i=0;i<strlen(str);i++)
	{
	    if(str[i]>='A'  && str[i]<='Z')
	    {
	        if((int)str[i]+k>90)
	        {
	            x=(int)str[i]+k-90;
	            printf("%c",ch+x);
	        }
	        else {
	   ch3=str[i];
	        printf("%c",ch3+k);
	    }
	}
	    else
	    if(str[i]>='a'  && str[i]<='z')
	    {
	        if((int)str[i]+k>122)
	        {
	            y=(int)str[i]+k-122;
	            printf("%c",ch1+y);
	        }
	        else {
	            ch2=str[i];
	        printf("%c",ch2+k);
	    }
	    }
	else
	if(str[i]>='0'  && str[i]<='9')
	{

	        z=1*((str[i]+k))%10;
	    printf("%d",z);

    }
	else
	printf("%c",str[i]);
	}
	return 0;
}
