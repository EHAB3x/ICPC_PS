#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int size;
    cin >> size;    
    int arr[size];
    //take array
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + size);

    //left side
    for (int j = 0; j < size/2; j++)
    {
        cout << arr[j] << " ";
    }
    //mirror left side 
    for (int k = (size / 2) - 1; k >= 0; k--)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    //right side
    for (int x = size - 1; x >= size / 2; x--)
    {
        cout << arr[x] << " ";
    }
    //mirror right side
    for (int z = size / 2 ;z < size; z++)
    {
        cout << arr[z] << " ";
    }
    
    return 0;
}