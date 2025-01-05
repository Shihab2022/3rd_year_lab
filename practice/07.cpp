#include<iostream>
#include <string>
using namespace std;
 void largestSmallestNum(string num,int size ,bool status){
        int i,j;
    bool isLarge=status;

    for(i=0;i<size ;i++){
        for (j=i+1 ;j<size;j++){
            if(isLarge && num[i]>num[j] ||!isLarge && num[i]<num[j] ){
             char temp=num[i];
             num[i]=num[j];
             num[j]=temp;
            }
        }
    }
    cout << "\nThe" << (isLarge ? "largest" : "smallest ")<<"value is :";

    for (int i=0;i<size;i++)
    cout <<num[i];
 }
 int main(){

    reStart: 
        int choice;
    string number;
    cout << "\n Please enter a positive number \n";
    cin >>number;
    int size =number.size();
    largestSmallestNum(number,size,true);
    largestSmallestNum(number,size,false);
    cout <<"\n If you want to check of another number then press 1 other wise 0 : \n";
    cin>> choice;
    if(choice==1)
    goto reStart;
 }