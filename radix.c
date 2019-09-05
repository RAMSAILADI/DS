#include<stdio.h>
#include<string.h>
char num[100];
int count=0;
char * radix_convert(int no, int radix )
{
	int rem,i,d;
	while(no !=0)
	{
		rem=no%radix;
		 d='0'+rem;
	        if(d>'9')
	        {
			d=d+7;
		}
		num[count++]=d;
		no=no/radix;
	}
	return num;
}

void main()
{
	char *number;
	int rem,i,dec,d,base,count=0;
	printf("Entre the decimal number        ");
	scanf("%d",&dec);
	printf("Enter the decimal base          ");
	scanf("%d",&base);
	number=radix_convert(dec,base);
	printf("base 10 to base %d conversion   ",base);
	for(i=strlen(number)-1;i>=0;i--)
	printf("%c",number[i]);
	printf("\n");
}
