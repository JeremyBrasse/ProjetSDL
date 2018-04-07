
//
//  Bibli.cpp
//  Projet_Graphe
//
//  Created by Jeremy Brasse on 04/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#include "Bibli.hpp"


Bibli::Bibli(std::string name){
    m_name=name;
    
    
}

void Bibli::Afrique(){
    
    std::string fic_name = "/Users/jeremy/Desktop/SDL-tuto/Afrique.txt"; //chemin du fichier Afrique
    std::ifstream fichier(fic_name, std::ios::in);
    if(fichier){
        int nbre_sommet=0; //variables
        int nbre_arrete=0;

        int y=0;
        float regen=0;
        float valeur_arrete;
        fichier>>nbre_sommet; //on regarde le nbre de sommet
        m_nbre=nbre_sommet;
        
        for(int i=0;i<nbre_sommet;i++){
            int id=0;
            std::string name;
            fichier>>id; //id de l'animal
            fichier>>name; //nom de l'animal
            fichier>>regen;
            Animal af(name, id); //contructeur simple de l'animal
            m_Millieu.push_back(af); //on rentre cet animal dans le milieu afrique
            
        }
        
        fichier>>nbre_arrete; //on regarde le nbre d'arrete
        m_Arrete.resize(nbre_arrete); //on resize la matrice
        for(int i=0;i<nbre_arrete;i++){
            m_Arrete[i].resize(nbre_arrete);
        }
        for(int i=0;i<nbre_arrete;i++){ //on rentre toutes les arretes dans la matrice arrete
            for(y=0;y<3;y++){
                fichier>>valeur_arrete;
                
                m_Arrete[i][y]=valeur_arrete;

            }
        }
        
        m_Adjacence.resize(nbre_sommet); //on resize la matrice
        for(int i=0;i<nbre_sommet;i++){
            m_Adjacence[i].resize(nbre_sommet);
        }
        for(int i=0;i<nbre_sommet;i++){
            
            for(int y=0;y<nbre_sommet;y++){
                m_Adjacence[i][y]=0; //on met 0 partout dans la matrice (pour le moment)
            }
        }
        
        for(int i=0;i<nbre_arrete;i++){
            int ani1=m_Arrete[i][0];
            int ani2=m_Arrete[i][1];
            float valeur=m_Arrete[i][2];
            

            m_Adjacence[ani1][ani2]=valeur;
        }
    }
}


void Bibli::foret(){
    
    std::string fic_name = "/Users/jeremy/Desktop/SDL-tuto/foret.txt"; //chemin du fichier Afrique
    std::ifstream fichier(fic_name, std::ios::in);
    if(fichier){
        
        int nbre_sommet=0; //variables
        int nbre_arrete=0;
        float regen=0;
        int y=0;
        int valeur_arrete;
        fichier>>nbre_sommet; //on regarde le nbre de sommet
        m_nbre=nbre_sommet;
        for(int i=0;i<nbre_sommet;i++){
            int id=0;
            std::string name;
            fichier>>id; //id de l'animal
            
            fichier>>name; //nom de l'animal
            fichier>>regen;
            Animal fo(name, id); //contructeur simple de l'animal
            m_Millieu.push_back(fo); //on rentre cet animal dans le milieu
            
        }
        
        fichier>>nbre_arrete; //on regarde le nbre d'arrete
        m_Arrete.resize(nbre_arrete); //on resize la matrice
        for(int i=0;i<nbre_arrete;i++){
            m_Arrete[i].resize(nbre_arrete);
        }
        for(int i=0;i<nbre_arrete;i++){ //on rentre toutes les arretes dans la matrice arrete
            for(y=0;y<2;y++){
                fichier>>valeur_arrete;
                m_Arrete[i][y]=valeur_arrete;
            }
        }
        m_Adjacence.resize(nbre_sommet); //on resize la matrice
        for(int i=0;i<nbre_sommet;i++){
            m_Adjacence[i].resize(nbre_sommet);
        }
        for(int i=0;i<nbre_sommet;i++){
            for(int y=0;y<nbre_sommet;y++){
                m_Adjacence[i][y]=0; //on met 0 partout dans la matrice (pour le moment)
            }
        }
        for(int i=0;i<nbre_arrete;i++){
            int ani1=m_Arrete[i][0];
            int ani2=m_Arrete[i][1];
            float valeur=m_Arrete[i][2];
            m_Adjacence[ani1][ani2]=valeur;
        }
    }
}






void Bibli::display_adjacence(){
    for(int i=0;i<m_nbre;i++){
        std::cout<<std::endl;
        for(int y=0;y<m_nbre;y++){
            std::cout<<m_Adjacence[i][y];
            std::cout<<" ";
        }
    }
}

void Bibli::Bib_display(){
    int nbre=m_nbre;
    if (nbre==0){
        std::cout<<"nbre nul";
    }
    for(int i=0;i<nbre;i++){
        m_Millieu[i].display();
    }
}






int Bibli::choix(){
    int nbre=m_Millieu.size();
    int choix=0;
    for(int a=0;a<nbre;a++){
        std::cout<<a<<") ";
        m_Millieu[a].display();
        std::cout<<std::endl;
    }
    std::cout<<"Choix: ";
    std::cin>>choix;
    return choix;
}

Animal Bibli::get_animal(int nbre){
    Animal a=m_Millieu[nbre];
    return a;
}


std::vector<std::vector<float>> Bibli::give_Adjacence(){
    return m_Adjacence;
}
int Bibli::give_nbre_sommet(){
    return m_nbre;
}
int Bibli::give_id(int nbre){
    int id_donner=m_Millieu[nbre].get_id();
    return id_donner;
}
std::string Bibli::give_name(int nbre){
    return m_Millieu[nbre].get_name();
}

