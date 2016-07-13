#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; //Error check?


if (life_inv_handcuffkeys < 1) then { hint "Du hast keine Handschellenschlüssel!";}; exitWith {};



if(life_inv_handcuffs < 1) then {
	life_inv_handcuffs = life_inv_handcuffs + 1;
	} else {
		[true,"handcuffs",1] call life_fnc_handleInv;
};

_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
detach _unit;

[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];