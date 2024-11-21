#include<bits/stdc++.h>
#define endl "\n"
using namespace std;



// Function prototype
void TryAgain();
void Display();
void DiagonalLine(int x1, int y1, int x2, int y2);
void HorizontalLine(int x1, int y1, int x2, int y2);
void VerticalLine(int x1, int y1, int x2, int y2);
void DDA(int x1, int y1, int x2, int y2);
void MidpointLine(int x1, int y1, int x2, int y2);
void Midpoint(int x1, int y1, int x2, int y2);



// Main function
int main()
{
    Display();
    return 0;
}



// Display function to show options and take user input
void Display()
{
    int x1, x2, y1, y2;

    cout << "Enter the value of x1: ";
    cin >> x1;

    cout << "Enter the value of y1: ";
    cin >> y1;

    cout << "Enter the value of x2: ";
    cin >> x2;

    cout << "Enter the value of y2: ";
    cin >> y2;

     int choice;
    cout << "What do you want? \n1. Diagonal Line \n2. Horizontal Line \n3. Vertical Line \n4. DDA \n5. Mid Point \nChoose option: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            DiagonalLine(x1, y1, x2, y2);
            TryAgain();
            break;

        case 2:
            HorizontalLine(x1, y1, x2, y2);
            TryAgain();
            break;

        case 3:
            VerticalLine(x1, y1, x2, y2);
            TryAgain();
            break;

        case 4:
            DDA(x1, y1, x2, y2);
            TryAgain();
            break;

        case 5:
            Midpoint(x1, y1, x2, y2);
            TryAgain();
            break;

        default:
            cout << "Invalid option chosen! Please try again." << endl;
            Display();
            break;
    }
}



// Function to allow the user to try again
void TryAgain()
{
    cout << "Do you want to try again? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
        Display();
    else
        cout << "Goodbye!" << endl;
}



void DiagonalLine(int x1, int y1, int x2, int y2)
{
    if (x1 > x2 || y1 > y2)
        return;

    cout << x1 << " " << y1 << "\n";
    DiagonalLine(x1 + 1, y1 + 1, x2, y2);
}



void HorizontalLine(int x1, int y1, int x2, int y2)
{
    if (x1 > x2)
        return;

    cout << x1 << " " << y1 << "\n";
    HorizontalLine(x1 + 1, y1, x2, y2);
}

void VerticalLine(int x1, int y1, int x2, int y2)
{
    if (y1 > y2)
        return;

    cout << x1 << " " << y1 << "\n";
    VerticalLine(x1, y1 + 1, x2, y2);
}



// DDA
void DDA(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

    float xIncrement = dx / (float)steps;
    float yIncrement = dy / (float)steps;

    if (steps == 0)
    {
        cout << round(x1) << " " << round(y1) << "\n";
        return;
    }

    cout << round(x1) << " " << round(y1) << "\n";

    DDA(x1 + xIncrement, y1 + yIncrement, x2, y2);
}



// Midpoint Line Algorithm
void MidpointLine(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int p = 2 * dy - dx;

    if (x1 > x2)
        return; // End condition for recursion

    cout << x1 << " " << y1 << endl;

    if (p < 0)
        MidpointLine(x1 + 1, y1, x2, y2);
    else
        MidpointLine(x1 + 1, y1 + 1, x2, y2);
}

void Midpoint(int x1, int y1, int x2, int y2)
{
    if (abs(y2 - y1) > abs(x2 - x1))
    {
        swap(x1, y1);
        swap(x2, y2);
    }

    MidpointLine(x1, y1, x2, y2);
}

