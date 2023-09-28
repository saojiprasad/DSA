#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int T,N,maxsum;
	    cin>>T>>N>>maxsum;
	    int count=0;
	    
	        int ans=maxsum%N;
	        int anss=maxsum/N;
	        if(anss>T)
	            anss=T;
	            
	       if(N>maxsum){
	           cout<<0<<endl;
	           break;
	       }
	        
	       int orisum=anss*N*N;
	       int remsum=ans*ans;
	       
	       cout<<(orisum+remsum)<<endl;
	       
	         
	    
	    
	    
	    
	}
	return 0;
}
