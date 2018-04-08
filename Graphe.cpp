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
    int rajout=0; //variables
    int choix=1;
    int ani=0;
    bool deja=0;
    m_nbre_sommet_bibli=bib.give_nbre_sommet();
    
    m_Adjacence_graphe.resize(m_nbre_sommet_bibli);
    for(int i=0;i<m_nbre_sommet_bibli;i++){
        m_Adjacence_graphe[i].resize(m_nbre_sommet_bibli);
    }
    
    
    
    int l=m_Graphe.size(); //on regarde la taille du graphe
    while(choix!=0){
        std::cout<<"Voici votre graphe: "<<std::endl; //on réaffiche le graphe à chaque fois
        display();
        std::cout<<std::endl;
        std::cout<<"1) Ajouter // 2) Quitter: "; //l'utilsateur peut soit ajouter soit quitter
        std::cin>>choix;
        std::cout<<std::endl;
        if(choix==1){
            std::cout<<"Quel Animal ?"<<std::endl;
            ani=bib.choix();
            for(int y=0;y<l;y++){ //on regarde si l'animal est deja dans le graph
                if(ani==m_Graphe[y].get_id()){
                    std::cout<<"Combien voulez vous en rajouter: ";
                    std::cin>>rajout;
                    m_Graphe[y].set_quantie(rajout);
                    deja=1;
                    //l++;
                }
                
                }
            if(deja==0){ //sinon on le rajoute
                m_Graphe.push_back(bib.get_animal(ani));
                m_Graphe[l].Set();
                m_liste_id.push_back(m_Graphe[l].get_id());
                l++;
                
            }
            deja=0;
            
        }
        if(choix==2){
            m_size=m_Graphe.size();
            create_adjacence(bib);
            create_k(bib);
            
            choix=0;
            
        }
    }
    
    }

Graphe::Graphe(std::vector<Animal> Graphe,std::string name,Bibli bib){ //constructeur pour sauvegarde
    m_name=name; //nom
    m_Graphe=Graphe; //graphe
    int nbre=m_Graphe.size();
    m_size=nbre;
    create_adjacence(bib);
    create_k(bib);
}


void Graphe::supprimer(Bibli a){
    int choix=0;
    std::cout<<"Lequel voulez vous supprimer: "<<std::endl;
    int ani=0;
    int nbre=m_size;
    for(int i=0;i<nbre;i++){
        std::cout<<i<<") ";
        m_Graphe[i].display();
        std::cout<<std::endl;
    }
    nbre--;
    std::cout<<"Votre choix: "; //!!! A blinder
    std::cin>>choix;
    if(choix==nbre){ //on regarde si l'élement à supprimer est le dernier du tableau
        m_liste_id.pop_back();
        m_Graphe.pop_back();
    }
    else{
        for(int i=choix;i<nbre;i++){
            m_liste_id[i]=m_liste_id[i+1];
            m_Graphe[i]=m_Graphe[i+1];
            
        }
        m_liste_id.pop_back();
        m_Graphe.pop_back();
        
    }

    m_size=m_Graphe.size();
    create_adjacence(a);
    
}

void Graphe::deplacer(){
    int choix=0;
    int new_x=0;
    int new_y=0;
    std::cout<<"Lequel voulez vous deplacer: "<<std::endl;
    int ani=0;
    int nbre=m_size;
    for(int i=0;i<nbre;i++){
        std::cout<<i<<") ";
        m_Graphe[i].display();
        std::cout<<std::endl;
    }
    std::cout<<"Votre choix: "; //!!! A blinder
    std::cin>>choix;
    std::cout<<"Nouveau x: ";
    std::cin>>new_x;
    std::cout<<"Nouveau y: ";
    std::cin>>new_y;
    m_Graphe[choix].set_x(new_x);
    m_Graphe[choix].set_y(new_y);
    
    
}

