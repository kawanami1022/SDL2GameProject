#pragma once
#include "BaseScene.h"
class EndingScene :
    public BaseScene
{
public:
    EndingScene();
    ~EndingScene();
    void UpDate(BaseScene&, int)override;
    void Draw()override;
private:

};

