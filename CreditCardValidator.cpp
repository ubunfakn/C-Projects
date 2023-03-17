
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int flag=0;
	cout<<"Please Enter Your Credit Card Number"<<endl;
	cin>>str;
	int len=str.length();
	if(len<13 || len>19)
	{
	    cout<<"Invalid Credit Card Number.. Please Enter Valid Credit Card Number"<<endl;
	}else{
	unsigned long long p;
	p=stoll(str);
	try
	{
	     p=stoll(str);
	     throw;
        }catch(...)
        {
             cout<<"Credit Card Number cannot be AlphaNumeric"<<endl;
        }
	int arr[len];
	for(int i=0;i<len;i++)
	{
	     arr[i]=p%10;
	     p=p/10;
	}
	int low=0,high=len-1;
	while(low<high)
	{
	    int h=arr[low];
	    arr[low]=arr[high];
	    arr[high]=h;
	    low++;
	    high--;
	}
	for(int i=0;i<len;i+=2)
	{
	    arr[i]=arr[i]*2;
	    int j=arr[i];
	    int s=j%10;
	    j=j/10;
	    s+=j%10;
	    arr[i]=s;
	    s=0;
	    j=0;
	}
	int a=0;
	for(int i=0;i<len;i++)
	{
	    a=a+arr[i];
	}
	if(a%10==0)
	{
	    if(arr[0]==4)
	    {
	        cout<<"You are holding Visa Card and it is Valid...."<<endl;
	    }
	    if(arr[0]==5)
	    {
	        cout<<"You are holding Master Card and it is Valid...."<<endl;
	    }
	    if(arr[0]==6)
	    {
	        cout<<"You are holding RuPay Card and it is Valid...."<<endl;
	    }
	    else
	    {
	        cout<<"Your Credit Card type is unknown but it is valid..."<<endl;
	    }
	}
	else
	{
	    cout<<"Your Credit Card is invalid"<<endl;
	}
    }
	return 0;
}
			

