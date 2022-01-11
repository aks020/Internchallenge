#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   double t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    
	    double ans1 = ((t1*t1)/(r1*r1*r1));
	    double ans2 = ((t2*t2)/(r2*r2*r2));
	  
	    if(ans1 == ans2)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}






