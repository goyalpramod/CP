#include <bits/stdc++.h>
using namespace std;

// Euler's method to get gcd
int gcdnum(int a, int b){
    if (b == 0){
        return a;
    }else{
        gcdnum(b,a%b);
    }
}

// inbuilt function __gcd() also exists

int main(){
    int arr[] = {28,7,14,45};
    int isGCD = 0;
    int gcd = 1;
    for (int i = 1; i <= *min_element(arr,arr+4); i++)
    {
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if(arr[j]%i == 0){
                isGCD = 1;
            }else{
                isGCD = 0;
                break;
            }       
        }
        if(isGCD){
            gcd = i;
        }
    }
    cout<<"The GCD is "<<gcd<<"\n";

    int num1 = 14;
    int num2 = 10;
    int ans = gcdnum(num1,num2);
    cout<<"The ans is "<<ans<<endl;  
    return 0;
}