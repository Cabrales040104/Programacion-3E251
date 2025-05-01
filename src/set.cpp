#include <iostream> 
#include <set>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    set<int> Conjunto1= {1, 2, 3, 4, 5};
    set<int> Conjunto2= {1,2};   

    set<int> conjunto3;
    conjunto3.insert(Conjunto1.begin(), Conjunto1.end());   
    conjunto3.insert(Conjunto2.begin(), Conjunto2.end());

    cout << "Numero de elementos: " << conjunto3.size() << endl;
    cout << "Numero de elementos: " << conjunto3.size() << endl;
    cout << "Numero de elementos: " << conjunto3.size() << endl;

   
    return 0;
}