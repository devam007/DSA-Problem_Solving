#include <iostream>
using namespace std;
int sum=0;
//1. sum of N numbers
int sumofN(int n){
    if(n==0){
        return sum;
    }
    sum += n;
    return sumofN(n-1);
}
//2. Factorial of N number 
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
//3. Fibonacci series till N number
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
//4. Printing reverse number
void revnumber(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    revnumber(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;
    int sumofn =sumofN(n);
    int factorial=fact(n);
    int fibonacci=fib(n);
    revnumber(n);
    cout<<endl;
    cout<<sumofn<<endl;
    cout << factorial << endl;
    cout << fibonacci << endl;
}
