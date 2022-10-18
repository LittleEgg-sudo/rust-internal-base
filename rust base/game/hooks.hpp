#pragma once
#include "../includes.hpp"
#include "../game/classes.hpp"
#include "../utils/returnspoofer.hpp"
#include "../utils/memory.hpp"
#include "../gui_framework.h"

#define toggle(x) x = !x
bool reset_capsule = false;



namespace hooks
{

	namespace ddraw
	{
		bool menuopen = true;
		inline void ongui_hook(void* instance)
		{
			auto skin = functions::get_draw_skin();
			variables::draw_label = *reinterpret_cast<uintptr_t*>(skin + 0x38);
			functions::set_draw_alignment(variables::draw_label, 0x0);
			functions::set_draw_font_size(variables::draw_label, 12);
			functions::set_draw_color(Vector4(1, 1, 1, 1));
			
			//menu
			mid_framework::begin(xorstr_("cheat"));
			mid_framework::add_tab("test one", 0, 1);
			mid_framework::add_tab("test two", 1, 2);
			mid_framework::add_tab("test three", 2, 3);
			mid_framework::add_tab("test four", 3, 4);
			mid_framework::add_tab("test five", 4, 5);
			mid_framework::add_child(2);
			mid_framework::end();
				
			functions::outline(Vector4(10, 10, 150, 20), xorstr_("cheat | private build"), Vector4(0, 0, 0, 1));
			functions::label(Vector4(10, 10, 150, 20), xorstr_("cheat | private build"), Vector4(1, 1, 1, 1));

			return;
		}

		static bool wakeup{ true };
		uintptr_t performaceui_hook;
		void hk_performance_ui_update(void* instance)
		{
			if (wakeup)
			{
				auto game_object = il2cpp::methods::object_new(il2cpp::init_class(xorstr_("GameObject"), xorstr_("UnityEngine")));
				functions::create(game_object, xorstr_(""));
				functions::add_component(game_object, il2cpp::type_object(xorstr_(""), xorstr_("DevControls")));
				functions::dont_destroy_on_load(game_object);
				wakeup = false;
			}

			auto static update_performance_ui = reinterpret_cast<void(*)(void* instance)>(performaceui_hook);
			SpoofReturn(update_performance_ui, instance);
		}
	}

	__forceinline bool init()
	{
		ddraw::performaceui_hook = *reinterpret_cast<uintptr_t*>(il2cpp::method(xorstr_("PerformanceUI"), xorstr_("Update"), 0, xorstr_("Facepunch")));
		il2cpp::hook(&ddraw::hk_performance_ui_update, xorstr_("PerformanceUI"), xorstr_("Update"), 0, xorstr_("Facepunch"));
		il2cpp::hook(&ddraw::ongui_hook, xorstr_("DevControls"), xorstr_("OnGUI"), 0, xorstr_(""));

		return true;
	}
}