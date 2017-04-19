#include "TesterGame.h"



TesterGame::TesterGame()
{
}


TesterGame::~TesterGame()
{
}

void TesterGame::Run()
{
	void InitSystems();

	
}

void TesterGame::InitSystems()
{
	window.Create();

	void GameLoop();
}

void TesterGame::GameLoop()
{

	while (!glfwWindowShouldClose(window.window)) {
		glfwPollEvents();
	}
}
