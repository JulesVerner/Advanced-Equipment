class CfgVehicles 
{
	/* ================================================================================ */
	// Flash Drive
	class Land_USB_Dongle_01_F;
	class Land_USB_Dongle_01_F_AE3: Land_USB_Dongle_01_F
	{
		scope=2;
		ae3_item = Item_FlashDisk_AE3;

		class EventHandlers
		{
			init = "_this call AE3_filesystem_fnc_initFilesystem";
		};

		class ACE_Actions {
			class Pickup {
				displayName = "$STR_AE3_Flashdrive_Interaction_Take";
				icon = "\a3\ui_f\data\igui\cfg\actions\take_ca.paa";
				distance = 2;
				condition = "true";
				statement = "_this remoteExec ['AE3_flashdrive_fnc_take', 2];";
			};
        };
	};

	/* ================================================================================ */

};