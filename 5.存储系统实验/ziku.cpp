#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

int  main()
{
    string index;
    cin >> index;
    ifstream inFile;
    ofstream outFile1, outFile2, outFile3, outFile4;
    inFile.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1.txt",ios::in);
    outFile1.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_1.txt",ios::out);
    outFile2.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_2.txt",ios::out);
    outFile3.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_3.txt",ios::out);
    outFile4.open("E:\\Logisim\\hustzc\\5.存储系统实验\\16点阵字库文件分拆\\HZK16_1_4.txt",ios::out);
    while(!inFile.eof())
    {
        char buffer[9];
        inFile.read(buffer, 9);
        outFile1 << buffer[0] << buffer[1] << endl;
        outFile2 << buffer[2] << buffer[3] << endl;
        outFile3 << buffer[4] << buffer[5] << endl;
        outFile4 << buffer[6] << buffer[7] << endl;
    }
    inFile.close();
    outFile1.close();
    outFile2.close();
    outFile3.close();
    outFile4.close();
    return 0;
}