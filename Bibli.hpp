//
//  Bibli.hpp
//  Projet_Graphe
//
//  Created by Jeremy Brasse on 04/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#ifndef Bibli_hpp
#define Bibli_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <fstream>
#include "Animal.hpp"

class Bibli{
    std::vector<Animal> m_Millieu;
    std::vector<std::vector<int>> m_Arrete;
    std::vector<std::vector<int>> m_Adjacence;
    std::string m_name;
    int m_nbre;

public:
    
    Bibli(std::string name);
    void Afrique();
    int choix();
    void recup_fichier(std::string nom_du_fichier);
    void Bib_display();
    Animal get_animal(int nbre);
    void display_adjacence();
};

#endif /* Bibli_hpp */
