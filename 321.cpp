#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int count=1;
	for(int i=5; i>=1; i--)
	{
		for(int j=5; j>=1; j--)
		{
		   if(i==j || j==count){
		cout<<j;}
		else
		cout<<" ";
	}
	cout<<endl;
	count++;
}
	return 0;
}
