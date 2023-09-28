//Find the subtraction of the product and sum of the given number 
/*
#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
int p=1;
int s=0;
while(n!=0){

int rem=n%10;
p=p*rem;
s=s+rem;
n=n/10;

}

int ans=p-s;
cout<<ans;

}
#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

int count=0;
while(n!=0){
    if(n&1){
        count++;
    }
    n=n>>1;
    cout<<count;
}


}*/
#include<iostream>
using namespace std;
int main(){

int n;
int c;

cin>>n;
while(n!=0){
     c=n%2;

     n=n/2;
     
     cout<<c;
}



}