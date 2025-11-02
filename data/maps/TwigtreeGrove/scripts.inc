TwigtreeGrove_MapScripts::
	.byte 0


TwigtreeGrove_EventScript_SignTown::
# 4 "data/maps/TwigtreeGrove/scripts.pory"
	lockall
# 5 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_SignTown_Text_0, MSGBOX_SIGN
# 6 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_SignTown_Text_0:
# 5 "data/maps/TwigtreeGrove/scripts.pory"
	.string "TWIGTREE GROVE$"
