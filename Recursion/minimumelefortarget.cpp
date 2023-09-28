#include<iostream>
using namespace std;

int solve(vector<int>&v,int target){
    if(target ==0){
        return 0;
    }
    if(target<0){
            return INT32_MAX;
        }

    int mini=INT32_MAX;

    for(int i=0;i<v.size;i++){
        int ans=solve(v,target-arr[i]);
        if(ans!=INT32_MAX){
            mini=min(ans+1,mini);
        }
    }
    return mini;



}

int main(){
    vector<int> v{1,2};
    int target=5;

    int ans=solve(v,5);
    cout<<ans;
}