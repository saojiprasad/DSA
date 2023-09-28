#include<iostream>
using namespace std;


void print(int *arr,int length)
{
    for(int i=0;i<length;i++){
        cout<<arr[i]<<"--->";
    }
}
void changearr(int *arr,int i,int val,int length){
        if(i==length){
            print(arr,5);
            return; 
        }

        arr[i]=val;
        changearr(arr,i+1,val+1,5);
        // print(arr,5);
        arr[i]=arr[i]-2;
}
int main(){
    int * arr= new int[5];
    changearr(arr,0,1,5);
    print(arr,5);

}