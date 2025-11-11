TwigtreeGrove_MapScripts::
	.byte 0


TwigtreeGrove_EventScript_SignTown::
# 5 "data/maps/TwigtreeGrove/scripts.pory"
	lockall
# 6 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_SignTown_Text_0, MSGBOX_SIGN
# 7 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_SignTown_Text_0:
# 6 "data/maps/TwigtreeGrove/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}TWIGTREE GROVE$"
