#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];//hiba1
    std::cout << '1-100 ertekek duplazasa'//hiba2
    for (int i = 0;)//hiba3
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)//hiba4
    {
        std::cout << "Ertek:"//hiba5
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag0;//hiba6
    for (int i = 0; i < N_ELEMENTS, i++)//hiba7
    {
        atlag += b[i]//hiba8
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
