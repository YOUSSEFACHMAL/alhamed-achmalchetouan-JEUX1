#ifndef __Game_Over_H__
#define  __Game_Over_H__

#include "cocos2d.h"

class GameOver : public cocos2d::Layer
{
public:
   
    static cocos2d::Scene* createScene();
    virtual bool init();


    // implement the "static create()" method manually
    CREATE_FUNC(GameOver);

};

#endif //  __Game_Over_H__

