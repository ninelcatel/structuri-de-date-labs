#include <iostream>
#include <stack>
#include <cmath>
#include <cstring>
int main(){
    std::stack<char> st;
    char x[10];
    std::cin.getline(x,10);
    for(int i=0;i<strlen(x);++i) st.push(x[i]);
    for(int i=0;i<strlen(x)/2+1;++i){
        if((x[i]=='(' && st.top()==')') || (x[i]=='[' && st.top()==']') || (x[i]=='{' && st.top()=='}')) st.pop();
        else {
            std::cout<<x[i]<<st.top()<<std::endl;
            std::cout<<"not correct";
            return 1;
        }
    }
}