#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];

    //take the array
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];           
    }
    
    sort(arr, arr + size);

        //ascending
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;

        //descending
        for (int i = size - 1; i >= 0; --i)
        {
            cout << arr[i] << " ";
        }
    

    return 0;
}