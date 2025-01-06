#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class RootOfQuadratic
{
private :
    double a,b,c;
    double root ,disc ,r1,r2,imp,rep;
public :
RootOfQuadratic()
{
    cout<< "\nEnter the value of a,b,c quadratic equation : \n";
    cin>>a>>b>>c;
}
void ROOT(){
    if(a==0){
        cout << "\n This is not quadratic equation \n";
        root=(-c)/b;
        cout <<"\nThe root of this equation is : "<<root<<endl;
    }
    else{
        disc=b*b-4*a*c;
        if(disc==0){
            cout<<"\nThe equation has two equal roots .\n";
            root=-b/(2*a);
            cout<<"Root-1 :"<<root<<endl;
            cout<<"Root -2 : "<<root<<endl;
        }
        else if(disc >0){
            cout<<"\nThe equation has two real unequal roots \n";
            r1=(-b+sqrt(disc))/(2*a);
            r2=(-b-sqrt(disc))/(2*a);
              cout<<"Root-1 :"<<r1<<endl;
            cout<<"Root -2 : "<<r2<<endl;
        }
        else{
               cout<<"\nThe equation has two imaginary unequal roots \n";
               disc =-disc;
               rep=-b/(2*a);
               imp=sqrt(disc)/(2*a);
               cout<<"Root-1 : "<<rep<<" +"<<imp<<"i"<<endl;
               cout<<"Root-1 : "<<rep<<" -"<<imp<<"i"<<endl;
        }
    }
}

};
int main(){
    reStart:
    cout.precision(3);
    cout.setf(ios::fixed);
    int choice;
    RootOfQuadratic rq;
    rq.ROOT();
      cout << "\nDo you want to find the root of another quadratic equation? (1/0) : ";
        cin >> choice;
        if(choice==1)
        goto reStart;

}


/*
Basic structure of OOP;
#include <iostream>
#include<cmatch>
#include<iomanip>
using namespace std ;

class Quardatic{
private :
    double a,b,c;
    double root,r1,r2,disc,imp,rep;
public :
Quardatic()
void ROOT(){
what ever you need you can write here 
}

};

int main(){

restart:
Quardatic qr;
qr.Root();
}
*/