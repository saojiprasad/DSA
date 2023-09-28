#include<iostream>
using namespace std;

int sumofdigit(int n){

    if(n==0){
        return 0;
    }
    
    // int div=n/10;
    // int rem=n%10;
    return sumofdigit(n/10)+ n%10;
  ///  return ans;


}

int main(){
    int n;
    cin>>n;
    cout<<"You have Enter ---->"<<n<<endl;
    cout<<"The Sum is---->";
    cout<<sumofdigit(n);

}