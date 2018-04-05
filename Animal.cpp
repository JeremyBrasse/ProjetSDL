//
//  Animal.cpp
//  Projet_Graphe
//
//  Created by Jeremy Brasse on 04/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#include "Animal.hpp"
#include <string>
#include <vector>

Animal::Animal(std::string name){
    m_name=name;
};

void Animal::Set(){
    int quantite;
    int x;
    int y;
    std::cout<<"Quantite: ";
    std::cin>>quantite;
    m_quantite=quantite;
    std::cout<<"X: ";
    std::cin>>x;
    std::cout<<"Y: ";
    std::cin>>y;
    m_x=x;
    m_y=y;
    
}

Animal::Animal(std::string name,int ID){
    m_ID=ID;
    m_name=name;
}

void Animal::display(){
    
    std::cout<<m_name<<std::endl;
}

void Animal::long_display(){
    std::cout<<m_name<<std::endl;
    std::cout<<"x:"<<m_x<<std::endl;
    std::cout<<"y:"<<m_y<<std::endl;
    std::cout<<"Quantite: "<<m_quantite<<std::endl;
}
