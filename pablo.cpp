#include<iostream>
#include<conio.h>
#include<windows.h>
#include<String.h>
using namespace std;
int main()
{
	int count=0;
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		cout<<j;
		for(int s=1;s<=count;s++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		cout<<j;
		cout<<endl;
		count+=2;
	}
	
	count=6;
	
	for(int i=2;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<j;
		for(int s=1;s<=count;s++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		cout<<j;
		cout<<endl;
		count-=2;	
	}
getch();
return 0;
}