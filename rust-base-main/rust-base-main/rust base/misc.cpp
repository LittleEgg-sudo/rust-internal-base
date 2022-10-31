#include "misc.h"
#include "game/classes.cpp"


namespace misc
{
	void infJump()
	{
		auto inf = memory::read(gameAssembly + offsets::movement);
		if (GetAsyncKeyState(VK_SPACE))
		{
			memory::write<Vector3>(inf + 0xc8, Vector3(0.0f, 10000000, 0));
			memory::write<Vector3>(inf + 0xc4, Vector3(99999999, 99999999, 99999999));
		} 
	}

	void admin()
	{
		memory::write(offsets::playerFlags, 4);
	}

}