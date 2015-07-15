//
// Created by Pierre-Antoine on 29/06/2015.
//

#include "VisualTest.h"
#include "UnitTest.h"

#define UNIT nsTest::UnitTest
#define VISUAL nsTest::VisualTest

#define DEBUG_QUADTREE_VISUAL

int main()
{
    UNIT::ColliderTest();

    //Un seul visual a la fois a choisir
    VISUAL::QuadTreeRenderTest ();

    return 0;
}

#undef UNIT
#undef VISUAL