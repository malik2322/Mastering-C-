
#include "dynamicQueue.h"
#include <iostream>
using namespace std;
int main()
{

    dynamicQueue queue;
    queue.enque(1);
    queue.enque(2);
    queue.enque(3);

    cout << queue.deque() << endl;
}