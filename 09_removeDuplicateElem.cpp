#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<< "enter the size of array : ";
    cin>>n;
    cout<< "enter the sorted array :" ; 
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    if(n==0) return 0;


    int j = 0; /// pointer

    for(int i = 0 ; i < n ; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }

    cout<<"the sorted array"<<endl;
    for(int i =0 ; i <= j ; i++){
        cout << arr[i] << " ";
    }


}
    