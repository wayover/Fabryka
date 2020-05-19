#ifndef LIGHT_H_INCLUDED
#define LIGHT_H_INCLUDED

#include <windows.h>
#include <string>
#include <vector>



class swiatlo
{
public:

    swiatlo();
    ~swiatlo();
    std::string text;
    char latinU[40] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char latinl[40] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '.', ',','0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::string mors[40] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-.-.-", "--..--", "-", ".—", "..-", "...-", "....-", ".....", "-....", "-...", "-..", "-." };

    std::vector <std::string> translatedText;
    void translate(std::string text);
    void lightThis(const std::vector<std::string> &translatedText);


void capslockBlink(int dl);
};


#endif // LIGHT_H_INCLUDED
