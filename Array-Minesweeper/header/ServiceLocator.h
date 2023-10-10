#pragma once
#include <sfml/Graphics/RenderWindow.hpp>
class EventService;
class GraphicService;
class TimeService;
class SoundService;
class UIService;
class GameplayService;

class ServiceLocator
{
private:
    sf::RenderWindow* game_window;
    EventService* event_service;
    GraphicService* graphic_service;
    TimeService* time_service;

    SoundService* sound_service;
    UIService* ui_service;
    GameplayService* gameplay_service;

    ServiceLocator();
    ~ServiceLocator();

    void createServices();
    void clearAllServices();

public:
    static ServiceLocator* getInstance();

    void initialize();
    void update();
    void render();

    sf::RenderWindow* getGameWindow();
    EventService* getEventService();
    GraphicService* getGraphicService();
    TimeService* getTimeService();
    SoundService* getSoundService();
    UIService* getUIService();
    GameplayService* getGameplayService();
    void deleteServiceLocator();
};