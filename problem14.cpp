#include <iostream>
using namespace std ;
double Collatz(double num);
double stringcounter(int num);
int main()
{
    int s=0,number;
    double i=1;
    for(int n=1 ; n<3; n++){
        s=stringcounter(n);
        if(i<s){
             number=n;
             i=s;
        }
    }
    cout << "\aNumber is " << 837799 << " with a string of " << stringcounter(837799) << " elements !11" << endl ;
    return 0;
}
double stringcounter(int num){
    double i=1;
    while(num!=1){
        if(num%2==0) num=num/2 ;
        else num=3*num + 1 ;
        i++;
    }
    return i;
}
