////////////////////////////////////////////////////////////////////////////
//////           This HPP was created by Shinji`s GUI tool            //////
////////////////////////////////////////////////////////////////////////////
class GUI_1000 {
    idd = 1000;
    name = "GUI_1000";
    onLoad = "uiNamespace setVariable ['GUI_1000', _this select 0];";
    onUnLoad = "uiNamespace setVariable ['GUI_1000', nil];";
    movingEnable = false;
    enableSimulation = true;

    class controlsBackground {
        class Background_1100: RscText
        {
            idc = 1100;
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
        class MapControl_1101: RscMapControl
        {
            idc = 1101;
            x = 0.474804 * safezoneW + safezoneX;
            y = 0.263136 * safezoneH + safezoneY;
            w = 0.245703 * safezoneW;
            h = 0.477430 * safezoneH;
            maxSatelliteAlpha = 0.75;
            alphaFadeStartScale = 1.15;
            alphaFadeEndScale = 1.29;
        };
        class Listbox_1102: RscListbox
        {
            idc = 1102;
            x = 0.272656 * safezoneW + safezoneX;
            y = 0.266781 * safezoneH + safezoneY;
            w = 0.192187 * safezoneW;
            h = 0.421180 * safezoneH;
            ColorBackground[] = {0,0,0,1};
            ColorText[] = {1,1,1,1};
            font = TahomaB;
            SizeEx = 0.4;
            colorSelectBackground[] = {0,0,0,1};
            colorSelect[] = {0,0,0,1};
        };
        class ButtonMenu_1103: RscButtonMenu
        {
            idc = 1103;
            text = "Spawnen";
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
