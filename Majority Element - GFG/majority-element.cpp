//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
     unordered_map<int,int>m;
        for(int i=0;i<size;i++)
        {
            m[a[i]]++;
        }
        for(int i=0;i<size;i++)
        {
            if(m[a[i]]>size/2)
            return a[i];
        }
        return -1;
    }
    
    // int count=0;
    // int x=0;
    
    // for(int i=1;i<=size;i++){
    //     if(count==0){
    //         a[i]=a[x];
    //     }
    //     else if(a[i]==a[x]){
    //         count+=1;
    //     }
    //     else{
    //         count-=1;
    //     }
    // }
    // return a[x];
    // }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends