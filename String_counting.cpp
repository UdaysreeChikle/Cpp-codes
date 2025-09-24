// 4. String counting 
	
#include <iostream>
#include <string>

std::string countingstring(const std::string& input)
{
    std::string output;
    int count = 1;

    for (size_t i = 1; i < input.length(); i++) // Start loop from index 1
    {
        if (input[i] == input[i - 1]) // Compare current character with the previous one
        {
            count++;
        }	
        else
        {
            output += input[i - 1]; // Append previous character to output
            output += std::to_string(count); // Append count of previous character
            count = 1; // Reset count for the new character
        }
    }

    // Append the last character and its count
    if (!input.empty()) {
        output += input.back(); // Append the last character
        output += std::to_string(count); // Append count of the last character
    }

    return output;
}

int main()
{
    std::string str;
    std::cout << "enter string: ";
    std::getline(std::cin, str);
    std::string result = countingstring(str);
    
    std::cout << result; // Output the result
    return 0;
}

// output:
//enter string: aabbccddss
//a2b2c2d2s2
