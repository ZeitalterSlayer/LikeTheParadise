#include "\life_server\script_macros.hpp"
/*
    File: fn_capsule.sqf
    Author: Like LLLOLOOLOLOLOLOLOL
*/

[[0,format["%1 der Feigling hat was geschluckt!!! Oh gott er hält nichtmehr lange durch!!! %1 Verrotte in der Hölle du Feigling!!!",player getVariable["realname",name player]]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;// globale nachricht an alle spieler damit die sich ned wundern und zu uns in support grabbeln MIIMIMIMIMI RP-Flucht!

        enableCamShake true;// kamera gewackle
        addCamShake [10, 45, 10];

        player setFatigue 1;// erschöpfung bei 100% ... sprich der rennt erstma nirgends hin
        player setDamage (0.1 + (damage player));//+10 schaden
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));
        sleep 3;
        player setDamage (0.1 + (damage player));// das 10. mal +10 schaden ... 100% also bis RIP
        sleep 3;
        resetCamShake;// weil tod muss hier auch nichts mehr wackeln
        player setFatigue 0;// damit er nicht ohne ausdauer spawned obwohls auch lustig wäre :D