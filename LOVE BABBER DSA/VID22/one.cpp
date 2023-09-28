#include<iostream>
using namespace std;
 char lower(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        char temp = ch- 'A'+'a';
        return temp;
            }
}
bool palindrom(char arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
         if(arr[s]!=arr[e]){
            //cout<<"Not a Palindrom";
            return 0;
            break;
         }
         else{
            s++;
            e--;
           // cout<<"This is Palindrom";
         }
  //cout<<"This is Palindrom";

    }
//cout<<"This is Palindrom";
return 1;
}
int reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    
}
int get(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        
        count++;
    }
    return count;
}

int main(){

    char arr[100];
    cout<<"Enter your name:-";
    cin>>arr;    

    cout<<"YOUR NAME IS-";
    cout<<arr<<endl;
    int leg=get(arr);
    cout<<"Length of the Array is :-"<<get(arr)<<endl;
        reverse(arr,leg);
    cout<<"Reverse String is:-";
    cout<<arr<<endl;

    cout<<"This is Palindrom or Not "<<palindrom(arr,leg)<<endl;
    cout<<lower('C');


  //  cout<<sizeof(arr);
}