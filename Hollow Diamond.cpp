#include<iostream>
#include<conio.h>
#include<windows.h>
#include<String.h>
using namespace std;
int main()
{   int count=0;
	for(int i=1;i>=10;i++)
	{   int a=1;
		for(int j=1;j<=i;j++)
		cout<<"1";
		a++;
		for(int s=1;s<=count;s++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		cout<<"1";
		cout<<endl;
		count+=1;
	}
getch();
return 0;
}