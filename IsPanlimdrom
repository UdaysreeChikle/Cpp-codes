#include <iostream>
#include <string>

bool IsPanlimdrom(std::string str)
{
    int left = 0;
    int  right = str.length() - 1;
    if(left<right)
    {
        if(str[left]!= str[right])
        {
            return false;
        }
        
        left++;
        right--;
    }
    
    return true;
}

int main()
{
    std::string str;
    std::cout<<"enter string: ";
    std::getline(std::cin, str);
    

    if(IsPanlimdrom(str))
    {
        std::cout<<"ispalimdrom: "<<str;
    }
    else
    {
    std::cout<<"isnotpalindrom: "<<str;
    }
    return 0;
}
