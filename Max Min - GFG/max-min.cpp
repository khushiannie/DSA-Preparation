//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int a[], int n)
    {
    	//code here.
       int max,min,sum,i;
       if(n%2==0){
           if(a[0]>a[1]){
               min=a[1];
               max=a[0];
               
           }
           else{
               min=a[0];
               max=a[1];
           }
           i=2;
       }
       else{
           min=a[0];
           max=a[0];
           i=1;
       }
       while(i<n-1){
           if(a[i]>a[i+1]){
               if(a[i]>max){
                   max=a[i];
               }
               if(min>a[i+1]){
                   min=a[i+1];
               }
           }
           else{
               if(a[i+1]>max){
                   max=a[i+1];
               }
               if(min>a[i]){
                   min=a[i];
               }
           }
           i+=2;
       }
       sum=max+min;
       return sum;
       
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends