#include <iostream>
#include "Jar.h"
#include "Cookie.h"

void fillCookieJar(Jar<Cookie>& CookieJar);
char actionMenu();


int main() {
    Jar<Cookie> CookieJar;

    while(true)
        switch (toupper(actionMenu())){
            case 'A':{
                fillCookieJar(CookieJar);
                break;
            }
            case 'B':{
                CookieJar.emptyContainer();
                std::cout << "Cookie Jar Emptied!\n";
                break;
            }
            case 'C':{
                if(!CookieJar.empty())
                    std::cout << "Here's your cookie! {" << CookieJar << "}\n";
                else
                    std::cout << "Cookie Jar Empty :(\n";
                break;
            }
            case 'D':{
                std::cout << "Size: " << CookieJar.size() << std::endl;
                break;
            }
            case 'E': {
                std::cout << "Thanks Bye!";
                exit(100);
            }
            default:
                std::cout << "Invalid Selection\n";
        }

}

void fillCookieJar(Jar<Cookie>& CookieJar){
    unsigned int numCookies;
    std::cout << "How many cookies would you like to fill?: ";
    std::cin >> numCookies;

    for (int i = 0; i< numCookies; i++) {
        CookieJar += {(CookieFlavor)(rand() % LAST_FLAVOR)};
    }

    std::cout << CookieJar.size() << " cookies filled!\n";
}

char actionMenu() {

    char option;

    std::cout << "A - Fill Cookies\n"
                 "B - Empty Cookie Jar\n"
                 "C - Take Cookie from Jar\n"
                 "D - Jar Size\n"
                 "E - Exit Program\n";

    std::cin >> option;


    return option;
}



