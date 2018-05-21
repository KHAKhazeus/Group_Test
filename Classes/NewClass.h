//
//  NewClass.h
//  BattleField_RTS
//
//  Created by Khazeus on 2018/5/21.
//

#ifndef NewClass_h
#define NewClass_h
#include "cocos2d.h"

class NewClass : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(NewClass);
};

#endif /* NewClass_h */
