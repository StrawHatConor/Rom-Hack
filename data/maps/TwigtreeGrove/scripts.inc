TwigtreeGrove_MapScripts::
	.byte 0


TwigtreeGrove_EventScript_MeetRival::
# 6 "data/maps/TwigtreeGrove/scripts.pory"
	lockall
# 7 "data/maps/TwigtreeGrove/scripts.pory"
	faceplayer
# 8 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_MeetRival_Text_0
# 9 "data/maps/TwigtreeGrove/scripts.pory"
	waitmessage
# 10 "data/maps/TwigtreeGrove/scripts.pory"
	fadescreen FADE_TO_BLACK
# 11 "data/maps/TwigtreeGrove/scripts.pory"
	warp MAP_TWIGTREE_GROVE_HOUSE1_1F, 5, 6
# 12 "data/maps/TwigtreeGrove/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 13 "data/maps/TwigtreeGrove/scripts.pory"
	setflag FLAG_EVENT_MEET_RIVAL
# 14 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_Skitty::
# 19 "data/maps/TwigtreeGrove/scripts.pory"
	lockall
# 20 "data/maps/TwigtreeGrove/scripts.pory"
	faceplayer
# 21 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_MeetRival_Text_0
# 22 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_SignTown::
# 27 "data/maps/TwigtreeGrove/scripts.pory"
	lockall
# 28 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_SignTown_Text_0, MSGBOX_SIGN
# 29 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_MeetRival_Text_0:
# 8 "data/maps/TwigtreeGrove/scripts.pory"
	.string "TEXT$"

TwigtreeGrove_EventScript_SignTown_Text_0:
# 28 "data/maps/TwigtreeGrove/scripts.pory"
	.string "TWIGTREE GROVE$"
