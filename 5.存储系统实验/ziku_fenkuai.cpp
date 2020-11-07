#include <fstream>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile1, outFile2, outFile3, outFile4;
    inFile.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1.txt", ios::in);
    outFile1.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_1.txt", ios::out);
    outFile2.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_2.txt", ios::out);
    outFile3.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_3.txt", ios::out);
    outFile4.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_4.txt", ios::out);
    int len;
    inFile.seekg(0, inFile.end);
    len = inFile.tellg();
    len /= 9;
    inFile.seekg(0, inFile.beg);
    for (int line = 0; line < len; line++)
    {
        char buffer[9];
        inFile.read(buffer, 9);
        if (line < 0x1000)
        {
            for (int i = 0; i < 8; i++)
                outFile1 << buffer[i];
            outFile1 << endl;
        }
        else if (line < 0x2000)
        {
            for (int i = 0; i < 8; i++)
                outFile2 << buffer[i];
            outFile2 << endl;
        }
        else if (line < 0x3000)
        {
            for (int i = 0; i < 8; i++)
                outFile3 << buffer[i];
            outFile3 << endl;
        }
        else if (line < 0x4000)
        {
            for (int i = 0; i < 8; i++)
                outFile4 << buffer[i];
            outFile4 << endl;
        }
    }
    inFile.close();
    outFile1.close();
    outFile2.close();
    outFile3.close();
    outFile4.close();
    return 0;
}