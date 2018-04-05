//
//  main.cpp
//  Projet_Graphe
//
//  Created by Jeremy Brasse on 04/04/2018.
//  Copyright © 2018 Jeremy Brasse. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Bibli.hpp"
#include <SDL2/SDL.h>
#include "Animal.hpp"
#include "Graphe.hpp"
const int WIDTH = 1024, HEIGHT = 728;
int main(int argc, const char * argv[]) {
    
   //---------------------------
    
    Bibli Afrique("Afrique");
    Afrique.Afrique();
    Afrique.display_adjacence();
    

    
    
    //--------------------------
   
    SDL_Surface *imagesurface=NULL;
    SDL_Surface *windowsurface=NULL;
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window=SDL_CreateWindow("Graphe", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
    windowsurface = SDL_GetWindowSurface(window);
    if(NULL==window){
        std::cout<<"Probleme";
    }
    SDL_Event windowEvent;
    SDL_Surface* pSprite = SDL_LoadBMP("/Users/jeremy/Desktop/SDL-tuto/testtt.bmp");
    if ( pSprite )
    {
        SDL_RenderGetLogicalSize(window, 10, 10)
        SDL_BlitSurface(pSprite,NULL,SDL_GetWindowSurface(window),&dest); // Copie du sprite
        
        SDL_UpdateWindowSurface(window); // Mise à jour de la fenêtre pour prendre en compte la copie du sprite
        SDL_Delay(6000); /* Attendre trois secondes, que l'utilisateur voit la fenêtre */
        
        SDL_FreeSurface(pSprite); // Libération de la ressource occupée par le sprite
    }
    else
    {
        fprintf(stdout,"Échec de chargement du sprite (%s)\n",SDL_GetError());
    }
}
