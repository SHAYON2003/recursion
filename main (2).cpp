/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int sum(int n){
     //base case
     if(n==0)
     return 0;
    
    return n+sum(n-1);
    
    
}

int main()
{
   int n;
   cin>>n;
   cout<<sum(n);

    
}
