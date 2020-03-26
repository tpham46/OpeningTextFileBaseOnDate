#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

int main()
{
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t); // Just a reference variable for use to get the year, month and date
    std::cout << "Today is ";
    std::cout << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n \n";

    int day = now->tm_mday;
    int month = now->tm_mon + 1;
    int year = now->tm_year + 1900;
    chdir("C:\\Users\\pkimt\\Desktop\\CBlock Code\\ReviewAfterSpecificDay");
    string dayFile = "start " + to_string(day) + "." + to_string(month)  +  "." + to_string(year) + "txt";
    system(dayFile.c_str());

    return 0;
}
