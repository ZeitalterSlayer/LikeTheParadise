#include "..\..\script_macros.hpp"
/*
    File: fn_demoChargeTimer.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the "Demo" timer for the police.
*/
private["_uiDisp","_time","_timer"];
disableSerialization;
6 cutRsc ["life_timer","PLAIN"];
_uiDisp = uiNamespace getVariable "life_timer";
_timer = _uiDisp displayCtrl 38301;
_time = time + (5 * 60);

for "_i" from 0 to 1 step 0 do {
    if (isNull _uiDisp) then {
        6 cutRsc ["life_timer","PLAIN"];
        _uiDisp = uiNamespace getVariable "life_timer";
        _timer = _uiDisp displayCtrl 38301;
    };
    if (round(_time - time) < 1) exitWith {};
    if (!(fed_bank getVariable ["chargeplaced",false])) exitWith {};
    _timer ctrlSetText format["%1",[(_time - time),"MM:SS.MS"] call BIS_fnc_secondsToString];
    sleep 0.08;

    _bomb = "Bo_GBU12_LGB_MI10" createVehicle [getPosATL fed_bank select 0, getPosATL fed_bank select 1, (getPosATL fed_bank select 2)+0.5];
    fed_bank SVAR ["chargeplaced",false,true];
    fed_bank SVAR ["safe_open",true,true];
};

6 cutText["","PLAIN"];