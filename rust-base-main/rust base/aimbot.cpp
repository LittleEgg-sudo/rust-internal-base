#include "aimbot.h"

namespace aimbot {
	rust::BasePlayer* getBestPlayerByFov() {
		rust::BasePlayer* bestEnt = nullptr;
		int closest = INT_MAX;
		Vector2 curAngles = variables::local_player->get_input()->get_view_angles();
		for (int i = 0; i < variables::player_list.size(); i++) {
			Vector2 anglesTo = Math::CalcAngle(variables::local_player->get_bone_position(BoneList::head), variables::player_list[i]->get_bone_position(BoneList::head));
			int difx = anglesTo.x - curAngles.x;
			int dify = anglesTo.y - curAngles.y;
			difx = Math::abs(difx);
			dify = Math::abs(dify);
			int average = (difx + dify) / 2;
			if (average < closest) {
				closest = average;
				bestEnt = variables::player_list[i];
			}
		}
		return bestEnt;
	}

	int getClosestBoneToCrosshair(rust::BasePlayer* player) {
		int bestBone = -1;
		int closest = INT_MAX;
		Vector2 curAngles = variables::local_player->get_input()->get_view_angles();
		for (int i = 0; i < rust::valid_bones.size(); i++) {
			Vector2 anglesTo = Math::CalcAngle(variables::local_player->get_bone_position(BoneList::head), player->get_bone_position(rust::valid_bones[i]));
			int difx = anglesTo.x - curAngles.x;
			int dify = anglesTo.y - curAngles.y;
			difx = Math::abs(difx);
			dify = Math::abs(dify);
			int average = (difx + dify) / 2;
			if (average < closest) {
				closest = average;
				bestBone = rust::valid_bones[i];
			}
		}
		return bestBone;
	}

	void run() {
		rust::BasePlayer* player = getBestPlayerByFov();
		if (!player)
			return;
		int bone = getClosestBoneToCrosshair(player);
		if (bone == -1)
			bone = 0;

		bone = bone ? bone : BoneList::head;
		player->get_input()->set_view_angles(Math::CalcAngle(variables::local_player->get_bone_position(BoneList::head), player->get_bone_position(bone)));
	}
}