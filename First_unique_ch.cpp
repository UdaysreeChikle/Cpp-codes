// Find the First Unique Character in a String

#include <iostream>
#include <string>
#include <unordered_map>
char isunique(std::string str)
{
    std::unordered_map<char ,int> charcount;
    for(char ch: str)
    {
        charcount[ch]++;
    }
    
    for(char ch: str)
    {
        if(charcount[ch] == 1)
        {
            return ch;
        }
    }    
    return '\0';
}

int main()
{
    std::string str;
    std::cout<<"enter string: ";

    std::getline(std::cin, str);
    
    char result = isunique(str);
    if(result!= '\0')
    {
        std::cout<<result;
    } 
    else
    {
        std::cout<<"not found";
    }
    return 0;
}

-------------------------------------------------

#include <iostream>
#include <unordered_set>
using namespace std;

char firstRecurringChar(const string &str) {
    unordered_set<char> seen;

    for (char ch : str) {
        if (seen.find(ch) != seen.end()) {
            return ch;  // first recurring character
        }
        seen.insert(ch);
    }

    return '\0';  // no recurring character
}

int main() {
    string str = "hello world";

    char res = firstRecurringChar(str);

    if (res != '\0')
        cout << "First recurring character: " << res << endl;
    else
        cout << "No recurring character found" << endl;

    return 0;
}


-------------------------------------
return first recurring ele in the array
Input: arr[] = {10, 5, 3, 4, 3, 5, 6}

#include <iostream>
#include <unordered_set>
using namespace std;

int firstRecurring(int arr[], int n) {
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];  // first recurring element
        }
        seen.insert(arr[i]);
    }

    return -1;  // no recurring element
}

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = firstRecurring(arr, n);

    if (res != -1)
        cout << "First recurring element: " << res << endl;
    else
        cout << "No recurring element found" << endl;

    return 0;
}
