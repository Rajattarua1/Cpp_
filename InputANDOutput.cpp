#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,34,5,6,7,8,9,90,10};
    int n = sizeof(arr)/sizeof(int);
   
    for(int i = 0 ; i <= n-1 ; i++){

        cout<<arr[i]<<" ";

    }
}