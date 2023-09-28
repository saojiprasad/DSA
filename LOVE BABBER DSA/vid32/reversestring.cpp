// #include<iostream>
// using namespace std;

// void reverse(string& str,int i,int n){


//     if(i==n/2){
//        return ;
//     }
    
//     swap(str[i],str[n-i-1]);
//     i++;
    
    
//     reverse(str,i,n);
//     //cout<<str<<endl;
    
// }

// int main(){
//     string str="prasad";
//     int n=str.length();
//     // int i=0;
//     // int j=n-1;
//     reverse(str,0,n);
//     cout<<str;
// }
#include<iostream>

using namespace std;



string reverse(string str, int n){

    if(n==0)
        return " ";

    return str[n-1] + reverse(str, n-1);

    

}

int main()
{
    string str="prasad";
    int n=str.length();
    
    cout<<reverse(str,n);
}