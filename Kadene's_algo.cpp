#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,-3,-4,5};
    int global_max = INT_MIN;
    int local_max = 0;
    for (int i = 0; i < 5; i++)
    {
        local_max = max(local_max + arr[i],arr[i]);
        if(local_max>global_max){
            global_max = local_max;
        }
    }
    cout<<global_max;
    return 0;
}