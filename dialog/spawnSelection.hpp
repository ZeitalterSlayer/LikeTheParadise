class life_spawn_selection {
    idd = 38500;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class life_RscTitleBackground: Life_RscText    {
            idc = 1102;
            text = "";
            x = 0.198828 * safezoneW + safezoneX;
            y = 0.184104 * safezoneH + safezoneY;
            w = 0.603385 * safezoneW;
            h = 0.656018 * safezoneH;
            ColorBackground[] = {0.109803,0.105882,0.105882,0.694117};
            ColorText[] = {1,1,1,1};
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0,0,0,0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.8;
            h = 0.6 - (22 / 250);
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0,0,0,0};
            idc = -1;
            text = "$STR_Spawn_Title";
            x = 0.1;
            y = 0.2;
            w = 0.8;
            h = (1 / 25);
        };

        class SpawnPointTitle: Title {
            idc = 38501;
            style = 1;
            text = "";
        };

        class MapView : Life_RscMapControl {
            idc = 1105;
            x = 0.449772 * safezoneW + safezoneX;
            y = 0.233988 * safezoneH + safezoneY;
            w = 0.313997 * safezoneW;
            h = 0.545023 * safezoneH;
            maxSatelliteAlpha = 0.75;
            alphaFadeStartScale = 1.15;
            alphaFadeEndScale = 1.29;
        };
    };

    class controls {
        class SpawnPointList: Life_RscListNBox {
            idc = 1100;
            x = 0.247031 * safezoneW + safezoneX;
            y = 0.259 * safezoneH + safezoneY;
            w = 0.49 * safezoneW;
            h = 0.5 * safezoneH;
            ColorBackground[] = {0,0,0,0.705882};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            SizeEx = 0.4;
            colorSelectBackground[] = {0,0,0,1};
            colorSelect[] = {0,0,0,1};
            onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
        };

        class spawnButton: Life_RscButtonMenu {
            idc = 1104;
            text = "$STR_Spawn_Spawn";
            x = 0.239192 * safezoneW + safezoneX;
            y = 0.710956 * safezoneH + safezoneY;
            w = 0.201822 * safezoneW;
            h = 0.069444 * safezoneH;
            ColorBackground[] = {0,0.501960,0,1};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            SizeEx = 0.4;
            colorFocused[] = {0,0,0,1};
            colorDisabled[] = {0,0,0,1};
        };
    };
};