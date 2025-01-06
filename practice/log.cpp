#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double SumOfLog(double x,double N){
    if(x<=-1){
        cout << "Error: The series is not valid for x <= -1." << endl;
        return NAN;
    }
    double term=x;
    double sum=term;
    for(int n=2 ;n<N;n++){
        term*=-x*(1.0/n);
        sum+=term;
    }
    return sum;

}
int main(){
        double x;
    int N;

    cout << "Enter the value of x (for log(1 + x)): ";
    cin >> x;

    cout << "Enter the number of terms to sum (N): ";
    cin >> N;
   double result= SumOfLog(x,N);
   cout << "sum (N): "<<result<<endl;
}