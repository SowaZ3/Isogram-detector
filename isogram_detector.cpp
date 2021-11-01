#include <iostream>

bool is_isogram(std::string str) {

    for (int i = 0; i < str.size(); i++) str[i] = tolower(str[i]);  // tolower transformation (program should not be case sens)

    bool trigger = true;

    for (int i = str.size()-1; i > 0; i--)
    {
        for (int j = i-1; j >= 0; j--)
        {
            if (str[i] == str[j]) trigger = false;
        }
        if (i == 0) trigger = true;
    }
    return trigger;
}

int main()
{
    std::string str;

    std::cin >> str;
    std::cout << str << " ";
    
    if (is_isogram(str)) std::cout << "is isogram\n";
    else std::cout << "is not isogram\n";

    system("pause");    // if the console closes automatically
    return 0;
}
