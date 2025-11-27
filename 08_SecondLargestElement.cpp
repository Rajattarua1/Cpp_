#include <iostream>
using namespace std;
int main(){
    
     int arr[]={1,4,3,-5,-4,8,6};
     int n = sizeof(arr)/4;
     int mx = INT_MIN;
     int smx = INT_MIN;
     for(int i = 0 ; i < n ; i++){
        if(mx < arr[i]) mx = arr[i];
     }

     for(int i = 0 ; i < n ; i++){
        if(smx < arr[i] &&  arr[i]!=mx) smx = arr[i];
     }


     cout << " lagest element : \n" << mx << " " << " second largest : " << smx ;

    
    }