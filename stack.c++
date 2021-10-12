#include<iostream> 
#include<stack>
using namespace std;
 int main(){
    stack<int> stack;
    stack.push(12);
    stack.push(13);
    stack.push(14);
    stack.push(15);
    stack.push(16);
    while (!stack.empty())
    {
        cout << ' ' << stack.top();
        stack.pop();
    }
    
     return 0;
 }