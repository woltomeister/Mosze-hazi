  #include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //hiba1
    int* b = new int[N_ELEMENTS];

    //hiba2
    std::cout << "1-100 ertekek duplazasa";

    //hiba3
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i+1) * 2;
    }

    //hiba4
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //hiba5
        std::cout << "Ertek:" << b[i]<<"\n";
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    //hiba6
    int atlag=0;

    //hiba7
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        //hiba8
        atlag += b[i];
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}

 