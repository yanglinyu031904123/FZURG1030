#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int number;
	srand(time(NULL));
	int i,a,b,op,result;
	char s;
	int ans,flag=0,input;
	cin>>number;
	for(i=0;i<number;i++)
	{
	a=rand()%101;
	b=rand()%101;
	op=rand()%4;
	switch(op)
	{
		case 0:
			cout<<a<<"+"<<b<<"="<<endl;
			result=a+b;
			cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 1:
			cout<<a<<"-"<<b<<"="<<endl;
			result=a-b;
				cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 2:
			cout<<a<<"*"<<b<<"="<<endl;
			result=a*b;
				cin>>ans;
			if(ans!=result)flag++;
			break; 
		case 3:
			cout<<a<<"/"<<b<<"="<<endl;
			result=a/b;
				cin>>ans;
			if(ans!=result)flag++;
			break; 
	}
}
cout<<"´íÌâÊı"<<flag; 
	return 0; 
}
