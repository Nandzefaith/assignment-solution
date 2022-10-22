#include<stack>
#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
   //LIFO-Last In First Out
   stack<int> dishes;
   dishes.push(1);
   dishes.push(2);
   dishes.push(3);

   while(dishes.empty())
   {
    cout<< dishes.top() << end|;
    dishes.pop();
   }



}