#include "..\script_macros.hpp"
    /*
        File: fn_mine.sqf
        Author: Devilfloh
        Editor: Dardo

        Description:
        Same as fn_gather,but it allows use of probabilities for mining.
        Init für Objekt: this addAction [""Öl sammeln!"", ""poziscript\oil.sqf""];
    */
private["_maxGather", "_resource", "_amount", "_requiredItem", "_mined"];
if (life_action_inUse) exitWith {};
if ((vehicle player) != player) exitWith {};
if (player getVariable "restrained") exitWith {
    hint localize "STR_NOTF_isrestrained";
};
_exit = false;
if (player getVariable "playerSurrender") exitWith {
    hint localize "STR_NOTF_surrender";
};
life_action_inUse = true;
_zone = "";
_requiredItem = "";

_resourceCfg = missionConfigFile >> "CfgGather" >> "Minerals";
_percent = (floor random 100) + 1; //Make sure its not 0

for "_i" from 0 to count(_resourceCfg)-1 do {
    _curConfig = _resourceCfg select _i;
    _resources = "oil_unprocessed";
    _maxGather = "2";
    _requiredItem = "";
    _mined = "";

    if (_resources isEqualTo []) exitWith {}; //Smart guy :O
    for "_i" from 0 to count (_resources) do {
        if (count _resources isEqualTo 1) exitWith {
            if (!((_resources select 0) isEqualType [])) then {
                _mined = _resources select 0;
            } else {
                _mined = (_resources select 0) select 0;
            };
        };
        _resource = (_resources select _i) select 0;
        _prob = (_resources select _i) select 1;
        _probdiff = (_resources select _i) select 2;
        if ((_percent >= _prob) && (_percent <= _probdiff)) exitWith {
            _mined = _resource;
        };
    };

if (_exit) exitWith {
    life_action_inUse = false;
};

_amount = round(random(_maxGather)) + 1;
_diff = [_mined, _amount, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;
if (_diff isEqualTo 0) exitWith {
    hint localize "STR_NOTF_InvFull";
    life_action_inUse = false;
};

for "_i" from 0 to 4 do {
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil {
        animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    };
    sleep 1;
};

if (([true, _mined, _diff] call life_fnc_handleInv)) then {
    _itemName = M_CONFIG(getText, "VirtualItems", _mined, "displayName");
    titleText[format[localize "STR_NOTF_Gather_Success", (localize _itemName), _diff], "PLAIN"];
};

sleep 2.5;
life_action_inUse = false;