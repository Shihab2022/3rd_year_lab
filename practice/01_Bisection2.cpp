#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ;
#define tola 0.00000001

double func(double x){
    return x*exp(x)-1;
}
void bisectionMethod(double a, double b){
    if(func(a)*func(b)>=0){
        cout<<"\n There have no root between the given interval : \n";
    }
    else{
        double c=(a+b)/2.0;
        if(func(c)==0){
            cout<<"\n The root of the given interval is :"<<c<<endl;
        }else{
            while(fabs(a-c)>=tola){
                if(func(a)*func(c)<0)
                b=c;
            else
            a =c;
        c=(a+b)/2.0;
            }
            cout << "\n Accroding to the Bisection method:\n";

            cout << " The root of the equation between the given interval is: " << c << endl; 
        }
    }
}

int main(){
    reStart:
    double a,b;
    int x;
    cout << "\n Enter the interval for bisection method : a and b :";
    cin>> a>>b;
    bisectionMethod(a,b);
    cout<<"\n Are you want to check with new value then press 1 : ";
cin>>x;
if(x==1)
goto reStart;

}