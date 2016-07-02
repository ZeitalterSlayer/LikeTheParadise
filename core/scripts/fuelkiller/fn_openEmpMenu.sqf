/*
	File: openEmpMenu.sqf
	Author: © 2014 nano2K - written for we-are-friendly.de

	Description:
	Opens the EMP operator menu
*/
if(!alive player || dialog) exitWith {};
createDialog "nanoEMPConsole";
disableSerialization;
waitUntil {!isNull (findDisplay 3494)};
[] remoteExec life_fnc_scanVehicles;
