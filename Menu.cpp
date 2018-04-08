//
//  Menu.cpp
//  SDL-tuto
//
//  Created by Jeremy Brasse on 08/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#include "Menu.hpp"

void boucle(){
    Bibli Foret("foret"); //initialisation foret
    Foret.foret(); //initialisation foret
    
    int a=5;
    
    
    
    Chargement chargeraff; //chargement
    chargeraff.Chargement_Af(); //chargement
    Chargement chargerfo; //chargement
    chargerfo.Chargement_Fo(); //chargement
    Chargement chargerpoi;
    chargerpoi.Chargement_Po();
    
    affichage aff; //initialisation affichage
    
    
    Bibli Afrique("Afrique"); //initialisation Afrique
    Afrique.Afrique(); //initialisation Afrique
    Graphe test1;
    Graphe test2;
    Graphe test3;
    
    int aa=5;
    
    Bibli Poisson("Poisson");
    Poisson.mer();
    
    

    
    int choix=1;
    int choix2=1;
    int choix3=1;
    std::cout<<"********** BIENVENUE **********"<<std::endl<<"******************************"<<std::endl;
    std::cout<<"Veuillez chosisir un millieu: "<<std::endl;

    while(choix!=0){
        choix2=1;
        choix3=1;
        std::cout<<"0) Quitter"<<std::endl;
        std::cout<<"1) Afrique"<<std::endl;
        std::cout<<"2) Foret"<<std::endl;
        std::cout<<"3) Mer"<<std::endl;
        std::cout<<"Votre choix: ";
        std::cin>>choix;
        if(choix==1){
            std::cout<<"Souhaitez vous: "<<std::endl<<"1) Charger un modèle de base"<<std::endl<<"2) En créer un nouveau"<<std::endl<<"Votre choix: ";
            std::cin>>choix2;
            if(choix2==1){
                Graphe t1=chargeraff.m_sauvegarde[0];
                test1=t1;
            }
            if(choix2==2){
                Graphe t1("Afrique",Afrique);
                test1=t1;
            }
            while(choix3!=6){
                std::cout<<"Souhaitez vous: "<<std::endl<<"1) Afficher"<<std::endl<<"2) Deplacer un element"<<std::endl<<"3) Ajouter un element"<<std::endl<<"4) Afficher le nombre d'element fortement connexe"<<std::endl<<"5) Simuler"<<std::endl<<"6) Revenir au menu"<<std::endl<<"Votre choix: ";
                std::cin>>choix3;
                if(choix3==1){
                    aff.display_fenetre_afrique(test1);
                }
                if(choix3==2){
                    test1.deplacer();
                }
                if(choix3==3){
                    test1.ajouter(Afrique);
                }
                if(choix3==4){
                    Forte fo(test1);
                    fo.prog();
                }
                if(choix3==5){
                    test1.regen();
                }
                if(choix3==6){
                    choix=5;
                }
                
            }
            
            
           
            
        }
        if(choix==3){
            std::cout<<"Souhaitez vous: "<<std::endl<<"1) Charger un modèle de base"<<std::endl<<"2) En créer un nouveau"<<std::endl<<"Votre choix: ";
            std::cin>>choix2;
            if(choix2==1){
                Graphe t3=chargerpoi.m_sauvegarde[0];
                test3=t3;
                test3.display();
            }
            if(choix2==2){
                Graphe t3("Mer",Poisson);
                test3=t3;
            }
            while(choix3!=6){
                std::cout<<"Souhaitez vous: "<<std::endl<<"1) Afficher"<<std::endl<<"2) Deplacer un element"<<std::endl<<"3) Ajouter un element"<<std::endl<<"4) Afficher le nombre d'element fortement connexe"<<std::endl<<"5) Simuler"<<std::endl<<"6) Revenir au menu"<<std::endl<<"Votre choix: ";
                std::cin>>choix3;
                if(choix3==1){
                    aff.display_fenetre_mer(test3);
                }
                if(choix3==2){
                    test3.deplacer();
                }
                if(choix3==3){
                    test3.ajouter(Afrique);
                }
                if(choix3==4){
                    Forte fo(test3);
                    fo.prog();
                }
                if(choix3==5){
                    test3.regen();
                }
                if(choix3==6){
                    choix=5;
                }
                
            }
            
            
            
            
        }
        if(choix==2){
            std::cout<<"Souhaitez vous: "<<std::endl<<"1) Charger un modèle de base"<<std::endl<<"2) En créer un nouveau"<<std::endl<<"Votre choix: ";
            std::cin>>choix2;
            if(choix2==1){
                Graphe t2=chargerfo.m_sauvegarde[0];
                test2=t2;
            }
            if(choix2==2){
                Graphe t2("Foret",Foret);
                test2=t2;
            }
            while(choix3!=6){
                std::cout<<"Souhaitez vous: "<<std::endl<<"1) Afficher"<<std::endl<<"2) Deplacer un element"<<std::endl<<"3) Ajouter un element"<<std::endl<<"4) Afficher le nombre d'element fortement connexe"<<std::endl<<"5) Simuler"<<std::endl<<"6) Revenir au menu"<<std::endl<<"Votre choix: ";
                std::cin>>choix3;
                if(choix3==1){
                    aff.display_fenetre_foret(test2);
                }
                if(choix3==2){
                    test2.deplacer();
                }
                if(choix3==3){
                    test2.ajouter(Afrique);
                }
                if(choix3==4){
                    Forte fo(test2);
                    fo.prog();
                }
                if(choix3==5){
                    test2.regen();
                }
                if(choix3==6){
                    choix=5;
                }
                
            }
            
        }
        
        
    }
}
