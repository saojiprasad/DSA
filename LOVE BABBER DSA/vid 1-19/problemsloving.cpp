/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;123
    int a=0;


    while(n!=0){
        if((ans>INT32_MAX/10)||(ans<INT32_MIN/10)){
            return 0;
        }
        a=n%10;

        ans=ans*10+a;

        n=n/10;



    }
    cout<<ans;

}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
  int b=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char a='A'+b-1;
            cout<<a;
            j++;
            b++;
            
        }
       i++;
       cout<<endl;

    }
*/

#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
int n;
cin>>n;
int a;
for(int i=0;i<30;i++){
    a=pow(2,i);
    if(a==n){
        cout<<"ok";

    }
    
}

    
    
}