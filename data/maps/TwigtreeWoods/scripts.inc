TwigtreeWoods_MapScripts::
	.byte 0


TwigtreeWoods_EventScript_SignWoods::
# 5 "data/maps/TwigtreeWoods/scripts.pory"
	lockall
# 6 "data/maps/TwigtreeWoods/scripts.pory"
	msgbox TwigtreeWoods_EventScript_SignWoods_Text_0, MSGBOX_SIGN
# 7 "data/maps/TwigtreeWoods/scripts.pory"
	releaseall
	return


TwigtreeWoods_EventScript_SignWoods_Text_0:
# 6 "data/maps/TwigtreeWoods/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}TWIGTREE WOODS$"
