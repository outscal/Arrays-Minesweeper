#include "../header/SoundService.h"

SoundService::SoundService() {}

void SoundService::initialize()
{
	loadBackgroundMusicFromFile();
	loadSoundFromFile();
}

void SoundService::loadBackgroundMusicFromFile()
{
	if (!background_music.openFromFile("assets/sounds/background_music.mp3"))
		printf("Error loading background music file");
}

void SoundService::loadSoundFromFile()
{
	if (!buffer_button_click.loadFromFile("assets/sounds/button_click_sound.wav"))
		printf("Error loading sound file");
	if (!buffer_flag.loadFromFile("assets/sounds/flag_sound.wav"))
		printf("Error loading sound file");
	if (!buffer_explosion.loadFromFile("assets/sounds/explosion_sound.wav"))
		printf("Error loading sound file");
}

void SoundService::playSound(SoundType soundType)
{
	switch (soundType)
	{
	case SoundType::BUTTON_CLICK:
		sound_effect.setBuffer(buffer_button_click);
		break;
	case SoundType::FLAG:
		sound_effect.setBuffer(buffer_flag);
		break;
	case SoundType::EXPLOSION:
		sound_effect.setBuffer(buffer_explosion);
		break;
	default:
		printf("Invalid sound type");
		return;
	}

	sound_effect.play();
}

void SoundService::playBackgroundMusic()
{
	background_music.setLoop(true);
	background_music.setVolume(background_music_volume);
	background_music.play();
}