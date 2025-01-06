#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,d,e,f,g,h,i,j,k,l;
    cout<<"\n Enter the coefficients of the equation following instraction : ";
    cout << "\n Equation 1 (a1x+b1y+c1z=d1) ,a1,b1,c1,d1 : \n";
    cin>>a>>b>>c>>j;
    cout << "\n Equation 2 (a2x+b2y+c2z=d2) ,a2,b2,c2,d2 : \n";
    cin>>d>>e>>f>>k;
    cout << "\n Equation 3 (a3x+b3y+c3z=d3) ,a3,b3,c3,d3 : \n";
    cin>>g>>h>>i>>l;
    double DetCF=a*(e*i-f*h)-b*(d*i-g*f)+c*(d*h-e*g);
    if(DetCF==0){
          cout << "The system doesn't have a unique solution.\n";
    }else{
        double DetX1=j*(e*i-f*h)-b*(k*i-l*f)+c*(k*h-l*e);
        double DetX2=a*(k*i-f*l)-j*(d*i-g*f)+c*(d*l-g*k);
        double DetX3=a*(e*l-h*k)-b*(d*l-g*k)+j*(d*h-g*e);
        double x1=DetX1/DetCF;
        double x2=DetX2/DetCF;
        double x3=DetX3/DetCF;

        cout<<"\n The Solution of those equation is : \n";
        cout<< "x1 = "<< x1<<endl;
        cout<< "x2 = "<< x2<<endl;
        cout<< "x3 = "<< x3<<endl;
    }
    return 0;

}