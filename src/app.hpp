#ifndef __APP_LIME_HPP__
#define __APP_LIME_HPP__

#include "explorer.hpp"
#include "player.hpp"

class App {
	public:
		enum AppState { 
			INIT,
			LOGO,
			MENU,
			BROWSER,
			CONTROLS,
			PLAYLISTS,
			EXITING,
			AppState_MAX,
		};
		static AppState appState;
		static dirList_t dirList;
		static playbackInfo_t pInfo;
		App();
		~App();
		static int MainLoop();
		static void Update();
		static void Draw();
	private:
		static void LibInit();
		static void LibExit();
};
#endif
