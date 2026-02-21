#include <iostream>
#include <memory>
using namespace std;

int main() {

    unique_ptr<int> up = make_unique<int>(10);
    cout << "unique_ptr value: " << *up << endl;

    shared_ptr<int> sp1 = make_shared<int>(20);
    shared_ptr<int> sp2 = sp1;
    cout << "shared_ptr count: " << sp1.use_count() << endl;

    weak_ptr<int> wp = sp1;
    if(auto temp = wp.lock())
        cout << "weak_ptr value: " << *temp << endl;

    return 0;
}
