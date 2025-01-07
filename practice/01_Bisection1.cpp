#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
#define tola 0.0000001

double fun(double x){
    return 3*x-cos(x)-1;
    // return pow(x,3)-2*x-5;
}

void bisection (double a,double b){
    if(fun(a)*fun(b)>=0){
cout<<"\n According to the bisection method there have no root between this interval \n";
    }else{
        double c=(a+b)/2;
        if(fun(c)==0){
            cout<<"\n According to bisection method the root of this equation is :\n";
             cout << c<<endl;
        }
        else{
            while(fabs(a-b)>=tola){
                if(fun(a)*fun(c)<0)
                 b=c;
                 else
                 a=c;
                 c=(a+b)/2.0;
                
            }
            cout<<"\n According to the bisection method : \n";
            cout<<"The root of the equation between the interval is : "<<c<<endl ;
        }
    }
}
int main(){
    double a,b,c;
    cout<<"\nEnter the interval for biesction method :\n";
    cin>>a>>b;
    bisection(a,b);

}

/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define tola 0.0000001

double f(double x){
    return 3*x-cos(x)-1;
}
void bisection(double a, double b){
if(f(a)*f(b)>=0){
    cout<<"\n According to the bisection method the have not root between this interval \n";

}
else{
    double c=(a+b)/2;
    if(f(c)==0){
       cout<<"\n According to bisection method the root of this equation is :\n";
             cout << c<<endl;
    }else{
        while (fabs(a-b)>=tola){
            if(f(a)*f(c)<0){
                b=c;
            }
            else{
a=c
            }
            c=(a+b)/2.0;
        }
                    cout<<"\n According to the bisection method : \n";
            cout<<"The root of the equation between the interval is : "<<c<<endl 
    }}}*/