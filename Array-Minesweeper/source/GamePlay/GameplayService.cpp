#include"../../header/GamePlay/Board/GameplayService.h"
namespace Gameplay
{
	GameplayService::GameplayService()
	{
		gameplayController = new GameplayController();
	}
	void GameplayService::Intialize()
	{
		gameplayController->intialize();
	}
	void GameplayService::Update()
	{
		gameplayController->Update();
	}
	void GameplayService::Render()
	{
		gameplayController->Render();
	}
	void GameplayService::StartGame()
	{
		gameplayController->Reset();
	}
}