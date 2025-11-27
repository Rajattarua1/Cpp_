#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    cout<<"enter the " << n << "elemnts: \n";
    for(int i = 0 ; i< n ; i++){
        cin >> arr[i];
    }

    int min = arr[0];
    for(int i=0 ; i < n ; i++ ){
        if(arr[i]<min){
            min = arr[i];
        }
    }
     cout << "the minimum element is : " << min;
    }