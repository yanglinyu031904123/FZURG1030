#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{	int i;
	srand(time(0));
	int num = rand()%4;
	char s[4] = {'+','-','*','/'};
	int shu[4];
	char ys[4];
	int l = 0;
	int k = 0;
	for(i=0;i<5;i++)
	{	
		int num = rand()%4;
		shu[l] = i;
		l += 1; 
		printf("%d",i);
		if(i!=5-1)
		{
		ys[k] = s[num];
		k += 1;
		printf("%c",s[num]);
		}
		
		if(i==5-1)
		printf("=");
	}

	printf("\n");
	int js;
	int m = 0;
	for(i=0;i<k;i++)
	{
		switch(ys[i])
		{
			case '*':
				shu[i+1] = shu[i+1] * shu[i];
				ys[i] = ' ';
				break;
			case '/':
				shu[i+1] = shu[i] / shu[i+1];	
				ys[i] = ' ';
				break;
		}	
	}
	for(i=0;i<5;i++)
	{
		if(ys[i]==' ')
		{
			shu[i] = 0;
		}
	}

	int shu1[5];
	char ys1[4];
	int l1 = 0;
	int k1 = 0;
	for(i=0;i<5;i++)
	{
		if(shu[i]!=0)
		{
			shu1[l1] = shu[i];
			l1++;
		}
		if(ys[i]!=' ')
		{
			ys1[k1] = ys[k1];
			k1++;
		}
		
	}
	for(i=0;i<k1;i++)
	{	
		switch(ys1[i])
		{
			case '+':
				shu1[i+1] = shu1[i] + shu1[i+1];
				ys1[i] = ' ';
				shu1[i]=0;
				break;
			case '-':
				shu1[i+1] = shu1[i] - shu1[i+1];
				ys1[i] = ' ';
				shu1[i]=0;
				break;
		}
	}

	
	return 0;
	
	
	
	
	
	
}
