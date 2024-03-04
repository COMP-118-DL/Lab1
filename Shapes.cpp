//
// Created by Daniel on 04/03/2024.
//

#include <iostream>

using namespace std;

void drawHorizontalLine(int length, char ch) ;
void drawVerticalLine(int height, char ch);
void drawSquare(int size, char ch);
void drawRectangle(int height, int length, char ch);

int main() {

    int userChoice;
    int size;
    char ch;

    cout << "1) Draw a horizontal line" << endl;
    cout << "2) Draw a vertical line" << endl;
    cout << "3) Draw a square" << endl;
    cout << "4) Draw a rectangle" << endl;
    cout << "5) Quit" << endl;

    cout << "Enter your option: ";
    cin >> userChoice;

    switch (userChoice) {
        case 1:
            cout << "\nInput the length and character of the line:";
            cin >> size >> ch;
            drawHorizontalLine(size, ch);
            break;
        case 2:
            cout << "\nInput the height and character of the line:";
            cin >> size >> ch;
            drawVerticalLine(size, ch);
            break;
    }

    return 0;
}

void drawHorizontalLine(int length, char ch) {
    cout << "Horizontal line (" << length << "," << ch << ")" << endl;

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;

}

void drawVerticalLine(int height, char ch) {
    cout << "Horizontal line (" << height << "," << ch << ")" << endl;

    for (int i = 0; i < height; i++) {
        cout << ch << endl;
    }
}

void drawSquare(int size, char ch) {
    cout << "\nI am drawSquare" << endl;
}

void drawRectangle(int height, int length, char ch) {
    cout << "\nI am drawRectangle" << endl;
}