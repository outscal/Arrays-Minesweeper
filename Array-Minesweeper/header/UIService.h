#pragma once
#include <SFML/Graphics/RenderWindow.hpp>

class SplashScreenUIController;
class MainMenuUIController;
class InstructionsScreenUIController;
class GameplayUIController;
class CreditsScreenUIController;

class UIService
{
private:
	SplashScreenUIController* splash_screen_controller;
	MainMenuUIController* main_menu_controller;
	InstructionsScreenUIController* instructions_screen_ui_controller;
	GameplayUIController* gameplay_ui_controller;
	CreditsScreenUIController* credits_screen_ui_controller;

	sf::RenderWindow* game_window;

	void createControllers();
	void initializeControllers();
	void destroy();

public:
	UIService();
	~UIService();

	void initialize();
	void update();
	void render();
	void show();
};