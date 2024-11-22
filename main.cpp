#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void fun1()
{

}

void fun2()
{
    vector <string> array;
    ifstream in("txt.txt");
    if (in.is_open())
    {
        string s;
        while(getline(in, s))
        {
            array.push_back(s);
        }
        for (const auto& str : array)
        {
            cout << str << endl;
        }
    }

}

void fun3()
{

}

int main()
{
    fun1();
    fun2();
    fun3();
}
