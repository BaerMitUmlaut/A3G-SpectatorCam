class A3GSC_titlePlayername {
	idd = -1;
	onLoad = "uiNamespace setVariable ['dispPlayerName', (_this select 0)]";
	duration = 5;
	fadein = 0.2;
	fadeout = 1;
	class controls {
		class ctrlNametag {
			idc = 1;
			type = 0;
			style = 2;
			x = safeZoneX + (safeZoneW / 2) - 0.3;
			y = safeZoneY + 0.05;
			h = 0.1;
			w = 0.6;
			font = "PuristaMedium";
			sizeEx = 0.07;
			colorBackground[] = {0,0,0,0.8};
			colorText[] = {1,1,1,1};
			text = "";
		};
	};
};

class A3GSC_progressBar {
	type = 8;
	style = 0;
	w = 0.3;
	h = 0.03;
	colorFrame[] = {1,1,1,1};
	colorBar[] = {1,1,1,1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	x = safeZoneX + safeZoneW - 0.5;
};

class A3GSC_statsText {
	type = 0;
	style = 0;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "PuristaMedium";
	sizeEx = 0.04;
	h = 0.04;
	w = 0.1;
	x = safeZoneX + safeZoneW - 0.6;
};

class A3GSC_titlePlayerstats {
	idd = -1;
	onLoad = "uiNamespace setVariable ['dispPlayerStats', (_this select 0)]";
	duration = 86400;
	fadein = 0.5;
	fadeout = 0;
	class controls {
		class A3GSC_ctrlFatigueBar : A3GSC_progressBar {
			idc = 1;
			y = safeZoneY + safeZoneH - 0.4;
		};
		class A3GSC_ctrlFatigueBarText : A3GSC_statsText {
			idc = -1;
			y = safeZoneY + safeZoneH - 0.408;
			text = "Fatigue:";
		};

		class A3GSC_ctrlBloodBar : A3GSC_progressBar {
			idc = 2;
			y = safeZoneY + safeZoneH - 0.3;
		};
		class A3GSC_ctrlBloodBarText : A3GSC_statsText {
			idc = -2;
			y = safeZoneY + safeZoneH - 0.308;
			text = "Blood:";
		};

		class A3GSC_ctrlPainBar : A3GSC_progressBar {
			idc = 3;
			y = safeZoneY + safeZoneH - 0.2;
		};
		class A3GSC_ctrlPainBarText : A3GSC_statsText {
			idc = -3;
			y = safeZoneY + safeZoneH - 0.208;
			text = "Pain:";
		};

		class A3GSC_ctrlStatusText : A3GSC_statsText {
			idc = 4;
			sizeEx = 0.06;
			h = 0.06;
			w = 0.4;
			y = safeZoneY + safeZoneH - 0.51;
			text = "";
		};
	};
};