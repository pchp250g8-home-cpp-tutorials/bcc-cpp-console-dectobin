#include <iostream>
#include <string>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    int uDecNum,uTempVal;
    std::string strBinNum;
    std::cout << "Input an unsigned integer number\r\n";
    std::cin >> uDecNum;
    if (uDecNum < 0)
    {
        std::cout << "Inorrect number format\r\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }
    uTempVal = uDecNum;
    while (uTempVal > 0)
    {
        char chDighit = static_cast<char>((uTempVal % 2) + '0');
        strBinNum = chDighit + strBinNum;
        uTempVal /= 2;
    }
    if (strBinNum.empty()) strBinNum = "0";
    std::cout << "The binary equivalent of the number " << uDecNum << " is:"
        << strBinNum << "\r\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
