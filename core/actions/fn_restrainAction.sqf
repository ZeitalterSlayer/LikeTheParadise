#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Retrains the target.
*/
private["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};
//Broadcast!

if(life_inv_handcuffs < 1) then {
	hint "Du hast keine Handschellen!"
	} else {
		[false,"handcuffs",1] call life_fnc_handleInv;
};

_unit setVariable ["restrained",true,true];
_unit say3D "handcuffs";
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];