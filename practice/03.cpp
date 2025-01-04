#include<iostream>
#include<cmath>
#define pi 3.1416
using namespace std;

void SineFunction (double x ,int n){
    double xr=x*(pi/180);
    double sum =xr ,fact=1;
    int i=1;
    n=n-1;
    if(n==0){
        sum=xr;
    }
    else{
        while (i<=n){
            fact=fact*(2*i+1)*(2*i);
            sum =sum +(pow(-1,i)*pow(xr,2*i+1))/fact;
            i++;
        }
    }
    cout<<"\n The value of the sin ("<< x<<") is :"<< sum<<endl;
}
void CosineFunction (double x,int n){
 n=n-1;
 double xr=x*(pi/180);
 double fact=1,sum=1;
 int i=1;
 if(n==0){
    sum =1;
 }else{
    do{
        fact=fact*(2*i-1)*(2*i);
        sum=sum+(pow(-1,i)*pow(xr,2*i))/fact;
        i++;
    }while(i<=n)
 }
 cout<<"\n The value of cos ("<<x<<") is : "<<sum<<endl;
}
int main (){
    cout.precision(6);
    cout.setf(ios::fixed);
    char choice;
    do{
        int n;
        double x,y;
        cout<< "\n Enter the number of terms you want ot calculate for sin(x ) series (n>0) : ";
        cin >> n;
        cout<< "\n Enter the value of x for sin (x ) series (in degree ) : ";
        cin >>x;
        // SineFunction(x,n);
        CosineFunction(x,n);
        cout<< "\n If you want to run the code again then press y ";
        cin>>choice;
    }while(tolower(choice)=='y');
    return 0;
}