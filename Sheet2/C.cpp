#include <iostream>
using namespace std;

int main(){
    int arr_elements;
    cin >> arr_elements;
    int arr[arr_elements];
    for (int i = 0; i < arr_elements; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < arr_elements; j++)
    {
        if(arr[j] <= 10){
            cout << "A[" << j << "] = " << arr[j] << endl;
        }
    }
    return 0;
}