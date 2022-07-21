#include <iostream> 
using namespace std; 
class Test 
{ 
    private: 
    int x; 
    public: 
    Test(int i) 
    { 
        x = i; 
        cout << "Called" << endl; 
    } 
}; 
int main() 
{ 
    Test t(20); 
    t = 30;  
    return 0; 
} 