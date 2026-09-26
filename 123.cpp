#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int count=5;
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
		   if(i==j || j==count){
		cout<<j;}
		else
		cout<<" ";
	}
	cout<<endl;
	count--;
}
	return 0;
}
