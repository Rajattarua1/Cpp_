#include <iostream>
using namespace std;
int main(){
    
int n ; 
cout<<"enter array size = ";
cin>>n;
int arr[n];
for(int i = 0 ; i<= n ; i++ ){
    cin>>arr[i];
}
for(int i = 0 ; i <= n;i++){
    cout<<arr[i]<< " ";
}
int sum = 0;
cout<<" ";
cout<<"sum of elements = ";
for(int i = 0 ; i <= n ; i++){
    sum += arr[i];
}

cout<< sum ;
    
}