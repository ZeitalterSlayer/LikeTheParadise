////////////////////////////////////////////////////////////////////////////
//////           This HPP was created by Shinji`s GUI tool            //////
////////////////////////////////////////////////////////////////////////////
class life_spawn_selection {
    idd = 38500;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class life_RscTitleBackground: Life_RscText    {
        {
            idc = 1107;
            text = "";
            x = 0.253906 * safezoneW + safezoneX;
            y = 0.237692 * safezoneH + safezoneY;
            w = 0.516145 * safezoneW;
            h = 0.567824 * safezoneH;
            ColorBackground[] = {0,0,0,0.694117};
            ColorText[] = {1,1,1,1};
        };
    };

    class controls {
        class SpawnPointList: Life_RscListNBox {
        {
            idc = 1103;
            x = 0.286913 * safezoneW + safezoneX;
            y = 0.300828 * safezoneH + safezoneY;
            w = 0.202214 * safezoneW;
            h = 0.402257 * safezoneH;
            ColorBackground[] = {0.098039,0.101960,0.105882,1};
            ColorText[] = {1,1,1,1};
            colorSelectBackground[] = {0,0,0,1};
            colorSelect[] = {0,1,1,1};
            onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
        };

        class spawnButton: Life_RscButtonMenu {
        {
            idc = 1104;
            text = "Spawn";
            x = 0.286068 * safezoneW + safezoneX;
            y = 0.707021 * safezoneH + safezoneY;
            w = 0.201822 * safezoneW;
            h = 0.047685 * safezoneH;
            ColorBackground[] = {0.858823,0.074509,0.231372,1};
            ColorText[] = {1,1,1,1};
            colorFocused[] = {0,1,1,1};
            colorDisabled[] = {1,1,1,1};
        };

        class MapView : Life_RscMapControl {
        {
            idc = 1105;
            x = 0.497542 * safezoneW + safezoneX;
            y = 0.302796 * safezoneH + safezoneY;
            w = 0.233040 * safezoneW;
            h = 0.450289 * safezoneH;
            maxSatelliteAlpha = 0.75;
            alphaFadeStartScale = 1.15;
            alphaFadeEndScale = 1.29;
        };
    };
};
////////////////////////////////////////////////////////////////////////////
