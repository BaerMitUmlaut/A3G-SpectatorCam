class titlePlayername {
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

class progressBar {
	type = 8;
	style = 0;
	w = 0.3;
	h = 0.03;
	colorFrame[] = {1,1,1,1};
	colorBar[] = {1,1,1,1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	x = safeZoneX + safeZoneW - 0.5;
};

class statsText {
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

class titlePlayerstats {
	idd = -1;
	onLoad = "uiNamespace setVariable ['dispPlayerStats', (_this select 0)]";
	duration = 86400;
	fadein = 0.5;
	fadeout = 0;
	class controls {
		class ctrlFatigueBar : progressBar {
			idc = 1;
			y = safeZoneY + safeZoneH - 0.4;
		};
		class ctrlFatigueBarText : statsText {
			idc = -1;
			y = safeZoneY + safeZoneH - 0.408;
			text = "Fatigue:";
		};

		class ctrlBloodBar : progressBar {
			idc = 2;
			y = safeZoneY + safeZoneH - 0.3;
		};
		class ctrlBloodBarText : statsText {
			idc = -2;
			y = safeZoneY + safeZoneH - 0.308;
			text = "Blood:";
		};

		class ctrlPainBar : progressBar {
			idc = 3;
			y = safeZoneY + safeZoneH - 0.2;
		};
		class ctrlPainBarText : statsText {
			idc = -3;
			y = safeZoneY + safeZoneH - 0.208;
			text = "Pain:";
		};

		class ctrlStatusText : statsText {
			idc = 4;
			sizeEx = 0.06;
			h = 0.06;
			w = 0.4;
			y = safeZoneY + safeZoneH - 0.51;
			text = "";
		};
	};
};