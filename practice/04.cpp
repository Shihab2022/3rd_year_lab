#include<iostream>
using namespace std;
void checkPrime(int n){
    if(n<1){
        cout<<"\n The Number is not prime number ... \n";
    }
    else{
        int flag =0;
        for (int i=2 ;i<n;i++){
            if(n%i==0){
                flag++;
                break;
            }
        }
    if(flag==0){
        cout <<"\n The number is prime number ...\n";
    }else{
        cout << "\n The number is not prime number ... \n";
    }
    }
}
int main (){
    int n;
    char choice ;
    do{
        cout << "\n Enter a number to check : ";
        cin >> n;
        //with function 
        //! checkPrime(n);

        //without function 
        bool isPrime=true;
        if(n<=1){
cout<< "\n This number is not prime .... \n";
        }
        else{
            for (int i=2;i<n;i++){
                if(n%i==0){
isPrime=false;
break;
                }

            }
        }
        if(isPrime)
        cout << "\nThe number is a prime number ... \n";
    else
    cout<<"\nThe number is not prime number \n";

        cout << "\n Do you want to run the code again ? \n";
        cout << "Press Y/y for yes and press N/n for no ... \n";
        cin >> choice;
    } while(tolower(choice) == 'y');
    return 0;
}