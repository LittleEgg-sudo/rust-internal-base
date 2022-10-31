#pragma once
#include "../includes.hpp"

namespace offsets
{
	extern uintptr_t playereyes_bodyright;
	extern uintptr_t get_material;
	extern uintptr_t get_shader;
	extern uintptr_t find;
	extern uintptr_t set_shader;
	extern uintptr_t set_color;
	extern uintptr_t set_int;
	extern uintptr_t _displayName;
	extern uintptr_t userID;
	extern uintptr_t clActiveItem;
	extern uintptr_t movement;
	extern uintptr_t input;
	extern uintptr_t inventory;
	extern uintptr_t clientTeam;
	extern uintptr_t playerFlags;
	extern uintptr_t player_model;
	extern uintptr_t player_eyes;
	extern uintptr_t player_lastSentTick;
	extern uintptr_t invitetoteam;
	extern uintptr_t baseplayer_get_height;
	extern uintptr_t baseplayer_get_radius;
	extern uintptr_t baseplayer_get_jumpheight;
	extern uintptr_t playermodel_position;
	extern uintptr_t playermodel_newVelocity;
	extern uintptr_t playermodel_multimesh;
	extern uintptr_t model;
	extern uintptr_t add_component;
	extern uintptr_t create;
	extern uintptr_t dont_destroy_on_load;
	extern uintptr_t object_name;
	extern uintptr_t modelstate;
	extern uintptr_t boneTransforms;
	extern uintptr_t get_mousePosition;
	extern uintptr_t screen_get_width;
	extern uintptr_t screen_get_height;
	extern uintptr_t input_get_key_down;
	extern uintptr_t input_get_key_up;
	extern uintptr_t input_get_key;
	extern uintptr_t gamephysics_line_of_site;
	extern uintptr_t update;
	extern uintptr_t calcsize;
	extern uintptr_t ignore_layer_collision;
	extern uintptr_t mathf_clamp;
	extern uintptr_t mathf_atan2;
	extern uintptr_t mathf_max;
	extern uintptr_t mathf_abs;
	extern uintptr_t transform_get_position;
	extern uintptr_t transform_set_position;
	extern uintptr_t transform_inverse_transform_point;
	extern uintptr_t transform_transform_direction;
	extern uintptr_t baseentity__name;
	extern uintptr_t baseentity_closest_point;
	extern uintptr_t baseentity_serverrpc_1arg;
	extern uintptr_t baseentity_sendsignalbroadcast;
	extern uintptr_t component_get_transform;
	extern uintptr_t treeentity_hit_direction;
	extern uintptr_t basecombatentity__lifestate;
	extern uintptr_t basecombatentity__health;
	extern uintptr_t basecombatentity__maxHealth;
	extern uintptr_t basecombatentity_lifestate;
	extern uintptr_t playerwalkmovement_ducking;
	extern uintptr_t playerwalkmovement_swimming;
	extern uintptr_t playerwalkmovement_flying;
	extern uintptr_t playerwalkmovement_groundAngle;
	extern uintptr_t playerwalkmovement_groundAngle;
	extern uintptr_t playerwalkmovement_groundAngleNew;
	extern uintptr_t playerwalkmovement_maxAngleWalking;
	extern uintptr_t playerwalkmovement_maxAngleClimbing;
	extern uintptr_t playerwalkmovement_groundTime;
	extern uintptr_t playerwalkmovement_gravityMultiplier;
	extern uintptr_t playerwalkmovement_jumpTime;
	extern uintptr_t playerwalkmovement_landTime;
	//extern uintptr_t 
	extern uintptr_t item_heldEntity;
	extern uintptr_t baseprojectile_aimCone;
	extern uintptr_t baseprojectile_aimConePenalty;
	extern uintptr_t baseprojectile_aimConePenaltyMax;
	extern uintptr_t baseprojectile_hipAimCone;
	extern uintptr_t baseprojectile_aimconePenaltyPerShot;
	extern uintptr_t baseprojectile_createdProjectiles;
	extern uintptr_t baseprojectile_automatic;
	extern uintptr_t baseprojectile_aimSway;
	extern uintptr_t baseprojectile_aimSwaySpeed;
	extern uintptr_t baseprojectile_primaryMagazine;
	extern uintptr_t baseprojectile_recoil;
	extern uintptr_t attackentity_repeatDelay;
	extern uintptr_t flintstrikeweapon_successFraction;
	extern uintptr_t client_convar;
	extern uintptr_t graphics_convar;
	extern uintptr_t tod_atmosphereparameters;
	extern uintptr_t tod_dayparameters;
	extern uintptr_t tod_nightparameters_lightintensity;
	extern uintptr_t tod_nightparameters_reflectionmultiplier;
	extern uintptr_t tod_nightparameters_ambientmultiplier;
	extern uintptr_t tod_dayparameters_ambientmultiplier;
	extern uintptr_t tod_nightparameters;
	extern uintptr_t tod_dayparameters;
	extern uintptr_t admin_convar;
	extern uintptr_t worldItem_item;
	extern uintptr_t item_info;
	extern uintptr_t itemdefinition_itemid;
	extern uintptr_t itemdefinition_shortname;
	extern uintptr_t item_amount;
	extern uintptr_t item_uid;
	extern uintptr_t playerinventory_containerBelt;
	extern uintptr_t itemcontainer_itemList;
	extern uintptr_t projectile_thickness;
	extern uintptr_t projectile_integrity;
	extern uintptr_t projectile_traveledDistance;
	extern uintptr_t projectile_maxDistance;
	extern uintptr_t projectile_traveledTime;
	extern uintptr_t projectile_owner;
	extern uintptr_t projectile_mod;
	extern uintptr_t projectile_initialVelocity;
	extern uintptr_t projectile_currentVelocity;
	extern uintptr_t projectile_gravityModifier;
	extern uintptr_t itemmodprojectile_projectileSpread;
	extern uintptr_t itemmodprojectile_projectileVelocitySpread;
	extern uintptr_t hittest_hitEntity;
	extern uintptr_t hittest_hitNormal;
	extern uintptr_t hittest_hitTransform;
	extern uintptr_t hittest_hitPoint;
	extern uintptr_t hittest_hitDistance;
	extern uintptr_t hittest_attackray;
	extern uintptr_t hittest_maxDistance;
	extern uintptr_t hittest_didHit;
	extern uintptr_t hittest_material;
	extern uintptr_t hittest_damageProperties;
	extern uintptr_t playerinput_bodyAngles;
	extern uintptr_t event_get_current;
	extern uintptr_t event_get_type;
	extern uintptr_t cursor_set_lockState;
	extern uintptr_t gui_get_skin;
	extern uintptr_t gui_set_color;
	extern uintptr_t gui_drawtexture;
	extern uintptr_t texture2d_get_whitetexture;
	extern uintptr_t guistyle_set_fontsize;
	extern uintptr_t guistyle_set_alignment;
	extern uintptr_t guicontent_temp;
	extern uintptr_t gui_label;
	extern uintptr_t gui_button;
	extern uintptr_t gui_box;
	extern uintptr_t gui_horizontalslider;
	extern uintptr_t ddraw_get;
	extern uintptr_t ddraw_screentext;
	extern uintptr_t ddraw_line;
	extern uintptr_t ddraw_arrow;
	extern uintptr_t ddraw_text;
	extern uintptr_t baseprojectile_getprojectilevelocityscale;
	extern uintptr_t modelstate_set_onLadder;
	extern uintptr_t gamemanager_createprefab;
	extern uintptr_t gamemanager_destroy;
	extern uintptr_t buildingblock_canaffordupgrade;
	extern uintptr_t buildingblock_canchangetograde;
	extern uintptr_t buildingblock_upgradetograde;
	extern uintptr_t consolesystem_index;
	extern uintptr_t baseplayer_consolemessage;
	extern uintptr_t time_get_time;
	extern uintptr_t time_get_deltaTime;
	extern uintptr_t debug_draw_ray;
	extern uintptr_t vector2_signed_angle;
	extern uintptr_t guiutility_rotatearoundpivot;
	extern uintptr_t randomrange;
	extern uintptr_t baseplayer_mounted;
	extern uintptr_t basemountable_canwielditems;
	extern uintptr_t tod_sky_get_instance;
	extern uintptr_t unity_web_request_get;
	extern uintptr_t unity_web_request_get_response_code;
	extern uintptr_t unity_web_request_send_web_request;
	extern uintptr_t unity_web_request_get_download_handler;
	extern uintptr_t download_handler_get_text;
	extern uintptr_t attackentity_nextattacktime;
	extern uintptr_t attackentity_timesincedeploy;
	extern uintptr_t attackentity_deploydelay;
	extern uintptr_t attackentity_repeatdelay;
	extern uintptr_t basemelee_damageproperties;
	extern uintptr_t basemelee_processattack;
	extern uintptr_t attackentity_startattackcooldown;
	extern uintptr_t playereyes_bodyforward;
	extern uintptr_t physics_checkcapsule;
	extern uintptr_t playertick_position;
	extern uintptr_t rigidbody_setVelocity;
}