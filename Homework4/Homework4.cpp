//#include <iostream>
//using namespace std;
//
//int main() {
//    int x, y;
//    cout << "Task 7:\nEnter two numbers: ";
//    cin >> x >> y;
//
//    if (x != y) {
//        int temp = x;
//        x = y;
//        y = temp;
//        cout << "Swapped values: x = " << x << ", y = " << y << "\n\n";
//    }
//    else {
//        cout << "Numbers are equal, no swap needed: x = " << x << ", y = " << y << "\n\n";
//    }
//
//    int a;
//    cout << "Task 8:\nEnter a 3-digit number (101-998): ";
//    cin >> a;
//
//    if (a > 100 && a < 999) {
//        int count = 3;
//        int first_digit = a / 100;
//        int second_digit = (a / 10) % 10;
//        int last_digit = a % 10;
//        int sum = first_digit + second_digit + last_digit;
//
//        cout << "Digits count: " << count << "\n";
//        cout << "Sum of digits: " << sum << "\n";
//        cout << "First and last digit: " << first_digit << "  " << last_digit << "\n\n";
//    }
//    else {
//        cout << "Number is out of range (100 < a < 999)!\n\n";
//    }
//
//    int hours, minutes, seconds;
//    cout << "Task 9:\nEnter hours, minutes, and seconds: ";
//    cin >> hours >> minutes >> seconds;
//
//    if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60) {
//        cout << "Time is valid.\n\n";
//    }
//    else {
//        cout << "Time is invalid!\n\n";
//    }
//
//    int h;
//    cout << "Task 10:\nEnter current hour (0-23): ";
//    cin >> h;
//
//    if (h >= 0 && h <= 5) {
//        cout << "Good night\n\n";
//    }
//    else if (h >= 6 && h <= 11) {
//        cout << "Good morning\n\n";
//    }
//    else if (h >= 12 && h <= 17) {
//        cout << "Good day\n\n";
//    }
//    else if (h >= 18 && h <= 23) {
//        cout << "Good evening\n\n";
//    }
//    else {
//        cout << "Invalid hour input!\n\n";
//    }
//
//    int num1, num2, num3;
//    cout << "Task 11:\nEnter three numbers: ";
//    cin >> num1 >> num2 >> num3;
//
//    int min_val = num1;
//    if (num2 < min_val) {
//        min_val = num2;
//    }
//    if (num3 < min_val) {
//        min_val = num3;
//    }
//
//    cout << "Minimum value: " << min_val << "\n";
//
//    return 0;
//}