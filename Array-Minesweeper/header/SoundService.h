#pragma once
#include "SFML/Audio.hpp"

enum class SoundType
{
	BUTTON_CLICK,
	FLAG,
	EXPLOSION,
};

class SoundService
{
private:
	const int background_music_volume = 30;

	sf::Music background_music;
	sf::Sound sound_effect;
	sf::SoundBuffer buffer_button_click;
	sf::SoundBuffer buffer_flag;
	sf::SoundBuffer buffer_explosion;

	void loadBackgroundMusicFromFile();
	void loadSoundFromFile();

public:
	SoundService();

	void initialize();

	void playSound(SoundType soundType);
	void playBackgroundMusic();
};