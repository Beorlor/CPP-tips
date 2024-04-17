#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main() {
    // std::vector example
    std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    std::cout << "Vector contents:";
    for (size_t i = 0; i < myVector.size(); ++i) {
        std::cout << " " << myVector[i];
    }
    std::cout << std::endl;
    // Pros: Fast access to elements, good for random access and where resizing is infrequent.
    // Cons: Slow inserts/deletes anywhere but the end. Memory reallocation can be expensive.

    // std::list example
    std::list<int> myList;
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    myList.push_back(4);
    myList.push_back(5);
    std::cout << "List contents:";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;
    // Pros: Fast inserts/deletes at any point in the list.
    // Cons: Slow to access specific elements. More memory overhead due to storing pointers.

    // std::deque example
    std::deque<int> myDeque;
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);
    myDeque.push_back(4);
    myDeque.push_back(5);
    std::cout << "Deque contents:";
    for (size_t i = 0; i < myDeque.size(); ++i) {
        std::cout << " " << myDeque[i];
    }
    std::cout << std::endl;
    // Pros: Fast inserts/deletes at both ends. Good for queues where elements are added/removed frequently at both ends.
    // Cons: Slower access compared to vector due to non-contiguous storage, but still constant time.

    return 0;
}
