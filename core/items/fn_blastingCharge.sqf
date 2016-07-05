#include "..\..\script_macros.hpp"
/*
    File: fn_blastingCharge.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Blasting charge is used for the federal reserve vault and nothing  more.. Yet.
*/
private["_vault","_handle"];
_vault = param [0,objNull,[objNull]];

if (isNull _vault) exitWith {}; //Bad object
if (typeOf _vault != "Land_CargoBox_V1_F") exitWith {hint localize "STR_ISTR_Blast_VaultOnly"};
if (_vault getVariable ["chargeplaced",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyPlaced"};
if (_vault getVariable ["safe_open",false]) exitWith {hint localize "STR_ISTR_Blast_AlreadyOpen"};
if (west countSide playableUnits < (LIFE_SETTINGS(getNumber,"minimum_cops"))) exitWith {
     hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"minimum_cops"))]
};
if ((nearestObject [[13285.831,11992.301,0.4],"Land_Offices_01_V1_F"]) getVariable ["locked",true]) exitWith {hint localize "STR_ISTR_Blast_Exploit"};
if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?

_vault SVAR ["chargeplaced",true,true];
[0,"STR_ISTR_Blast_Placed"]; remoteExecCall ["life_fnc_broadcast",west];
hint localize "STR_ISTR_Blast_KeepOff";

_vault SVAR ["bankrobbed",true,true];
_handle = [] spawn life_fnc_demoChargeTimer;
[] remoteExec ["life_fnc_demoChargeTimer",west];

//Create Marker
_MarkerWarn = createMarker ["MarkerWarn",[(getPos fed_bank select 0)-30, (getPos fed_bank select 1)+50]];
"MarkerWarn" setMarkerShape "ICON";
"MarkerWarn" setMarkerType "mil_warning";
"MarkerWarn" setMarkerSize [0.7,0.7];
"MarkerWarn" setMarkerColor "ColorBlack";
"MarkerWarn" setMarkerText " BANKÜBERFALL!!!";

waitUntil {scriptDone _handle};
sleep 0.9;
if(!(fed_bank getVariable["chargeplaced",false])) exitWith {hint localize "STR_ISTR_Blast_Disarmed"};

_bomb = "Bo_GBU12_LGB_MI10" createVehicle [getPosATL fed_bank select 0, getPosATL fed_bank select 1, (getPosATL fed_bank select 2)+0.5];
fed_bank SVAR ["chargeplaced",false,true];
fed_bank SVAR ["safe_open",true,true];

hint localize "STR_ISTR_Blast_Opened";