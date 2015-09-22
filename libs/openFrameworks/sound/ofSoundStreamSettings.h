#pragma once

class ofSoundSteamSettings{
public:
	ofSoundSettings()
	:sampleRate(44100)
	,bufferSize(1024)
	,nBuffers(4) {}
	,outDeviceID(-1)
    ,inDeviceID(-1)
	,soundOutputPtr(nullptr)
	,soundInputPtr(nullptr)
	,tickCount(0)
	,nOutputChannels(0)
	,nInputChannels(0) {};
	
	virtual ~ofSoundSteamSettings(){};

protected:
	int sampleRate;
	int outDeviceID;
	int inDeviceID;
	int bufferSize;
	int nInputChannels;
	int nOutputChannels;
	ofBaseSoundInput * soundInputPtr;
	ofBaseSoundOutput * soundOutputPtr;
	ofSoundBuffer inputBuffer;
	ofSoundBuffer outputBuffer;
	long unsigned long tickCount;
};

class ofRTSoundStreamSettings: public ofSoundStreamSettings{
public:

};
