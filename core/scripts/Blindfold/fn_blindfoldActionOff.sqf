#include "..\..\script_macros.hpp"
/*
	File: fn_blindfoldActionOff.sqf
	Author: Bryan "Tonic" Boardwine, edited by Jason_000

	Description:

*/
private["_target","_who","_obj"];
_target = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_who = [_this,1,"",[""]] call BIS_fnc_param;
if(isNull _target) exitWith {};
if(_target != player) exitWith {};
if(_who isEqualTo "") exitWith {};
if(!(_target getVariable "restrained")) exitWith {};
_target setVariable ["blindfolded", nil, true];


cutText ["", "BLACK IN"];
hint "Dir wurde der Sack vom Kopf genommen!";