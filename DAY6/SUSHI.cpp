
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    // Write C++ code here
    int n,m;
    cout<<"Enter the N AND M:";
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    cout<<"ENTER ARRAY 1 VALUE ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        
    }
    cout<<"Enter ARRAY 2 VALUE";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int a = n;
    int b = m;
    
    sort(arr1,arr1+a);
    sort(arr2,arr2+b);
   
    int i = 0; 
    int j = 0; 
    int count = 0;

    
    while(i<n && j<m){
        if(arr2[j]<2*arr1[i]){
            count++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout<<count;
    cout<<endl;
    return 0;
}