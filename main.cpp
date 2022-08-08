#include <iostream>

using namespace std;
// Satisfied by KENA JESUS//
int main()
{
    int k,p,a,sum=0;
    cout<<" THIS PROGRAM FINDS ALL PRIME NUMBERS BETWEEN 1 AND ANY NUMBER YOU ENTER "<<endl;

    cout <<" Enter the number "<<endl;
    cin >>k;
    cout<< "This are your Prime Numbers"<<endl;
    for(p=1;p<k;p++){
        for(a=2;a<p;a++){
            if(p%a==0){
                break;
            }
        }
        if(p==a){
            sum=sum+p;
            cout <<p<<endl;
        }
    }
    cout <<"This the sum of all Prime Numbers between 1 and "<<k<< "="<<sum;





    return 0;
}
