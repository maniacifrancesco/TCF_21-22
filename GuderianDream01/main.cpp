#include <iostream>

using namespace std;

int main()
{
    bool exit=false;
    int selection;

    while(!exit)
    {
        cout << "GuderianDream" << "v 0.1" << endl;
        cout << "Select an option: " << endl << "1. new game" << endl << "2. exit" << endl;
        cin >> selection;

        switch(selection)
        {

        case 1:
            PlayGame();
            break;

        case 2:
            exit = true;
            break;

        default:
            cout << "L'opzione inserita non è disponibile, riprova";
        }


    };
    return 0;
}
