////////////////////////////////////////////////////////////////////////////
//////           This HPP was created by Shinji`s GUI tool            //////
////////////////////////////////////////////////////////////////////////////
class life_spawn_selection {
    idd = 38500;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class life_RscTitleBackground: Life_RscText
        {
            idc = -1;
            text = "";
            x = 0.246093 * safezoneW + safezoneX;
            y = 0.225462 * safezoneH + safezoneY;
            w = 0.498437 * safezoneW;
            h = 0.569444 * safezoneH;
            ColorBackground[] = {0,0,0,0.694117};
            ColorText[] = {1,1,1,1};
        };
    };
    class controls {
        class MapView: Life_RscMapControl
        {
            idc = 38501;
            x = 0.474804 * safezoneW + safezoneX;
            y = 0.263136 * safezoneH + safezoneY;
            w = 0.245703 * safezoneW;
            h = 0.477430 * safezoneH;
            maxSatelliteAlpha = 0.75;
            alphaFadeStartScale = 1.15;
            alphaFadeEndScale = 1.29;
        };
        class SpawnPointList: Life_RscListbox
        {
            idc = 38510;
            x = 0.272656 * safezoneW + safezoneX;
            y = 0.266781 * safezoneH + safezoneY;
            w = 0.192187 * safezoneW;
            h = 0.421180 * safezoneH;
            onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
            ColorBackground[] = {0,0,0,1};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            SizeEx = 0.4;
            colorSelectBackground[] = {0,0,0,1};
            colorSelect[] = {0,0,0,1};
        };
        class spawnButton: Life_RscButtonMenu
        {
            idc = -1;
            text = "Spawnen";
            onButtonClick = "[] call life_fnc_spawnConfirm";
            x = 0.271093 * safezoneW + safezoneX;
            y = 0.693518 * safezoneH + safezoneY;
            w = 0.19375 * safezoneW;
            h = 0.055555 * safezoneH;
            ColorBackground[] = {1,0,0,1};
            ColorText[] = {0.941176,1,1,1};
            font = TahomaB;
            SizeEx = 0.4;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
    };
};
////////////////////////////////////////////////////////////////////////////
