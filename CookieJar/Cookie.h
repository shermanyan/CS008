//
// Created by Sherman Yan on 1/17/23.
//

#ifndef COOKIEJAR_COOKIE_H
#define COOKIEJAR_COOKIE_H
#include "CookieFlavorEnums.h"
#include "iostream"
struct Cookie {

    CookieFlavor flavor = CHOCOLATE_CHIP;

    friend std::ostream& operator<<(std::ostream& out, const Cookie& cookie);
};

std::ostream &operator<<(std::ostream &out, const Cookie &cookie) {
    switch (cookie.flavor) {
        case CHOCOLATE_CHIP: {
            out << "Chocolate Chip";
            break;
        }
        case OATMEAL_RAISIN: {
            out << "Oatmeal Raisin";
            break;
        }
        case PEANUT_BUTTER:{
            out << "Peanut Butter";
            break;
        }
        case SUGAR_COOKIE:{
            out << "Sugar Cookie";
            break;
        }
        default:
            exit(10);
    }
    return out;
}


#endif //COOKIEJAR_COOKIE_H
