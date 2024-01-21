#include <iostream>

using namespace std;

int main(){
    int size,min=INT_MAX,min_index=0,max=INT_MIN,max_index=0;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }

    int temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    
    
    return 0;
}