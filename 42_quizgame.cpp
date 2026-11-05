#include <iostream>
using namespace std;
int main ()
{
    string questions[] = {"1. When was C++ created?",
                          "2. Who created C++?",
                          "3. What was the first name of C++?"};
   string answers[][4] = {{"A. 1957", "B. 1985", "C. 1914", "D. 1949"},
                          {"A. Newton", "B. Spinoza", "C. Bjarne", "D. Yao"},
                          {"A. C with classes", "B. C plus plus", "C. C sharp", "D. C mhamed"}};
    char guess[3];
    char correctAns[3] = {'B', 'C', 'A'};
    int score = 0;

    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = sizeof(answers[0]) / sizeof(answers[0][0]);
    for(int i = 0; i < size; i++)
    {
        cout << "************************************\n";
        cout << questions[i] << endl;
        cout << "************************************\n";
        for(int j = 0; j < size2; j++)
        {
            cout << answers[i][j] <<  '\n';
            
        }
        cin >> guess[i];
        guess[i] = toupper(guess[i]);
        if (guess[i] == correctAns[i])
        {
            score++;
        }
        
    }
    cout << "****************  RESULTS  ****************\n";
    cout << "Number of questions: " << size << '\n';    
    cout << "Number of correct answers: "<< score << '\n';
    cout << "YOUR RESULTS ARE : " << (score /3) * 100 << '%';
}