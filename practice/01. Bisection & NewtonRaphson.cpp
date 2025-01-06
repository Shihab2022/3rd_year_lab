#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define tol 0.0000001

double f(double x){
    return pow(x,3)-pow(x,2)-1;
}
double ff(double x){
    return 3*pow(x,2)-2*x;

}
void NewtonRap(double x1){
    double x0=0;
    int i =1;
    while(abs(x1-x0)>=tol){
        x0=x1;
        if(ff(x0)==0){
            cout << "\n Mathematical error \n";
            exit(0);
        }
        x1=x0-f(x0)/ff(x0);
        i++;
    }
    cout << "\n The required root of the function is "<< x1<<endl;
    cout<<"The number os time iteration was "<< i-1<<endl;
}
void BisectionMethod(double a,double b){
    if(f(a)*f(b)>=0){
        cout <<"\n According to the bisection method the have no root between this interval : ";
    }
    else{
        double c=(a+b)/2.0;
        if(f(c)==0){
            cout<<"\n The root of this give interval is "<< " "<< c<<endl;
        }
        else{
            while(fabs(a-b)>=tol){
                if(f(a)*f(c)<0)
                b=c;
            else
            a=c;
        c=(a+b)/2;
            }
                        cout<<"\n According to the bisection method : \n";
            cout<<"The root of the equation between the interval is : "<<c<<endl ;
        }
    }
}

int main (){
    reStart:
    double a ,b,c;
    int x;
    cout<< "\n Enter the value of interval for the inteval [a,b] for Bisection method : ";
    cin>> a>>b;
    BisectionMethod(a,b);
    cout <<"\n Enter the initial guess for Newton Rep : \n";
    cin>>c;
    NewtonRap(c);

       cout << "\n If yes then please press 1 otherwise press 0:\n";
    cin >> x;
    if (x == 1)
        goto reStart;
}