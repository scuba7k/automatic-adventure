#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string text;
    cout << "✍️ Enter a sentence: ";
    getline(cin, text);
    
    stringstream ss(text);
    string word;
    int count = 0;
    
    while (ss >> word) {
        count++;
    }
    
    cout << "📊 Word Count: " << count << endl;
    return 0;
}
