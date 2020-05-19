#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
#include <fstream>
#include <string>
#include <vector>

class file
{
public:
    std::string nazwa;
    file(std::string nazwa): nazwa(nazwa){};
    ~file();
    std::string text;

    fstream plik;

    char latinU[40] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char latinl[40] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '.', ',','0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    std::string mors[40] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-.-.-", "--..--", "-", ".—", "..-", "...-", "....-", ".....", "-....", "-...", "-..", "-." };


    std::vector <std::string> translatedText;
    void translate(std::string text);
    void toFile(std::string text, const std::vector<std::string> &translatedText, std::string nazwa);

};


#endif // FILE_H_INCLUDED
