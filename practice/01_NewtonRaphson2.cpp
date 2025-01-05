#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
#define t 0.0000001
double f(double x){
    return x*exp(x)-1;
}
double ff(double x){
    return x*exp(x)+exp(x);
}

void NewtonRap(double x1){
    double x0=0;
    int i=1;
    cout << "\n According to Newton Method :\n";
    while(abs(x1-x0)>=t){
        x0=x1;
        if(ff(x0)==0){
            cout<<"\n Mathematical Error . \n";
            exit(0);
        }
        x1=x0-f(x0)/ff(x0);
        cout<<"\n At step - "<<i<<"x"<<"="<<x1<<endl;
        i++;
    }
    cout <<"\n The required root of the function is :"<<x1<<endl;
    cout<<"The number of the times of iteration was continued is :"<<i-1<<endl;
}
int main(){
    cout.precision(9);
    cout.setf(ios::fixed);
    double a,b,d,y;
    cout<<"\n Please enter the initial guess for Newton Method : \n";
    cin>>d;
    NewtonRap(d);
}