#ifndef CONSOLE_H_INCLUDED
#define CONSOLE_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class console
{
public:

    console();
    ~console();
    std::string text;
    char latinU[40] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char latinl[40] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '.', ',','0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::string mors[40] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-.-.-", "--..--", "-", ".—", "..-", "...-", "....-", ".....", "-....", "-...", "-..", "-." };

    std::vector <std::string> translatedText;
    void translate(std::string text);
    void displayThis(std::string text, const std::vector<std::string> &translatedText);
};

#endif // CONSOLE_H_INCLUDED
