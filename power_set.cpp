#include <bits/stdc++.h>
using namespace std;

void powerSet(string input,string output){
    if(input.length() == 0){
        cout<<output<<" ";
        return;
    }else{
        string op1 = output;
        string op2 = output;
        op2.push_back(input[0]);
        input.erase(input.begin() + 0);
        powerSet(input,op1);
        powerSet(input,op2);
        return;
    }
}

int main(){
    string in = "abc";
    // cin>>in;
    string out = "";
    powerSet(in,out);
    return 0;
}