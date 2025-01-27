class CfgVehicles 
{
	/* ================================================================================ */

	// RUGGED ROUTER OLIVE
	class Land_Router_01_olive_F;
	class Land_Router_01_olive_F_AE3: Land_Router_01_olive_F
	{
		class AE3_Device
		{
			displayName = "$STR_AE3_Network_Config_RouterDisplayName";
			init = "_this call AE3_network_fnc_initRouter;";

			defaultPowerLevel = 0;

			turnOnAction = "_this call AE3_network_fnc_dhcp_onTurnOn; true";
			turnOffAction = "true";

			class AE3_PowerInterface
			{
				internal = 0;
			};

			class AE3_Consumer
			{
				powerConsumption = 0.01/3600; // consumes 10 Watts
			};
		};
    
		class AE3_Equipment
		{
			class AE3_ace3Interactions
			{
				class AE3_aceCarrying
				{
					// Carrying
					ae3_dragging_canCarry = 1;  // Can be dragged (0-no, 1-yes)
					ae3_dragging_carryPosition[] = {0, 1, 1};  // Offset of the model from the body while dragging (same as attachTo)
					ae3_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
				};
				class AE3_aceCargo
				{
					ae3_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
					ae3_cargo_size = 1;  // Cargo space the object takes
				};
			};
		};
	};

	/* ================================================================================ */

	// RUGGED ROUTER BLACK
	class Land_Router_01_black_F;
	class Land_Router_01_black_F_AE3: Land_Router_01_black_F
	{
		class AE3_Device
		{
			displayName = "$STR_AE3_Network_Config_RouterDisplayName";
			init = "_this call AE3_network_fnc_initRouter;";

			defaultPowerLevel = 0;

			turnOnAction = "_this call AE3_network_fnc_dhcp_onTurnOn; true";
			turnOffAction = "true";

			class AE3_PowerInterface
			{
				internal = 0;
			};

			class AE3_Consumer
			{
				powerConsumption = 0.01/3600; // consumes 10 Watts
			};
		};
    
		class AE3_Equipment
		{
			class AE3_ace3Interactions
			{
				class AE3_aceCarrying
				{
					// Carrying
					ae3_dragging_canCarry = 1;  // Can be dragged (0-no, 1-yes)
					ae3_dragging_carryPosition[] = {0, 1, 1};  // Offset of the model from the body while dragging (same as attachTo)
					ae3_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
				};
				class AE3_aceCargo
				{
					ae3_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
					ae3_cargo_size = 1;  // Cargo space the object takes
				};
			};
		};
	};

	/* ================================================================================ */

	// RUGGED ROUTER SAND
	class Land_Router_01_sand_F;
	class Land_Router_01_sand_F_AE3: Land_Router_01_sand_F
	{
		class AE3_Device
		{
			displayName = "$STR_AE3_Network_Config_RouterDisplayName";
			init = "_this call AE3_network_fnc_initRouter;";

			defaultPowerLevel = 0;

			turnOnAction = "_this call AE3_network_fnc_dhcp_onTurnOn; true";
			turnOffAction = "true";

			class AE3_PowerInterface
			{
				internal = 0;
			};

			class AE3_Consumer
			{
				powerConsumption = 0.01/3600; // consumes 10 Watts
			};
		};

		class AE3_Equipment
		{
			class AE3_ace3Interactions
			{
				class AE3_aceCarrying
				{
					// Carrying
					ae3_dragging_canCarry = 1;  // Can be dragged (0-no, 1-yes)
					ae3_dragging_carryPosition[] = {0, 1, 1};  // Offset of the model from the body while dragging (same as attachTo)
					ae3_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
				};
				class AE3_aceCargo
				{
					ae3_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
					ae3_cargo_size = 1;  // Cargo space the object takes
				};
			};
		};
	};

	/* ================================================================================ */

};