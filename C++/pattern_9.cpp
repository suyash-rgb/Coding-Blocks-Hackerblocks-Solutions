#include<iostream>

int main()
{
    for(int i=1; i<=5; i++){
        for(int j=0; j<5-i; j++){
            std::cout<<"  ";
        }
        for(int k=0; k<2*i-1; k++){
           if(k%2==0){
               std::cout<<"* ";
           }
           else{
               std::cout<<"! ";
           }
        }

        std::cout<<"\n";
    }

    return 0;
}