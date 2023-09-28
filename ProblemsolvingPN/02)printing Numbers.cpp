#include<iostream>
using namespace std;
char words[][10]={"zero","first","second","third","fourth","fifth","sixth","seventh","eight","nine"};

void printspelling(int n){
    if(n==0){
        return;
    }

    //rec case first print the spellling of 204
    int digit=n%10;
    printspelling(n/10);
   
    cout<<words[digit]<<"--->";
    return;


}
int main(){
    int n;
    cin>>n;
    printspelling(n);
    
}