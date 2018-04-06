//
//  Image.hpp
//  SDL-tuto
//
//  Created by Jeremy Brasse on 05/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#ifndef Image_hpp
#define Image_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include <SDL2/SDL.h>
#include "Graphe.hpp"
#include "Animal.hpp"
#include "Bibli.hpp"
const int WIDTH = 1024, HEIGHT = 728;

class affichage{
public:
    
    affichage();
    void display_fenetre(Graphe a);
    void fleche(Graphe a,Bibli bib);
};


#endif /* Image_hpp */
