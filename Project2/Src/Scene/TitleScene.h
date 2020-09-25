#pragma once
#include "BaseScene.h"

class TitleScene :
	public BaseScene
{
public:
	TitleScene();
	~TitleScene();
	void UpDate(BaseScene&, int) override;
	void Draw()override;
private:

};

