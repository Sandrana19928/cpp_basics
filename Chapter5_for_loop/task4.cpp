//Keliamieji metai
#include <iostream>

int main() {
    int m, n;

    std::cout << "Įveskite pradinius metus: ";
    std::cin >> m;
    
    std::cout << "Įveskite pabaigos metus: ";
    std::cin >> n;
    
    std::cout << "Keliamieji metai nuo " << m << " iki " << n << " yra:" << std::endl;
    
    for (int metai = m; metai <= n; metai++) {
        if (metai % 4 == 0 && (metai % 100 != 0 || metai % 400 == 0)) {
            std::cout << metai << std::endl;
        }
    }
    
    return 0;
}

//Šioje programoje vartotojas yra paprašytas įvesti pradinius ir pabaigos metus. 
//Tada naudojama for ciklas, kad būtų tikrinama kiekvienoje iteracijoje, 
//ar metai yra keliamieji. Jei metai dalijasi iš 4 be liekanos ir nesidalina iš 100 arba dalijasi iš 400 be liekanos, 
//jie laikomi keliamaisiais metais ir išvedami į ekraną.