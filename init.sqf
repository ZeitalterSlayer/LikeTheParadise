/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "playerMarker.sqf"; //Zeigt Spielerposition / Gangposition an, eingefügt von Slayer
// [] execVM "Server_WelcomeCredits.sqf"; // Willkommensnachrichten rechts bei Spawn von Slayer eingefügt
[] execVM "scripts\monitor.sqf"; // Statusbar von Slayer eingefügt
_igiload = execVM "IgiLoad\IgiLoadInit.sqf";


StartProgress = true;

// Towing
SA_TOW_LOCKED_VEHICLES_ENABLED = true;

sleep 0.5;
dokeyCheck={
private ["_r"] ;
_r = false ;
if ((_this select 1) in (actionKeys "TacticalView")) then
{ hint "Command mode disabled" ;
 _r=true; }; _r;} ;
 (FindDisplay 46) displaySetEventHandler [ "keydown", "_this call dokeyCheck" ];