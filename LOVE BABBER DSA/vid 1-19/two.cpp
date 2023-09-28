/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j;
            j=j+1;
        }
     cout<<endl;
     i=i+1;
    }
}*/
//PENDING SOLVE CODE WITH HELP VIDEO 4 17:30 HW
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int count=1;
    
    while(row<=n){
        int col=1;
        cout<<row;
       // int v=row;
        while(col<=row){
            if(count>row){
        cout<<count;
            }
       // v=v+1;
        count=count+1;
        col=col+1;
    }
    row=row+1;
    cout<<endl;
    }
}

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            char ch = 'A' - i + 1;
            cout<<ch;
            j=j+1;
        }
  i=i+1;
  cout<<endl;

    }
}*/