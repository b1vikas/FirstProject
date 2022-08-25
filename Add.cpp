#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,c,i=1,sum=0,product=1;
    cin>>n;
    cin>>c;
    if(n>=1 && n<=12)
    {
        if(c==2)
    {
       	while(i<=n)
       	{
       	    sum+=i;
            i++;
     	}
        cout<<sum;
    	
    }
    
}
