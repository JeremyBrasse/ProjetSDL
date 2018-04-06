//
//  Image.cpp
//  SDL-tuto
//
//  Created by Jeremy Brasse on 05/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#include "Image.hpp"


affichage::affichage(){
    
    
}

void affichage::fleche(Graphe a,Bibli bib){
    std::vector<Animal> liste=a.give_graphe();
    int nbre=a.get_size();
    std::vector<std::vector<int>> Adjacence=bib.give_Adjacence();
    for(int i=0;i<nbre;i++){
        for(int y=0;y<nbre;y++){
            if(Adjacence[i][y]==1){
                for(int z=0;z<nbre;z++){
            }
        }
    }
}
}

void affichage::display_fenetre(Graphe a){
    int nbre=a.get_size();
    std::vector<Animal> liste=a.give_graphe();
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Renderer* renderer;//Déclaration du renderer

    SDL_Window *window=SDL_CreateWindow("Graphe", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_OPENGL);
    SDL_Surface* pSprite0 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Homme2.bmp");
    SDL_Surface* pSprite1 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/elephanteau 2_2.bmp");
    SDL_Surface* pSprite2 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Feuillage2.bmp");
    SDL_Surface* pSprite3 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Lion2.bmp");
    SDL_Surface* pSprite4 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Fruits2.bmp");
    SDL_Surface* pSprite5 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Singe2.bmp");
    SDL_Surface* pSprite6 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Leopard2.bmp");
    SDL_Surface* pSprite7 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Antilope2.bmp");
    SDL_Surface* pSprite8 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Plante2.bmp");
    SDL_Surface* pSprite9 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Criquet2.bmp");
    SDL_Surface* pSprite10 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Papillon2.bmp");
    SDL_Surface* pSprite11 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Mante2.bmp");
    SDL_Surface* pSprite12 = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/Afrique/Aigle2.bmp");
    for(int i=0;i<nbre;i++){
        if(0==liste[i].get_id()){
            
            SDL_Rect dest0;
            int i_x0=liste[i].get_x();
            int i_y0=liste[i].get_y();
            dest0.x=i_x0;
            dest0.y=i_y0;
            SDL_BlitSurface(pSprite0,NULL,SDL_GetWindowSurface(window),&dest0);
        }
        if(1==liste[i].get_id()){
            
            SDL_Rect dest1;
            int i_x1=liste[i].get_x();
            int i_y1=liste[i].get_y();
            dest1.x=i_x1;
            dest1.y=i_y1;
            SDL_BlitSurface(pSprite1,NULL,SDL_GetWindowSurface(window),&dest1);
        }
        if(2==liste[i].get_id()){
            
            SDL_Rect dest2;
            int i_x2=liste[i].get_x();
            int i_y2=liste[i].get_y();
            dest2.x=i_x2;
            dest2.y=i_y2;
            SDL_BlitSurface(pSprite2,NULL,SDL_GetWindowSurface(window),&dest2);
        }
        if(3==liste[i].get_id()){
            
            SDL_Rect dest3;
            int i_x3=liste[i].get_x();
            int i_y3=liste[i].get_y();
            dest3.x=i_x3;
            dest3.y=i_y3;
            SDL_BlitSurface(pSprite3,NULL,SDL_GetWindowSurface(window),&dest3);
        }
        if(4==liste[i].get_id()){
            
            SDL_Rect dest4;
            int i_x4=liste[i].get_x();
            int i_y4=liste[i].get_y();
            dest4.x=i_x4;
            dest4.y=i_y4;
            SDL_BlitSurface(pSprite4,NULL,SDL_GetWindowSurface(window),&dest4);
        }
        if(5==liste[i].get_id()){
            
            SDL_Rect dest5;
            int i_x5=liste[i].get_x();
            int i_y5=liste[i].get_y();
            dest5.x=i_x5;
            dest5.y=i_y5;
            SDL_BlitSurface(pSprite5,NULL,SDL_GetWindowSurface(window),&dest5);
        }
        if(6==liste[i].get_id()){
            
            SDL_Rect dest6;
            int i_x6=liste[i].get_x();
            int i_y6=liste[i].get_y();
            dest6.x=i_x6;
            dest6.y=i_y6;
            SDL_BlitSurface(pSprite6,NULL,SDL_GetWindowSurface(window),&dest6);
        }
        if(7==liste[i].get_id()){
            
            SDL_Rect dest7;
            int i_x7=liste[i].get_x();
            int i_y7=liste[i].get_y();
            dest7.x=i_x7;
            dest7.y=i_y7;
            SDL_BlitSurface(pSprite7,NULL,SDL_GetWindowSurface(window),&dest7);
        }
        if(8==liste[i].get_id()){
            
            SDL_Rect dest8;
            int i_x8=liste[i].get_x();
            int i_y8=liste[i].get_y();
            dest8.x=i_x8;
            dest8.y=i_y8;
            SDL_BlitSurface(pSprite7,NULL,SDL_GetWindowSurface(window),&dest8);
        }
        if(9==liste[i].get_id()){
            SDL_Rect dest9;
            int i_x9=liste[i].get_x();
            int i_y9=liste[i].get_y();
            dest9.x=i_x9;
            dest9.y=i_y9;
            SDL_BlitSurface(pSprite9,NULL,SDL_GetWindowSurface(window),&dest9);
        }
        if(10==liste[i].get_id()){
            SDL_Rect dest10;
            int i_x10=liste[i].get_x();
            int i_y10=liste[i].get_y();
            dest10.x=i_x10;
            dest10.y=i_y10;
            SDL_BlitSurface(pSprite10,NULL,SDL_GetWindowSurface(window),&dest10);
        }
        if(11==liste[i].get_id()){
            SDL_Rect dest11;
            int i_x11=liste[i].get_x();
            int i_y11=liste[i].get_y();
            dest11.x=i_x11;
            dest11.y=i_y11;
            SDL_BlitSurface(pSprite11,NULL,SDL_GetWindowSurface(window),&dest11);
        }
        if(12==liste[i].get_id()){
            SDL_Rect dest12;
            int i_x12=liste[i].get_x();
            int i_y12=liste[i].get_y();
            dest12.x=i_x12;
            dest12.y=i_y12;
            SDL_BlitSurface(pSprite12,NULL,SDL_GetWindowSurface(window),&dest12);
            
        }
        
    }




    SDL_UpdateWindowSurface(window); // Mise à jour de la fenêtre pour prendre en compte la copie du sprite
    SDL_Delay(12000); /* Attendre trois secondes, que l'utilisateur voit la fenêtre */

    
}
