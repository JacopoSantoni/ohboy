#include "../emu_interface.h"


extern "C" int SDL_main(int argc, char** argv);

using namespace std;

class OhBoyEmulator : public EmuInterface
{
	public:
		virtual void run(int argc, char **argv) { SDL_main(argc, argv); }
};

static OhBoyEmulator emulator;

extern "C" EmuInterface* retrieve()
{
	return &emulator;
}
