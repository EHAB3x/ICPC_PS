#include <iostream>
using namespace std;

int main(){
    int participants_numbers,score,qualifiers=0;
    cin >> participants_numbers >> score;
    
    int participants[participants_numbers];

    for (int i = 0; i < participants_numbers; i++)
    {
        cin >> participants[i];
    }
    int specific = participants[score - 1];

    for (int j = 0; j < participants_numbers; j++)
    {
        if (specific <= participants[j] && participants[j] > 0)
        {
            qualifiers++;
        }
    }

    cout << qualifiers << endl;
    
    
    
    return 0;
}