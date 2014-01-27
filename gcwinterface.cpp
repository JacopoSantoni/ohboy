#include "../emu_interface.h"


extern "C" int SDL_main(int argc, char** argv);

using namespace std;

class OhBoyEmulator : public CoreInterface
{
	private:

	public:
		OhBoyEmulator()
		{
      registerInformations(CONSOLE_GAME_BOY, "ohboy", "ohboy", "1.0");
      registerExtension("gb");
			registerExtension("gbc");
		}

		virtual void run(int argc, char **argv) { SDL_main(argc, argv); }
};

static OhBoyEmulator emulator;

extern "C" CoreInterface* retrieve()
{
	return &emulator;
}
