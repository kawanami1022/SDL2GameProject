#pragma once
#include "BaseScene.h"
class GameScene :
    public BaseScene
{
public:
    GameScene();
    ~GameScene();
    void UpDate(BaseScene&, int) override;
    void Draw()override;
private:

};

