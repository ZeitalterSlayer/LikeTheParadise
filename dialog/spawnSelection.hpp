////////////////////////////////////////////////////////////////////////////
//////           This HPP was created by Shinji`s GUI tool            //////
////////////////////////////////////////////////////////////////////////////
class life_spawn_selection {
    idd = 38500;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class BGha: Life_RscPicture {
            idc = 38531;
            text = "textures\hintergrund.jpg";
            x = 0 * safezoneW + safezoneX;
            y = 0 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 1 * safezoneH;
    };

        class life_RscTitleBackground: Life_RscText
        {
            idc = -1;
            text = "";
            x = 0.317578 * safezoneW + safezoneX;
            y = 0.322684 * safezoneH + safezoneY;
            w = 0.353906 * safezoneW;
            h = 0.375 * safezoneH;
            ColorBackground[] = {0,0,0,0.694117};
            ColorText[] = {1,1,1,1};
        };
    };

    class controls {
        class MapView: Life_RscMapControl
        {
            idc = 38502;
            x = 0.460156 * safezoneW + safezoneX;
            y = 0.356712 * safezoneH + safezoneY;
            w = 0.196875 * safezoneW;
            h = 0.306944 * safezoneH;
            maxSatelliteAlpha = 0.75;
            alphaFadeStartScale = 1.15;
            alphaFadeEndScale = 1.29;
        };

        class spawnButton: Life_RscButtonMenu
        {
            idc = -1;
            text = "Spawn";
            onButtonClick = "[] call life_fnc_spawnConfirm";
            x = 0.339453 * safezoneW + safezoneX;
            y = 0.610184 * safezoneH + safezoneY;
            w = 0.114453 * safezoneW;
            h = 0.055555 * safezoneH;
            ColorBackground[] = {1,0,0,1};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            SizeEx = 0.4;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };

        class SpawnPointList: Life_RscListNBox
        {
            idc = 38510;
            x = 0.340234 * safezoneW + safezoneX;
            y = 0.357233 * safezoneH + safezoneY;
            w = 0.113671 * safezoneW;
            h = 0.250347 * safezoneH;
            ColorBackground[] = {0,0,0,0.705882};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            SizeEx = 0.4;
            colorSelectBackground[] = {0,0,0,1};
            colorSelect[] = {0,0,0,1};
            onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
        };
    };
};
////////////////////////////////////////////////////////////////////////////