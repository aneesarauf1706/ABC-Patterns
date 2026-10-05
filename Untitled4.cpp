#include<iostream>
using namespace std;
int main(){
    int count=0;
    for(int i=5;i>=1;i--){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch++;
        }
        for(int s=1;s<=count;s++){
            cout<<" ";
        }
        char Ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<Ch--;
        }
        cout<<endl;
        count+=2;
    }
    
    count=6;
    for(int i=2;i<=5;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch++;
        }
        for(int s=1;s<=count;s++){
            cout<<" ";
        }
        char Ch='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<Ch--;
        }
        cout<<endl;
        count-=2;	
    }
    
    return 0;
}