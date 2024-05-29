#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

bool isOperator(char c){
    return (c == '+'|| c == '-' || c == '*'|| c == '/' || c == '%' || c == '(' || c == ')' );
}

vector<string>tokenize(string&inputString){
    vector<string>tokens;
    string num ="";
    int n = inputString.length();

    for( int i = 0; i < n; i++){
        char current = inputString[i];

        if( isdigit(current) || (current == '-' && (i == 0 || inputString[i - 1] == '('))){
            num += current;
            while (i + 1 < n && isdigit(inputString[i + 1])){
                num += inputString[i++];
            }
            tokens.push_back(num);
            num = "";
        }else if(isspace(current)){
            continue;
        }else if (isOperator(current)){
            tokens.push_back(string(1, current));
        }
    }
    return tokens;
}

vector<string>
handleNegative(vector<string>&tokens){
    vector<string>result;
    int n = tokens.size();

    for( int i = 0; i < n; i++){
        if (tokens[i] == "-" && (i == 0 || tokens[i -1] == "(" || tokens[i - 1] == "+" || tokens[i - 1] == "-" || tokens[i - 1] ==  "*" || tokens[i - 1] == "/" || tokens[i - 1] == "%")){
            result.push_back("-1");
            result.push_back("*");
        }else{
            result.push_back(tokens[i]);
        }
    }
    return result;
}

void printTokens(vector<string>&tokens){
    for(auto&token : tokens){
        cout << token << " ";
    }
    cout << endl;
}

int main(){
    string inputString;
    getline(cin, inputString);

    vector<string>tokens = tokenize(inputString);
    vector<string>finalTokens = handleNegative(tokens);
    printTokens(finalTokens);

    return 0; 
}
