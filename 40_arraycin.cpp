#include <iostream>
using namespace std;
int main()
{
    string favPlayers[5];
    string temp;
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter your favorite player #" << i + 1 << " or press 'q' to quit : ";
        getline(cin, temp);
        if (temp == "q")
        {
            break;
        }else{
            favPlayers[i] = temp;
        }
        
    }
    cout << "Your favorite players are : \n";
    for(int i = 0; !favPlayers[i].empty(); i++)
    {
    cout << favPlayers[i] << '\n';
    }
    return 0;
}