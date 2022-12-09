// 14_11_22_P015_Maximo comun divisor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Juan Bañuelos Hernandez


#include <iostream>
#include <algorithm>

void MaximoComun(int MCD)
{
    int n1, n2, num1, num2;

    std::cout << MCD % 100;
    num1 = std::max(n1, n2);
    num2 = std::min(n1, n2);

    do
    {
        MCD = num2;
        num2 = num1 % num2;
        num1 = MCD;
    } while (num2 != 0);
}

int main()
{
    int num1, num2;
    do
    {
        std::cout << "El primer numero es: \n";
        std::cin >> num1;
        std::cout << "El segundo numero es: \n";
        std::cin >> num2;
        if (num1 < 0)
        {
            std::cout << "Try again *_*\n";
            system("pause");
            system("cls");
        }
    } while (num1 < 0);
    std::cout << "El M.C.D. entre " << num1 << " y " << num2 << " es: ";
    MaximoComun(num1 - num2);
    std::cout << std::endl << std::endl;
}

