#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int size;
    bool is_palindrome = true;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int  j = 0; j < size / 2; j++)
    {
        if (arr[j] != arr[size - 1 - j]){
            is_palindrome = false;
            break;
        }
    }
    
    if (is_palindrome)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}