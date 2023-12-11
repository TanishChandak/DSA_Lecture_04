#include <iostream>
using namespace std;

int main()
{
    // Pattern no-1:
    int num1;
    cout << "Enter the number of num1: ";
    cin >> num1;

    int row1 = 1;
    while (row1 <= num1)
    {
        int col1 = 1;
        while (col1 <= num1)
        {
            cout << row1;
            col1 = col1 + 1;
        }
        cout << endl;
        row1 = row1 + 1;
    }

    // Pattern no-2
    int num2;
    cout << "Enter the number of num2: ";
    cin >> num2;

    int row2 = 1;
    while (row2 <= num2)
    {
        int col2 = 1;
        while (col2 <= num2)
        {
            cout << col2;
            col2 = col2 + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }

    // Pattern no-3
    int num3;
    cout << "Enter the number of num3: ";
    cin >> num3;

    int row3 = 1;
    while (row3 <= num3)
    {
        int col3 = 1;
        while (col3 <= num3)
        {
            cout << num3 - col3 + 1;
            col3 = col3 + 1;
        }
        cout << endl;
        row3 = row3 + 1;
    }

    // Pattern no-4
    int num4;
    cout << "Enter the number of num4: ";
    cin >> num4;

    int row4 = 1;
    int count4 = 1;
    while (row4 <= num4)
    {
        int col4 = 1;
        while (col4 <= num4)
        {
            cout << count4 << " ";
            col4 = col4 + 1;
            count4 = count4 + 1;
        }
        cout << endl;
        row4 = row4 + 1;
    }

    // Pattern no-5
    int num5;
    cout << "Enter the number of num5: ";
    cin >> num5;

    int row5 = 1;
    while (row5 <= num5)
    {
        int col5 = 1;
        while (col5 <= row5)
        {
            cout << "* ";
            col5 = col5 + 1;
        }
        cout << endl;
        row5 = row5 + 1;
    }

    // Pattern no-6
    int num6;
    cout << "Enter the number of num6: ";
    cin >> num6;

    int row6 = 1;
    while (row6 <= num6)
    {
        int col6 = 1;
        while (col6 <= row6)
        {
            cout << row6;
            col6 = col6 + 1;
        }
        cout << endl;
        row6 = row6 + 1;
    }

    // Pattern no-7
    int num7;
    cout << "Enter the number of num7: ";
    cin >> num7;

    int row7 = 1;
    while (row7 <= num7)
    {
        int col7 = 1;
        int value7 = row7;
        while (col7 <= row7)
        {
            cout << value7 << " ";
            value7 = value7 + 1;
            // Another one is if we not use the value7 variable:
            // cout << row7 + col7 - 1 << " ";
            col7 = col7 + 1;
        }
        cout << endl;
        row7 = row7 + 1;
    }

    // Pattern no-8
    int num8;
    cout << "Enter the number of num8: ";
    cin >> num8;

    int row8 = 1;
    while (row8 <= num8)
    {
        int col8 = 1;
        int value8 = row8;
        while (col8 <= row8)
        {
            cout << value8 << " ";
            value8 = value8 - 1;
            // Another one is if we not use the value8 variable:
            // cout << row8 - col8 + 1 << " ";
            col8 = col8 + 1;
        }
        cout << endl;
        row8 = row8 + 1;
    }

    // Pattern no-9
    int num9;
    cout << "Enter the number of num9: ";
    cin >> num9;

    int row9 = 1;
    while (row9 <= num9)
    {
        int col9 = 1;
        while (col9 <= num9)
        {
            char char9 = 'A' + row9 - 1;
            cout << char9 << " ";
            col9 = col9 + 1;
        }
        cout << endl;
        row9 = row9 + 1;
    }

    // Pattern no-10
    int num10;
    cout << "Enter the number of num10: ";
    cin >> num10;

    int row10 = 1;
    while (row10 <= num10)
    {
        int col10 = 1;
        while (col10 <= num10)
        {
            char char10 = 'A' + col10 - 1;
            cout << char10 << " ";
            col10 = col10 + 1;
        }
        cout << endl;
        row10 = row10 + 1;
    }

    // Pattern no-11
    int num11;
    cout << "Enter the number of num11: ";
    cin >> num11;

    int row11 = 1;
    while (row11 <= num11)
    {
        int col11 = 1;
        while (col11 <= num11)
        {
            char char11 = 'A' + row11 + col11 - 2;
            cout << char11 << " ";
            col11 = col11 + 1;
        }
        cout << endl;
        row11 = row11 + 1;
    }

    // Pattern no-12
    int num12;
    cout << "Enter the number of num12: ";
    cin >> num12;

    int row12 = 1;
    while (row12 <= num12)
    {
        int col12 = 1;
        while (col12 <= row12)
        {
            char char12 = 'A' + row12 - 1;
            cout << char12 << " ";
            col12 = col12 + 1;
        }
        cout << endl;
        row12 = row12 + 1;
    }

    // Pattern no-13
    int num13;
    cout << "Enter the number of num13: ";
    cin >> num13;

    int row13 = 1;
    while (row13 <= num13)
    {
        int col13 = 1;
        while (col13 <= row13)
        {
            char char13 = 'A' + row13 + col13 - 2;
            cout << char13 << " ";
            col13 = col13 + 1;
        }
        cout << endl;
        row13 = row13 + 1;
    }

    // Pattern no-14
    int num14;
    cout << "Enter the number of num14: ";
    cin >> num14;

    int row14 = 1;
    while (row14 <= num14)
    {
        int col14 = 1;
        char char14 = 'A' + num14 - row14;
        while (col14 <= row14)
        {
            cout << char14 << " ";
            char14 = char14 + 1;
            col14 = col14 + 1;
        }
        cout << endl;
        row14 = row14 + 1;
    }

    // Pattern no-15
    int num15;
    cout << "Enter the number of num15: ";
    cin >> num15;

    int row15 = 1;
    while (row15 <= num15)
    {
        int space15 = num15 - row15;
        while (space15)
        {
            cout << " ";
            space15 = space15 - 1;
        }
        int col15 = 1;
        while (col15 <= row15)
        {
            cout << "*";
            col15 = col15 + 1;
        }
        cout << endl;
        row15 = row15 + 1;
    }

    // Pattern no-16
    int num16;
    cout << "Enter the number of num16: ";
    cin >> num16;

    int row16 = 1;
    while (row16 <= num16)
    {
        int col16 = 1;
        int print_space = num16 - row16 + 1;
        while (col16 <= print_space)
        {
            cout << "*";
            col16 = col16 + 1;
        }
        cout << endl;
        row16 = row16 + 1;
    }

    // Pattern no-17
    int num17;
    cout << "Enter the number of num17: ";
    cin >> num17;

    int row17 = 1;
    while (row17 <= num17)
    {
        int col17 = 1;
        int print_space = num17 - row17 + 1;
        while (col17 <= print_space)
        {
            cout << "*";
            col17 = col17 + 1;
        }
        cout << endl;
        row17 = row17 + 1;

        int space17 = row17 - 1;
        while (space17)
        {
            cout << " ";
            space17 = space17 - 1;
        }
    }

    // Pattern no-18
    int num18;
    cout << "Enter the number of num18: ";
    cin >> num18;

    int row18 = 1;
    while (row18 <= num18)
    {
        int space18 = num18 - row18;
        while (space18)
        {
            cout << " ";
            space18 = space18 - 1;
        }
        int col18 = 1;
        int value18 = 1;
        while (col18 <= row18)
        {
            cout << value18;
            value18 = value18 + 1;
            col18 = col18 + 1;
        }
        int start18 = row18 - 1;
        while (start18)
        {
            cout << start18;
            start18 = start18 - 1;
        }
        cout << endl;
        row18 = row18 + 1;
    }
}