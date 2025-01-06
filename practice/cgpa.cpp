#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double getCGPA(double mark){
    if(mark >=80) return 4.00;
    else if(mark >=75) return 3.75;
    else if(mark >=70) return 3.50;
    else if(mark >=65) return 3.25;
    else if(mark >=60) return 3.00;
    else if(mark >=55) return 2.75;
    else if(mark >=50) return 2.50;
    else if(mark >=45) return 2.25;
    else if(mark >=40) return 2.00;
    else return 0.00;
}

int main(){
    choice:
    double mark,mark320,mark321,x;
    double cgpa=0.0;
    cout<< " \n Enter the mark of the all course\n";
    for(int i=0;i<9;i++){
        getMarkAgain:
        cout<<"\n Enter the mark for the course A.Math-30"<<i+1<<endl;
        cin>>mark;
        if(mark >100 || mark <0){
            cout<<"\n Invalid mark \n";
            goto getMarkAgain;
        }
        cgpa=cgpa + 4*getCGPA(mark);

    }
       aa:
        cout<<"\n Enter the mark for the course A.Math-320 \n";
        cin>>mark320;
        if(mark320 >100 || mark320 <0){
            cout<<"\n Invalid mark \n";
            goto aa;
        }
        cgpa=cgpa + 4*getCGPA(mark320);

           ab:
        cout<<"\n Enter the mark for the course A.Math-321 \n";
        cin>>mark321;
        if(mark321 >50 || mark321 <0){
            cout<<"\n Invalid mark \n";
            goto ab;
        }
        mark321 =2.0*mark321;
        cgpa=cgpa + 4*getCGPA(mark321);
double result=cgpa/44.0;
if(getCGPA(mark320) <2.00 || getCGPA(mark321)<2.00 || result <2.00) {
            cout << "\nSorry ..You failed...!\n";
            cout<<"\nYour CGPA is : 0.00";
            cout << "\nBest of luck for the next time..\n";
        }
        else
        {
            cout << "\nCongratulations ..You passed...!\n";
            cout << "\nYour CGPA is: " << result << endl;
        }

cout<< "\n If you check another student mark then press 1 \n";
cin>>x;
if(x==1)
goto choice;
}