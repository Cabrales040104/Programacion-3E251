#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> nombres;
    nombres.emplace_back("Juan");
    nombres.emplace_back("Pedro");
    nombres.emplace_back("Maria");

    cout << nombres.at(2) << endl;

    for (auto &&nombre : nombres){
        cout << nombre << endl;
    }
    

    return 0;
}