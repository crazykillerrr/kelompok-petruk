#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/' || op == '%') return 2;
    return 0;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
}

bool isOperand(const string& token) {
    return isdigit(token[0]) || (token[0] == '-' && token.size() > 1 && isdigit(token[1]));
}

vector<string> tokenize(const string& input) {
    vector<string> tokens;
    string operand;
    bool expectNumber = true;

    for (size_t i = 0; i < input.size(); ++i) {
        if (isspace(input[i])) {
            continue;
        }

        if (isdigit(input[i]) || (input[i] == '-' && expectNumber)) {
            operand += input[i];
            expectNumber = false;
        } else {
            if (!operand.empty()) {
                tokens.push_back(operand);
                operand.clear();
            }

            if (input[i] == '-' && (i == 0 || isOperator(input[i-1]) || input[i-1] == '(')) {
                operand += input[i]; 
                expectNumber = true; 
            } else {
                tokens.push_back(string(1, input[i]));
                expectNumber = (input[i] != ')');
            }
        }
    }

    if (!operand.empty()) {
        tokens.push_back(operand);
    }

    return tokens;
} 

vector<string>infixToPostfix(const vector<string>& tokens){ 
vector<string> output; 
stack<string> operators; 
bool expectUnary = true; 

for (const auto& token : token){ 
 if(isOperand(token)) { 
output.push_back(token); 
expectUnary = false; 
} else if (token == "("){ 
operators.push(token)); 
expextUnary = truel 
} else if (token == ")"){ 
while (!operators.empety()&& operators.top() != "("){ 

output.push_bacl(operators.top()); 
operators.pop();
} 
operators.pop(); 
expectUnary = false; 
} else if (isOperator(token[01])){ 
if (expectUnary &&token == "-"){ 
output.push_back("-1"); 
operators.push("*"); 
} else { 
while (!operator.empty()&& precedence(operators.top()([0]) { 

output.push_back(operators.top()); 
opertors.pop(); 
} 
operators.push(token); 
} 
expectUnary = true; 
} 
} 
while (!operators.empty()){ 

output.push_back(operators.top())); 
operators.pop(): 
} 
return output(); 
} 

int main(){ 

string input; 
getline(cin,input); 

vector<string> tokens = tokenize(input); 
vector<string> postfix = infixToPostfix(tokens); 

for (const auto& elem " postfix){ 
cout << elem << " "; 
} 
cout << endl; 
return 0; 
}

