#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit || !(_unit getVariable ["restrained",false])) exitWith {}; //Error check?




if(playerSide isEqualTo west) then {
	_unit setVariable ["restrained",false,true];
	_unit setVariable ["Escorting",false,true];
	_unit setVariable ["transporting",false,true];
	detach _unit;

	[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
} else {
	if(life_inv_handcuffkeys > 0) then {
		_unit setVariable ["restrained",false,true];
		_unit setVariable ["Escorting",false,true];
		_unit setVariable ["transporting",false,true];
		detach _unit;
		[0,"STR_NOTF_Unrestrain",true,[_unit getVariable ["realname",name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
		} else {
			hint "Du hast keine Handschellenschlüssel!";
	};
};
