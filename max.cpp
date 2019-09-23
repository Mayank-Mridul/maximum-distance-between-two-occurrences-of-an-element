#include<bits/stdc++.h>
using namespace std;
int maxDistance(int arr[], int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<maxDistance(arr,n)<<endl;
    }
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// your task is to complete this function
int maxDistance(int arr[], int n)
{   
    int max=0;
    int p=0,q=0;
    
    if(n==1){
        return 0;
    }
    
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
                p = j;
                q = i;
            }
        }
        
        if((p-q)>max)
        max = p-q;
    }
    
    //printf("%d\n", max);

    return max;
    
}