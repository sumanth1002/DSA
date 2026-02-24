#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int flag=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                c++;
            }
        }
        if(flag==0)
        break;
    }
    cout<<"Array is sorted in "<<c<<" swaps.\n";
    cout<<"First Element: "<<arr[0];
    cout<<"\nLast Element: "<<arr[n-1];
    return 0;
}