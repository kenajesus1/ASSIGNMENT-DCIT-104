#include <iostream>

using namespace std;
//finding all prime numbers from 1 to 100//
int main()
{

int i,k,t;
for(i=1;i<100;i++){
    t=0;
    for(k=2;k<i;k++){
        if(i%k==0){
            t=1;
            break;
        }

    }
    if(t==0)
        cout<<i<<endl;
}






    return 0;
}
