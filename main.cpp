#include <iostream>
#include <list>

int wybierz_element()
{
    int element;
    std::cout << "Wybierz element: ";
    std::cin >> element;
    return element;
}

void dodaj_element_z_przodu(std::list<int> &lista)
{
    int element;
    element = wybierz_element();
    lista.push_front(element);
}


void usun_element_z_przodu(std::list<int> &lista)
{
    lista.pop_front();
}

void dodaj_element_z_tylu(std::list<int> &lista)
{
    int element;
    element = wybierz_element();
    lista.push_back(element);
}

void usun_element_z_tylu(std::list<int> &lista)
{
    lista.pop_back();
}

void usun_wybrany_element(std::list<int> &lista)
{
    int element;
    element = wybierz_element();
    lista.remove(element);
}

void sprawdz_rozmiar(std::list<int> lista)
{
    std::cout << lista.size() << "\n";
}

void sprawdz_maksymalny_rozmiar(std::list<int> lista)
{
    std::cout << lista.max_size() << "\n";
}

void sortuj_liste(std::list<int> &lista)
{
    lista.sort();
}

void odwroc_kolejnosc(std::list<int> &lista)
{
    lista.reverse();
}

void usun_wszystko(std::list<int> &lista)
{
    lista.clear();
}

void wyswietl(std::list<int> lista)
{
    for (int i : lista)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    std::list<int> lista;

    int wlaczone = 1;
    int wybor;

    while(wlaczone)
    {
        std::cout << "1. Dodaj do poczatku listy.\n" <<
                     "2. Dodaj do konca listy\n" <<
                     "3. Usun wybrany element\n" <<
                     "4. Usun element z poczatku listy\n" <<
                     "5. Usun element z konca listy\n" <<
                     "6. Sprawdz rozmiar\n" <<
                     "7. Sprawdz maksymalny rozmiar\n" <<
                     "8. Posortuj element\n" <<
                     "9. Usun wszystkie elementy\n" <<
                     "10. Odwroc kolejnosc elementow\n" <<
                     "11. Wyswietl\n" <<
                     "__________________________________\n";


        std::cin >> wybor;

        switch (wybor) {
            case 1:
                dodaj_element_z_przodu(lista);
                break;
            case 2:
                dodaj_element_z_tylu(lista);
                break;
            case 3:
                usun_wybrany_element(lista);
                break;
            case 4:
                usun_element_z_przodu(lista);
                break;
            case 5:
                usun_element_z_tylu(lista);
                break;
            case 6:
                sprawdz_rozmiar(lista);
                break;
            case 7:
                sprawdz_maksymalny_rozmiar(lista);
                break;
            case 8:
                sortuj_liste(lista);
                break;
            case 9:
                usun_wszystko(lista);
            case 10:
                odwroc_kolejnosc(lista);
            case 11:
                wyswietl(lista);
                break;
            default:
                wlaczone = 0;
                break;
        }
    }


    return 0;
}
