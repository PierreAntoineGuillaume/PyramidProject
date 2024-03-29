//
// Created by Pierre-Antoine on 01/07/2015.
//

#ifndef PYRAMIDPROJECT_INTERFACE_H
#define PYRAMIDPROJECT_INTERFACE_H

#include "../Utility/typedef.hpp"
#include "../nsGameEngine/nsCollision/Collider.h"

namespace nsGameObject
{
    class ICollidable
    {
    public:
        virtual bool collides (const nsGameEngine::nsCollider::Collider & other ) const noexcept = 0;
        virtual bool fitsInto (const nsGameEngine::nsCollider::Collider & other ) const noexcept = 0;
        virtual nsGameEngine::nsCollider::Collider & getCollider() const noexcept = 0;
        virtual ~ICollidable () {}
    };
    class IMovable
    {
    public:
        virtual void move(Int16 Up,Int16 Right) noexcept = 0;
        virtual UInt16 X() const noexcept = 0;
        virtual UInt16 Y() const noexcept = 0;
        virtual ~IMovable () {}
    };
}

#endif //PYRAMIDPROJECT_INTERFACE_H
