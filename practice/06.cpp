#include<iostream>
using namespace std;

void ascendDescending(int *a, int n ,bool status){
    int temp , i,j;
     bool isAscending = status ;
    for (i =0;i<n;i++){
        for (j=i+1;j<n;j++){
            if((isAscending && a[i] > a[j]) || (!isAscending && a[i] < a[j])){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

   cout << "\nThe " << (isAscending ? "ascending" : "descending") << " order is: ";
    for (i=0;i<n;i++)
    cout << a[i]<<" ";
}

int main (){
    reStart:
    int n,x;
    cout << "\n Enter the length of the arrray : \n";
    cin >>n;
    int a[n];
    cout<<"\n Please enter the value of the arrray : \n";
    for (int i =0;i<n;i++)
    cin >>a[i];
ascendDescending(a,n,true);
ascendDescending(a,n,false);
cout << "\n Do you want to check with new value then press 1 otherwise press 0 \n";
cin >> x;
if(x==1)
goto reStart;
}