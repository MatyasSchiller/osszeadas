#include <iostream>
#include "muvelet.h"

int main() {
    double szam1, szam2;
    char muvelet;

    std::cout << "Adj meg egy szamot: ";
    std::cin >> szam1;

    std::cout << "Adj meg egy masik szamot: ";
    std::cin >> szam2;

    std::cout << "Milyen muveletet szeretnel? (+, -, *, /): ";
    std::cin >> muvelet;

    if (muvelet == '/' && szam2 == 0) {
        std::cout << "Balfasz, nullaval nem lehet osztani.\n";
        return 1;
    }

    double eredmeny = szamol(szam1, szam2, muvelet);

    std::cout << "Eredmeny: " << eredmeny << std::endl;

    return 0;
}
