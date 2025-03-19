#include <iostream>
#include <stack>
#include <cstring>
int main(){
    std::stack<char> st;
    int n;
    char x[10];
    std::cin>>n;
    for(int i=1;i<=n;++i){
        
        std::cin.get(x,10);
    }
    for(int i=0;i<strlen(x);++i) st.push(x[i]);
    for(int i=0;i<strlen(x);++i){
        if(x[i]=='(' && st.top()==')') st.pop();
        else {
            std::cout<<"not correct";
            return 1;
            }
        if(x[i]=='[' && st.top()==']') st.pop();
        else {
            std::cout<<"not correct";
            return 1;
            }
        if(x[i]=='{' && st.top()=='}') st.pop();
        else {
            std::cout<<"not correct";
            return 1;
            }
    }
}