#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return ((i-1)/2);
    }
    void insert(int x){
        size=size+1;
        int index=size;
        arr[size-1]=x;
        for(int i=size-1;i!=0&&arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }


};

int main(){
    heap h;
    h.insert(5);
    h.insert(15);
    h.insert(20);
    h.insert(40);
    h.insert(50);
    h.insert(100);
    h.insert(25);
    h.insert(45);
    h.insert(12);
    h.print();
}