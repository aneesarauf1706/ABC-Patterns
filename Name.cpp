#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        for(int j=1;j<=20;j++){
            if(i==1 || i==20 || j==1 || j==20){
                cout<<"* ";
            }
            else if(i==10 && j==8){
                cout<<"Aneesa";
            }
            else if(i==10 && (j>8 && j<=10)) {
                cout<<""; 
            }
            else{
                cout<<"  ";
            }
        }
        cout << endl; 
    }
    return 0;
}