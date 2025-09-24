✅ 1. Using std::reverse() (Best & Simple)

#include <iostream>
#include <algorithm>  // for reverse
using namespace std;

int main() {
    string str = "Hello World";

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str << endl;
    return 0;
}

✅ 2. Manual Swap Method
//output: Reversed string: dlroW olleH

#include <iostream>
using namespace std;

int main() {
    string str = "Hello World";
    int n = str.length();

    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}


✅ 3. Using a New String

#include <iostream>
using namespace std;

int main() {
    string str = "Hello World";
    string rev = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    cout << "Reversed string: " << rev << endl;
    return 0;
}


//🔹 4. Reverse the order of words in a string

//👉 "Hello World" → "World Hello"

#include <iostream>
#include <sstream>   // for stringstream
#include <vector>
#include <algorithm> // for reverse
using namespace std;

int main() {
    string str = "Hello World from C++";

    // Split words using stringstream
    stringstream ss(str);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse word order
    reverse(words.begin(), words.end());

    // Join back into a string
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) result += " ";
    }

    cout << "Reversed words: " << result << endl;

    return 0;
}

// ✅ 5. Reverse by returning a new string
//output: Original: Hello World
//Reversed: dlroW olleH

#include <iostream>
using namespace std;

string reverseRec(string str) {
    if (str.empty())  // base case
        return "";

    // recursive case: reverse rest of string + first char
    return reverseRec(str.substr(1)) + str[0];
}

int main() {
    string str = "Hello World";
    cout << "Original: " << str << endl;
    cout << "Reversed: " << reverseRec(str) << endl;
    return 0;
}

//✅ 6. In-place recursive reversal (using indices)
//output: Original: Hello World
//Reversed: dlroW olleH

#include <iostream>
using namespace std;

void reverseRec(string &str, int left, int right) {
    if (left >= right) return;  // base case

    swap(str[left], str[right]);  // swap ends
    reverseRec(str, left + 1, right - 1);  // recursive call
}

int main() {
    string str = "Hello World";
    cout << "Original: " << str << endl;

    reverseRec(str, 0, str.length() - 1);

    cout << "Reversed: " << str << endl;
    return 0;
}

//✅ 7. Reverse a string by using temp variable

#include <iostream>
using namespace std;
void reverseRec(string& str)
{
    int n = str.length();
    
    for(int i = 0; i<n/2; i++)
    {
        int temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main() {
    string str = "Hello World";
    cout << "Original: " << str << endl;
    reverseRec(str);

    cout<<"reverse string: "<<str;
}


#include<iostream>
#include<string>
using namespace std;

void reverse(string& str)
{
    int len = str.length();
    
    for(int i = 0, j = len - 1 ; i < j ; i++, j--)
    {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
}

int main()
{
    string str;
    cout<<"Enter any string: ";
    getline(cin,str);
    
    reverse(str);
    
    cout<<"REversed String: "<<str<<endl;
    
    return 0;
}
    return 0;
}


