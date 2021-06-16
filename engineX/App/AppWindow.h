#pragma once
#include "../Engine/Window/Window.h"
#include "../Engine/Graphics/GraphicsEngine.h"


class AppWindow : public Window
{
public:
	AppWindow();
	~AppWindow();

	// Inherited via Window
	virtual void onCreate() override;
	virtual void onUpdate() override;
	virtual void onDestroy() override;
};
