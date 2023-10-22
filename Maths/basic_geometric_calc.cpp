#include <iostream>

using namespace std;

int main() {
  char choice;
  do {
    cout << "Do you want to calculate area (A) or perimeter (P)? ";
    cin >> choice;

    if (choice == 'A' || choice == 'a') {
      cout << "What shape? (C)ircle, (R)ectangle, (T)riangle: ";
      cin >> choice;

      if (choice == 'C' || choice == 'c') {
        // Calculate area of circle
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "The area of the circle is " << 3.14159 * radius * radius << endl;
      } else if (choice == 'R' || choice == 'r') {
        // Calculate area of rectangle
        float length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "The area of the rectangle is " << length * width << endl;
      } else if (choice == 'T' || choice == 't') {
        // Calculate area of triangle
        float base, height;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        cout << "The area of the triangle is " << (base * height) / 2 << endl;
      } else {
        cout << "Invalid shape." << endl;
      }
    } else if (choice == 'P' || choice == 'p') {
      cout << "What shape? (C)ircle, (R)ectangle, (T)riangle: ";
      cin >> choice;

      if (choice == 'C' || choice == 'c') {
        // Calculate perimeter of circle
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "The perimeter of the circle is " << 2 * 3.14159 * radius << endl;
      } else if (choice == 'R' || choice == 'r') {
        // Calculate perimeter of rectangle
        float length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << "The perimeter of the rectangle is " << 2 * (length + width) << endl;
      } else if (choice == 'T' || choice == 't') {
        // Calculate perimeter of triangle
        float side1, side2, side3;
        cout << "Enter the first side of the triangle: ";
        cin >> side1;
        cout << "Enter the second side of the triangle: ";
        cin >> side2;
        cout << "Enter the third side of the triangle: ";
        cin >> side3;
        cout << "The perimeter of the triangle is " << side1 + side2 + side3 << endl;
      } else {
        cout << "Invalid shape." << endl;
      }
    } else {
      cout << "Invalid choice." << endl;
    }

    cout << "Do you want to continue? (Y/N) ";
    cin >> choice;
  } while (choice == 'Y' || choice == 'y');

  return 0;
}