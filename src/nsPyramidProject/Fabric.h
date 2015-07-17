//
// Created by Pierre-Antoine on 01/07/2015.
//

#ifndef PYRAMIDPROJECT_FABRIC_H
#define PYRAMIDPROJECT_FABRIC_H

#include <vector>
#include <list>


#include "../nsGameObject/GameObject.h"
#include "../nsGameObject/Player.h"
#include "../nsGameObject/Foreground.h"
#include "../nsPyramidProject/Stair.h"
#include "../nsPyramidProject/Map.h"


namespace nsPyramidProject
{

    class Fabric
    {
    //La dur�e de vie de la fabrique est celle du programme.
        //singleton

    private:
/*
 * Fore & Back ground => Maps
 * Map => stair
 *
 * Seed d�termine stairs,
 */
        /**/long long int                                       seed;
        std::list<std::shared_ptr<nsPyramidProject::Stair>>    stairs;

        std::shared_ptr<nsPyramidProject::Stair>                actualStair;

        /**/std::vector<nsPyramidProject::Map>                 maps;
        /*
         *
         *
         * */
        std::vector<nsGameObject::InteractiveDecoration>    interactiveObjects;
        std::vector<nsGameObject::Player>                   players;
        std::vector<nsGameObject::Attack>                   attacks;


    public:

        //fabrique

        //Utilis� avec Prototype (impl�ment� dans GameObject

    };
}


#endif //PYRAMIDPROJECT_FABRIC_H