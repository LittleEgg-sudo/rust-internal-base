#pragma once
#include "includes.hpp"
#include "game/classes.hpp"

namespace mid_framework
{
	Vector2 cursor;
	Vector2 resolution;
	Vector2 position;
	float x = 500, y = 500;
	int selected = 100;
	bool lmb = false;
	bool open = true;

	auto get_lmb() -> bool
	{
		static int delay = 0;

		if (functions::get_key_down(KeyCode::Mouse0) && delay <= 0)
		{
			delay = 25;
			return true;
		}

		delay--;

		return false;
	}

	auto get_ins() -> bool
	{
		static int delay = 0;

		if (functions::get_key_down(KeyCode::Insert) && delay <= 0)
		{
			delay = 25;
			return true;
		}

		delay--;

		return false;
	}

	auto is_hovering(Vector2 position, Vector2 size) -> bool
	{
		auto cursor = functions::get_mouse_pos();
		cursor.y = variables::screen_height - cursor.y;

		return cursor.x > position.x && cursor.x < position.x + size.x && cursor.y > position.y && cursor.y < position.y + size.y;
	}
	auto add_child(int num, bool left = false) -> void
	{
		if (!open)
			return;

		if (num > 4)
			num = 4;
		else if (num <= 0)
			num = 1;

		if (num == 1)
		{
			functions::outline_box({ position.x + 8, position.y + 74 }, { resolution.x - 17, resolution.y - 83 }, { 1, 1, 1, 1 }, 1.f);
		}
		else if (num == 2)
		{
			//624 358
			//309
			functions::outline_box({ position.x + 8, position.y + 74 }, { resolution.x - 334, resolution.y - 83 }, { 1, 1, 1, 1 }, 1.f);

			functions::outline_box({ position.x + 325, position.y + 74 }, { resolution.x - 334, resolution.y - 83 }, { 1, 1, 1, 1 }, 1.f);
		}
		else if (num == 3 && left)
		{
			functions::outline_box({ position.x + 8, position.y + 74 }, { resolution.x - 17, resolution.y - 83 }, { 1, 1, 1, 1 }, 1.f);
		}
		else if (num == 3 && !left)
		{
			functions::outline_box({ position.x + 8, position.y + 74 }, { resolution.x - 17, resolution.y - 83 }, { 1, 1, 1, 1 }, 1.f);
		}
		else if (num == 4)
		{
			functions::outline_box({ position.x + 8, position.y + 74 }, { resolution.x - 17, resolution.y - 83 }, { 1, 1, 1, 1 }, 1.f);
		}
	}

	auto add_tab(std::string name, int index, int offset) -> void
	{
		if (!open)
			return;
		auto hovering = is_hovering({ position.x + 8 + (126 * index), position.y + 33 }, { 120, 35 });

		functions::fill_box({ position.x + 8 + (126 * index), position.y + 33, 120, 35 }, { 0, 0, 0, 1 });
		if (selected == index)
		{
			functions::fill_box({ position.x + 9 + (126 * index), position.y + 34, 118, 33 }, { 1, 0.1, 0.1, 1 });
		}
		else if (hovering)
		{
			functions::fill_box({ position.x + 9 + (126 * index), position.y + 34, 118, 33 }, { 0.1, 1, 0.1, 1 });
		}
		else
		{
			functions::fill_box({ position.x + 9 + (126 * index), position.y + 34, 118, 33 }, { 0.1, 0.1, 1, 1 });
		}

		if (hovering && lmb)
		{
			selected = index;
		}

		functions::label({ position.x + 8 + (126 * index), position.y + 33, 120, 35 }, name, { 1,1,1,1 }, true);
	}

	auto begin(std::string cheat_name) -> void
	{
		if (!open)
			return;
		if (functions::get_key(KeyCode::Mouse0) && is_hovering(position, { resolution.x, 25 }))
		{
			auto cursor = functions::get_mouse_pos();
			cursor.y = variables::screen_height - cursor.y;

			x = cursor.x - (resolution.x / 2);
			y = cursor.y - (12.5);
		}



		functions::fill_box({ position.x, position.y, resolution.x, resolution.y }, { 0.1, 0.1, 0.1, 1 });
		functions::fill_box({ position.x + 2, position.y + 2, resolution.x - 4, resolution.y - 4 }, { 0.06, 0.06, 0.06, 1 });

		functions::fill_box({ position.x, position.y, resolution.x, 26 }, { 0.13, 0.13, 0.13, 1 });
		functions::fill_box({ position.x, position.y, resolution.x, 25 }, { 0.09, 0.09, 0.09, 1 });

		functions::label({ position.x + 10, position.y + 3, 150, 20 }, cheat_name, { 1,1,1,1 });

	}

	auto end() -> void
	{
		if (get_ins())
			open = !open;
		lmb = get_lmb();
		resolution = { 640, 440 };
		position = { x, y };
		cursor = position;
	}
}