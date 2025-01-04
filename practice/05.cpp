#include<iostream>
#include<cmath>
using namespace  std;
void getFactorialValue(int n){
    int fact=1;
    if(n<0)
    cout << "\n Factorial of a negative number is not exit !! \n";
else{
    for (int i=1;i<=n;i++)
    fact=fact*i;
cout << "\n Factorial of the given number is : "<<fact<<endl;
}

}
int main(){
    int n,x;
    a:
    cout <<"\nPlease enter an not negative integer number : \n";
    cin >> n;
    getFactorialValue(n);
    cout << "\n Do you want to find factorial of another number ,then press 1 other wise 0 \n";
    cin >> x;
    if(x==1)
    goto a;
return 0;

}