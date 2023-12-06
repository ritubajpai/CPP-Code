#include<iostream>
#include<iomanip>
using namespace std;
 
char const* character[] = {"", "", "", "", "", "", "", "",
                            "\\a","\\b","\\t","\\n","\\v","\\f","\\r", "",
                            "", "", "", "", "", "", "", "",
                            "", "", "", "", "", "", "", ""};
 
int main()
{
    char c;
    int row;
    cout << " ASCII Table" << endl << "=============" << endl;
    for(int i = 0; i < 16; i++)
    {
        row = i;
        while (row <= 127) {
            if (row < 32)
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << character[i] << " | ";
            else if (row >= 32 && row < 127)
            {
                c = row;
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << c << " | ";
            }
            else
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << "DEL" << " | ";
            row = row + 16;
        }
        cout << endl;
    }
} 
cout << "!" << endl;
}
