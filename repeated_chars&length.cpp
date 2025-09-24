//>>>>>>> Repeated chars in the given string and length:<<<<<<
// input: It will allow only lower characters and allow only 
          alphabets and dont allow numbers or special characters.


#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;

int main()
{
     string str;
     cout << "Enter a string : ";
     getline( cin, str);

    // Create a frequency map to count occurrences of each character

     /*
	here, we use the unordered_map<char, int> to store the frequency count of 
        each character in the input string. The characters are stored as keys, and 
	the corresponding counts are stored as values.
        By using an unordered_map, we can easily update the count for each character
        as we iterate through the string.
     */

    unordered_map<char, int> frequencyMap;
    for (char c : str)
    {
        //char lc = std::tolower(c);  // it will change the upper case to lower case
        if ( isalpha(c))   // it will allow only alphabets 
        { 
	    char lc = std::tolower(c);
            frequencyMap[lc]++;
        }
    }

    char maxChar = '\0';  // The character with maximum occurrences
    int maxLength = 0;    // The length of the maximum occurrences

    // Find the character with maximum occurrences
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxLength) {
            maxChar = pair.first;
            maxLength = pair.second;
        }
    }

    if (maxLength > 1)
    {
         cout << "Maximum repeated character: " << maxChar <<  endl;
         cout << "Length (maximum times): " << maxLength <<  endl;
    }
    else {
         cout << "No repeated characters found." <<  endl;
    }

    return 0;
}



