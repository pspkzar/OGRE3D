#pragma once
#include "baseapplication.h"
class BasicTutorial2 :
	public BaseApplication
{
public:
	BasicTutorial2(void);
	virtual ~BasicTutorial2(void);
protected:
	virtual void createScene(void);
	virtual void createCamera(void);
	virtual void createViewports(void);
};

