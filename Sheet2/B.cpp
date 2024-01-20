#include <iostream>
using namespace std;

int main(){
    int arr_elements, number;
    bool found = true;
    cin >> arr_elements >> number;
    int arr[arr_elements];
    for (int i = 0; i < arr_elements; i++)
    {
        found = true;
        cin >> arr[i];
        if (arr[i] == number)
        {
            cout << i;
            break;
        }else{
            found = false;
        }
    }
    if(!found) cout << "Not Found";
    return 0;
}