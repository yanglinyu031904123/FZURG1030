#include<stdio.h>
#include<bits/stdc++.h>
#include <time.h>
#include <unistd.h>
using namespace std;
int grade3_4()
{
	int number;  //number为题目数目 
	srand(time(NULL));
	float result,ans;
	int op;
	cin>>number;
		for(int i=0;i<number;i++){
		int ele_num=rand()%2+2;         //ele_num为该题元素个数
		if(ele_num==2){
			int a=rand()%10001;
	        int b=rand()%10001;
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
		else{                            //ele_num=3; 
		int a=rand()%10001;
	    int b=rand()%10001;
	    int c=rand()%10001;
	    op=rand()%20;
	    switch(op)
	    {
	    	case 1:
			    cout<<a<<"+"<<b<<"-"<<c<<"="<<endl;
			    result=a+b-c;
			    cin>>ans;
			    if(ans!=result)flag++;
				break;	    	
			case 2:
			    cout<<a<<"+"<<b<<"+"<<c<<"="<<endl;
			    result=a+b+c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
			case 3:
			    cout<<a<<"+"<<b<<"="<<endl;
			    result=a+b*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
			case 4:
			    cout<<a<<"+"<<b<<"="<<endl;
			    result=a+b/c;
			    cin>>ans;
			    if(ans!=result)flag++;                //+
			    break;
			case 5:
			    cout<<a<<"-"<<b<<"-"<<c<<"="<<endl;
			    result=a-b-c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 6:
			    cout<<a<<"-"<<b<<"+"<<c<<"="<<endl;
			    result=a-b+c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 7:
			    cout<<a<<"-"<<b<<"*"<<c<<"="<<endl;
			    result=a-b*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 8:
			    cout<<a<<"-"<<b<<"/"<<c<<"="<<endl;
			    result=a-b/c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 9:
			    cout<<a<<"*"<<b<<"-"<<c<<"="<<endl;
			    result=a*b-c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
			case 10:
			    cout<<a<<"*"<<b<<"+"<<c<<"="<<endl;
			    result=a*b+c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 11:
			    cout<<"("<<a<<"+"<<b<<")"<<"*"<<c<<"="<<endl;  //括号开始 
			    result=(a+b)*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 12:
			    cout<<"("<<a<<"-"<<b<<")"<<"-"<<c<<"="<<endl;
			    result=(a-b)*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 13:
			    cout<<"("<<a<<"+"<<b<<")"<<"/"<<c<<"="<<endl;
			    result=(a+b)/c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
	    	case 14:
			    cout<<"("<<a<<"-"<<b<<")"<<"/"<<c<<"="<<endl;
			    result=(a-b)*c;
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 15:
			    cout<<a<<"*"<<"("<<b<<"+"<<c<<")"<<"="<<endl;  
			    result=a*(b+c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 16:
			    cout<<a<<"*"<<"("<<b<<"-"<<c<<")"<<"="<<endl;  
			    result=a*(b-c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 17:
			    cout<<a<<"/"<<"("<<b<<"+"<<c<<")"<<"="<<endl;  
			    result=a/(b+c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 18:
			    cout<<a<<"/"<<"("<<b<<"-"<<c<<")"<<"="<<endl;  
			    result=a/(b-c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 19:
			    cout<<a<<"-"<<"("<<b<<"+"<<c<<")"<<"="<<endl;  
			    result=a-(b+c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
		    case 20:
			    cout<<a<<"-"<<"("<<b<<"-"<<c<<")"<<"="<<endl;  
			    result=a-(b-c);
			    cin>>ans;
			    if(ans!=result)flag++;
			    break;
        }
			
		}
   }
   return flag;
   
}
   