void Graphe::ajouter(Bibli a){
    int l=m_size;  //fonction similaire a celle de créaton de graphe
    int rajout=0;
    int deja=0;
    int ani=0;
    ani=a.choix();
    for(int y=0;y<l;y++){ //on regarde si l'animal est deja dans le graph
        if(ani==m_Graphe[y].get_id()){
            std::cout<<"Combien voulez vous en rajouter: ";
            std::cin>>rajout;
            m_Graphe[y].set_quantie(rajout);
            deja=1;
            //l++;
        }
        
    }
    if(deja==0){ //sinon on le rajoute
        m_Graphe.push_back(a.get_animal(ani));
        m_Graphe[l].Set();
        m_liste_id.push_back(m_Graphe[l].get_id());
        l++;
        
    }
    deja=0;
    m_size=m_Graphe.size();
    create_adjacence(a);
    create_k(a);
    
    
}

void Graphe::create_k(Bibli a){
    std::vector<std::vector<float>> adjacence=m_Adjacence_graphe;
    int nbre=m_size;
    float K = 0.0;
    int nbre_sommet=m_nbre_sommet_bibli;
    for(int i=0;i<nbre_sommet;i++){
        for(int z=0;z<nbre;z++){
            int id=m_Graphe[z].get_id();
            if(id==i){
                int pop=m_Graphe[id].give_quantite();
                K=pop*2;
            }
        }
        for(int y=0;y<nbre_sommet;y++){
            
            if(adjacence[i][y]!=0){
                for(int z=0;z<nbre;z++){
                    int id=m_Graphe[z].get_id();
                    if(y==id){
                        K=K+m_Graphe[z].give_quantite()*adjacence[i][y];
                    }
                }
            }
            for(int z=0;z<nbre;z++){
                int id=m_Graphe[z].get_id();
                if(i==id){
                    m_Graphe[id].set_K(K);
                }
            }
        }
    }
}

void Graphe::create_adjacence(Bibli a){
    std::vector<std::vector<float>> adjacence_bibli=a.give_Adjacence();
    int nbre=m_size;

    int nbre_sommet=m_nbre_sommet_bibli;


    int deja=0;
    for(int i=0;i<nbre_sommet;i++){
        
        for(int y=0;y<nbre;y++){
            if(i==m_liste_id[y]){
                deja++;
            }

        }
        if(deja==0){
            for(int z=0;z<nbre_sommet;z++){
                adjacence_bibli[i][z]=0;
                adjacence_bibli[z][i]=0;
            }
        }
        else{
            deja=0;
        }
    }
    m_Adjacence_graphe=adjacence_bibli;
}



void Graphe::display_Adjacence_graphe(){
    int nbre=m_nbre_sommet_bibli;
    for(int i=0;i<nbre;i++){
        std::cout<<std::endl;
        for(int y=0;y<nbre;y++){
            std::cout<<m_Adjacence_graphe[i][y];
            std::cout<<" ";
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

void Graphe::display_quant(){
    
    int nbre=m_Graphe.size();
    for(int a=0;a<nbre;a++){
        std::cout<<a<<") ";
        m_Graphe[a].display_quantite();
    }
}


int Graphe::get_size(){
    int size=m_Graphe.size();
    return size;
}

std::vector<Animal> Graphe::give_graphe(){
    return m_Graphe;
}

std::vector<std::vector<float>> Graphe::give_adj(){
    return m_Adjacence_graphe;
}
int Graphe::give_nbre_sommet_bibli(){
    return m_nbre_sommet_bibli;
}

void Graphe::regen(){
    std::cout<<"Combien de temps voulez vous faire durer la simulation (en mois): ";
    int temps;
    std::cin>>temps;
    int taille=m_size;
    for(int i=0;i<temps;i++){
        for(int y=0;y<taille;y++){
            m_Graphe[y].set_regen();
        }
        attaque();
        std::cout<<"Population au bout du mois "<<i<<" :"<<std::endl;
        display_quant();
        std::cout<<std::endl;
    
    }
}
void Graphe::attaque(){
    std::vector<std::vector<float>> adja=m_Adjacence_graphe;
    int nbre=m_nbre_sommet_bibli;
    for(int i=0;i<nbre;i++){
        for(int y=0;y<nbre;y++){
            if(adja[i][y]!=0){
                float attaque=adja[i][y];
                int quant_a=m_Graphe[y].give_quantite();

                int quant_b=m_Graphe[i].give_quantite();
                float new_quant=quant_a-(quant_b*attaque);
                if(new_quant<0){
                    new_quant=0;
                }
                m_Graphe[y].set_quant(new_quant);
            }
        }
    }
}
