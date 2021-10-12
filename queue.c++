#include<iostream>
#include<queue>
using namespace std;
void showqueue(queue<int> ab){
    queue<int> g = ab;
    while (!queue.empty())
    {
        cout << '\t' << g.font();
        g.pop();
    }
    cout << '\n';
}
int main(){
    queue<int>ab;
    ab.push(12);
    ab.push(424);
    ab.push(90);

    cout << " the queue is " << endl;
    showqueue(ab);
    cout << ab.front();
    return 0;
}