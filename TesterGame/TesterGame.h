#pragma once

#include<vulkanEngine\Window.h>


class TesterGame
{
public:
	TesterGame();
	~TesterGame();

	void Run();
private:
	void InitSystems();

	void GameLoop();

	VulkanEngine::Window window;
};

