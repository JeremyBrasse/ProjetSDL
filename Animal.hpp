//
//  Animal.hpp
//  Projet_Graphe
//
//  Created by Jeremy Brasse on 04/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <string>

class Animal{
public: //créer un getter puis passer en protected
    int m_ID;
    int m_x;
    int m_y;
    std::string m_name;
    int m_quantite;

    Animal(std::string name);
    Animal(std::string name,int ID);
    void Set();
    void display();
    void long_display();
};


#endif /* Animal_hpp */
