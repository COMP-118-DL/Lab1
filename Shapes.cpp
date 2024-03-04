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
    int height, length;
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
        case 3:
            cout << "\nInput the height and character of the square:";
            cin >> height >> ch;
            drawSquare(height, ch);
            break;
        case 4:
            cout << "\nInput the height, length and character of the rectangle:";
            cin >> height >> length >> ch;
            drawRectangle(height, length, ch);
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
    cout << "Square (" << size << "," << ch << ")" << endl;

    for (int i = 0; i < size; i++) {
        cout << ch;
    }
    cout << endl;

    for (int i = 0; i < size - 2; i++) {
        cout << ch;
        for (int j = 0; j < size - 2; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << ch;
    }
}

void drawRectangle(int height, int length, char ch) {
    cout << "Rectangle (" << height << "," << length << "," << ch << ")" << endl;

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;

    for (int i = 0; i < height - 2; i++) {
        cout << ch;
        for (int j = 0; j < length - 2; j++) {
            cout << " ";
        }
        cout << ch << endl;
    }

    for (int i = 0; i < length; i++) {
        cout << ch;
    }
    cout << endl;
}