#include <bits/stdc++.h>
using namespace std;
/*
bool checkpalindrome(string s,int i){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-1-i]) return false;
    return checkpalindrome(s,i+1); 
}

int sum;

int sumofarr(int n,int arr[],int i){
if(i==n-1) return sum;
sum+=arr[i];
return sumofarr(n,arr,i+1);
}

bool sorted(int arr[],int i){
    if(i+2==sizeof(arr)) return true;
    if(arr[i]>arr[i+1]) return false;
    return sorted(arr,i+2);
}
*/
//Given an integer num, repeatedly add all its digits until the result has only one digit.
int sumofdigit(int n){
    if(n/10==0) return n;
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sumofdigit(sum);
}
/*
int coun;
int p=2;

int isprime(int n){
    if(p==n && coun==0) return 1;
    if(p==n && coun>0) return 0;
    if(n%p==0) {
        coun++;
        }
    p++;    
    return isprime(n);
}
*/
int main(){
    /*
    string s;
    cin>>s;
    bool ans = checkpalindrome(s,0);
    cout<<ans<<endl;


    int arr[]={1,2,3,5,7,9,17,3,56,10};
    int sum=sumofarr(10,arr,0);
    cout<<sum<<endl;
    
   
    int a[]={1,2,6,10,40,0};
    bool issort=sorted(a,0);
    cout<<issort<<endl;
    
    int c=45;
    bool ifprime=isprime(c);
    cout<<ifprime<<endl;
    */

    int number=7;
    int sumofdigits=sumofdigit(number);
    cout<<sumofdigits<<endl;

return 0;
}