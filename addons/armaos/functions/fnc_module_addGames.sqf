params["_logic", "_units", "_activated"];

if(!isServer) exitWith {};

[_logic, _units] spawn
{
	params["_logic", "_units"];

	waitUntil { !isNil "BIS_fnc_init" };

	//--- Add Games to all synced Computers
	{
		[_x, "CfgGames", ["all"]] call AE3_armaos_fnc_link_init;
	} foreach _units;
};

true;