#pragma once
#include <SFML/Graphics.hpp>
#include "../../header/UI/UIElement/TextView.h"
#include "../../header/UI/Interface/IUIController.h"



using namespace sf;
using namespace UI::UIElement;
using namespace UI;
namespace Gameplay
{
	namespace GameplayUI
	{
		class GameplayUIController : public Interface::IUIController
		{
		private:
			const int font_size = 110;
			const Color text_color = Color::Red;

			const float time_text_top_offset = 65.f;
			const float time_text_left_offset = 1090.f;

		TextView* time_text;

		public:
			GameplayUIController();
			~GameplayUIController();
			 void initialize() ;
			 void update() ;
			 void render() ;
			 void show();

			 void createTexts();
			 void initializeTexts();
			 void initializeTimeText();

			 void   updateTimeText();

			 void destroy();

		};
	}
}