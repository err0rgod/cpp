#include <iostream>
using namespace std;

int main() {
    
    string as, bs, cs;


    cout << "Enter three strings: " << endl;
    cin >> as >> bs >> cs;

    // Sort the numbers using temporary swaps
    if (as.length() > bs.length()) { string temp = as; as = bs; bs = temp; }
    if (as.length() > cs.length()) { string temp = as; as = cs; cs = temp; }
    if (bs.length() > cs.length()) { string temp = bs; bs = cs; cs = temp; }
    
    cout << "Numbers in ascending order: " << cs << "," << bs << "," << as << endl;
    
    return 0;
}