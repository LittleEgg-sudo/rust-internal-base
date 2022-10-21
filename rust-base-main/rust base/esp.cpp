#include "esp.h"

namespace esp
{
	void render_esp(rust::BasePlayer* player)
	{
		//if (variables::player_list.size() <= 0)
		//	return;

		//for (int i = 0; i < variables::player_list.size(); i++)
		{
			//auto player = variables::player_list[i];

			auto model = player->get_model();
			if (!model)
				return;

			bool is_npc = false;
			if (model->is_npc())
				return;
			else
				is_npc = true;

			if (player == variables::local_player)
				return;

			if (player->get_life_state())
				return;

			if (player->is_sleeping())
				return;

			auto distance = Math::Calc3D_Dist(variables::local_position, player->get_bone_position(BoneList::pelvis));
			if (distance > 300)
				return;

			auto bounds = get_bounds(player, 2.f);
			float box_width = bounds.right - bounds.left;
			float box_height = bounds.bottom - bounds.top;
			auto half = (bounds.right - bounds.left) / 2;

			if (bounds.onscreen)
			{
				functions::outline_box({ bounds.left - 1, bounds.top - 1 }, { box_width + 2, box_height + 2 }, Vector4(0, 0, 0, 1), 1); 
				functions::outline_box({ bounds.left, bounds.top }, { box_width, box_height }, Vector4(1, 1, 1, 1), 1); 

				auto name = player->get_username();
				std::string wcs = functions::ws2s(name);
				functions::outline(Vector4{ bounds.left - 80.f, bounds.bottom + 10, 79.f + half * 2 + 80.f , 13 }, wcs, Vector4(0, 0, 0, 1), true, 10);
				functions::label(Vector4{ bounds.left - 80.f, bounds.bottom + 10, 79.f + half * 2 + 80.f , 13 }, wcs, {1,1,1,1}, true, 10);

				auto health = Vector4(bounds.left - 4, bounds.top + (box_height - box_height * (player->get_health() / 100)), 2, box_height * (player->get_health() / 100));
				const auto health_bg = Vector4(bounds.left - 5, bounds.top, 4, box_height);

				functions::fill_box(health_bg, Vector4(0, 0, 0, 1));
				functions::fill_box(health, Vector4(0, 1, 0, 1));
			}

		}
	}
}