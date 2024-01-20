#include <iostream>
using namespace std;

int main(){
    int arr_elements,min_ele = INT_MAX,min_index;
    cin >> arr_elements ;
    int arr[arr_elements];
    for (int i = 0; i < arr_elements; i++)
    {
        cin >> arr[i];
        if (arr[i] < min_ele)
        {
            min_ele = arr[i];
            min_index = i;
        }
    }
    cout << min_ele << " " << min_index + 1 <<endl;
    return 0;
}