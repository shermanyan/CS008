//
// Created by Sherman Yan on 12/6/22.
//

#include "Fonts.h"

std::map<FontsEnum, sf::Font> Fonts::map;

void Fonts::load(FontsEnum font) {

    if (map.count(font) == 0 && !map[font].loadFromFile(getPath(font)))
        exit(20);

}

std::string Fonts::getPath(FontsEnum font) {
    switch (font) {
        case OPEN_SANS:
            return "SFML_Tools/fonts/OpenSans-Bold.ttf";
        case COURIER:
            return "SFML_Tools/fonts/Courier.ttf";
        case PTSERIF_BOLD:
            return "SFML_Tools/fonts/PTSerif-Bold.ttf";
        case SONO_BOLD:
            return "SFML_Tools/fonts/Sono-Bold.ttf";
        case TITAN_ONE:
            return "SFML_Tools/fonts/TitanOne-Regular.ttf";
        case LILITA_ONE:
            return "SFML_Tools/fonts/LilitaOne-Regular.ttf";
        case RUBIK_GEMSTONES:
            return "SFML_Tools/fonts/RubikGemstones-Regular.ttf";
        case HIND_MADURAI:
            return "SFML_Tools/fonts/HindMadurai-Medium.ttf";
        case HIND_MADURAI_LIGHT:
            return "SFML_Tools/fonts/HindMadurai-Light.ttf";
        case LAST_FONT:
            break;
    }
}

sf::Font &Fonts::getFont(FontsEnum font) {
    if (map.count(font) == 0)
        load(font);
    return map.at(font);
}
