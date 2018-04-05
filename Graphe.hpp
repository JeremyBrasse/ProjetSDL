//
//  Graphe.hpp
//  Projet_Graphe
//
//  Created by Jeremy Brasse on 04/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#ifndef Graphe_hpp
#define Graphe_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Bibli.hpp"

class Graphe{
    std::string m_name;
    std::vector<Animal> m_Graphe;
public:
    Graphe(std::string name,Bibli bib);
    void display();
};

#endif /* Graphe_hpp */
