//Given an array B of length N, find an array A of length N where 0≤Ai≤109 such that array C where Ci=AimodBi, 
//∀i∈{1,2,...,N} has maximum number of distinct integers.

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int q = 0;q<t;q++){
	    int n;
        cin>>n;
        vector<pair<int,int>> b;
        for(int i = 0;i<n;i++){ //how the mapping has been done 
            int bi;
            cin>>bi;
            b.push_back({bi,i});
        }
        sort(begin(b),end(b));
        vector<int> a(n);
        int want = 0;
        for(auto [bi,i]:b){   // how the mapped data is being compared 
            if(want <= bi-1){
                a[i] = want;
                want++;
            }else{
                a[i] = 0;
            }
        }
        for(auto x : a) cout<<x<<" ";
        cout<<"\n";
	}
	return 0;
}
