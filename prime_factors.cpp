#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
typedef long long ll;
typedef pair<int,int> pi;

void prime_factors(vi &arr,int n){
    while(n%2==0){
        arr.push_back(2);
        n/=2;
    }
    for(int i = 3;i*i<=n;i+=2){
        while(n%i==0){
            arr.push_back(i);
            n/=i;
        }
    }
    if(n>2){
        arr.push_back(n);
    }
}

void display(vi &arr){
    for(int i =0; i<arr.size(); i++) cout<<arr[i]<<" "; 
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 17;
    vi arr;
    prime_factors(arr,n);
    display(arr);
    return 0;
}