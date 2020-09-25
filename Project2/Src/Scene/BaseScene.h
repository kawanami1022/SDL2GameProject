#pragma once
class BaseScene
{
public:
	BaseScene();
	~BaseScene();
	virtual void UpDate(BaseScene&, int) = 0;
	virtual void Draw() = 0;

private:
	
};

