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

    class BGMenu: Life_RscPicture {
        idc = 38531;
        text = "textures\spawnauswahl.paa";
        x = 0.237031 * safezoneW + safezoneX;
        y = 0.159 * safezoneH + safezoneY;
        w = 0.531094 * safezoneW;
        h = 0.704 * safezoneH;

    class MapView : Life_RscMapControl
    {
        idc = 38502;
        colorBackground[] = {0,0,0,0.3};
        x = 0.241666 * safezoneW + safezoneX;
        y = 0.33963 * safezoneH + safezoneY;
        w = 0.291771 * safezoneW;
        h = 0.342037 * safezoneH;
        maxSatelliteAlpha = 0.75;//0.75;
        alphaFadeStartScale = 1.15;//0.15;
        alphaFadeEndScale = 1.29;//0.29;
    };
};

    class controls {
        class SpawnPointList: Life_RscListNBox {
            idc = 38510;
            text = "";
            sizeEx = 0.041;
            coloumns[] = {0,0,0.9};
            drawSideArrows = 0;
            idcLeft = -1;
            idcRight = -1;
            rowHeight = 0.050;
            x = 0.105;
            y = 0.26;
            w = (8.8 / 40);
            h = (10 / 25);
            onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
        };

        class spawnButton: Life_RscButtonMenu {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            text = "$STR_Spawn_Spawn";
            onButtonClick = "[] call life_fnc_spawnConfirm";
            x = 0.11;
            y = 0.69;
            w = (8 / 40);
            h = (1 / 25);
        };
    };
};