//
//  Graphe.cpp
//  Projet_Graphe
//
//  Created by Jeremy Brasse on 04/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#include "Graphe.hpp"
#include <vector>
#include <iostream>
#include <string>

Graphe::Graphe(std::string name,Bibli bib){
    m_name=name;
    int rajout=0;
    int choix=1;
    int ani=0;
    bool deja=0;
    int l=m_Graphe.size();
    while(choix!=0){
        std::cout<<"Voici votre graphe: "<<std::endl;
        display();
        std::cout<<std::endl;
        std::cout<<"1) Ajouter // 2) Quitter: ";
        std::cin>>choix;
        std::cout<<std::endl;
        if(choix==1){
            std::cout<<"Quel Animal ?"<<std::endl;
            ani=bib.choix();
            for(int y=0;y<l;y++){ //on regarde si l'animal est deja dans le graph
                if(ani==m_Graphe[y].m_ID){
                    std::cout<<"Combien voulez vous en rajouter: ";
                    std::cin>>rajout;
                    m_Graphe[y].m_quantite=m_Graphe[y].m_quantite+rajout;
                    l++;
                    deja=1;
                }
                
                }
            if(deja==0){
                m_Graphe.push_back(bib.get_animal(ani));
                m_Graphe[l].Set();
                l++;
            }
            deja=0;
            
        }
        if(choix==2){
            choix=0;
        }
    }
}

void Graphe::display(){
    int nbre=m_Graphe.size();
    for(int a=0;a<nbre;a++){
        std::cout<<a<<") ";
        m_Graphe[a].long_display();
    }
}
