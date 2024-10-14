#include <bits/stdc++.h>
using namespace std;

// endl and "\n" can both be used but the later is more faster

// declaring functions to be used in the main function
void add(int x, int y);

int main() {
    // declaring variables
    int x;
    cout << "Enter number\n";
    
    // taking input
    cin >> x;

    cout << x << "\n";
    cout << "Hello World!" << "\n";
    // long vs long long vs long double
    // long is 32 bits and long long is 64 bits

    // float is 4 bytes long
    // double vs long double
    // double is 8 bytes long 
    // long double is used to store with more precision with 
    // about 21 decimal digits of precision

    // with this method it only takes one word at a time
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << "\n";

    // use getline to take a line of words as input
    string str;
    cin.ignore();
    getline(cin, str);
    cout << str << '\n';




    // if, else if and else statements
    if(!(2>3)){
        cout << "3 is greater than 2\n";
    } else if(x>2){
        cout << x << "greater than 2\n";
    } else{
        cout << "You are shit!\n";
    }

    // logical operators
    // && - and, || - or, ! - negation

    int age;
    cin >> age;
    if(age >= 18){
        cout << "You are eligible to vote!" << '\n';
    }else if(age < 18){
        cout << "You are not eligile to vote!" << '\n';
    }

    // switch statements
    char day;
    cout << "What day is it? " << '\n';
    cin >> day;
    // only byte, short, char and int primitive data types work 
    switch(day){
        case 'M':
            cout << "Monday\n";
            break;
        case 'T':
            cout << "Tuesday\n";
            break;
        case 'W':
            cout << "Wednesday\n";
            break;
        default:
            cout << "Invalid Check\n";
            break;
    }

    // using self created functions
    add(5,2);
    add(10,2);
    
    return 0;
}

// creating fuctions

void add(int x, int y){
    cout << x + y << endl;
}


