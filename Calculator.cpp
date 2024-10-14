#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

float calculate(char operation, int num1, int num2);

int main() {

    char operation;
    int num1, num2;
    cin >> operation >> num1 >> num2;
    cout << calculate(operation, num1, num2);
    
    return 0;
}

float calculate(char operation, int num1, int num2){
    float answer;
    if(operation == '+'){
        answer = num1 + num2;
    } else if(operation == '-'){
        answer = num1 - num2;
    } else if(operation == '/'){
        answer = num1 / num2;
    } else if(operation == '*'){
        answer = num1 * num2;
    } else if(operation == '**'){
        answer = pow(num1, num2);
    } else{
        cout << "Invalid Input!" << endl;
    }

    return answer;
}