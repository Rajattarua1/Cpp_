#include <iostream>
using namespace std;
int main(){


    int arr[] =  {1,2,3,45,6,7};
    int n = sizeof(arr)/4;
    int x ; 
    cout<<"enter the number you want to search = ";
    cin>>x;
    bool flag = false ;
    for(int i = 0 ; i<= n ; i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }

    if(flag==true) cout << x << " is present";
    else cout << x << " is not present";



    

}