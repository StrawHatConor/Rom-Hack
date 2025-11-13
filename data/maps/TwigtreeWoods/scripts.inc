TwigtreeWoods_MapScripts::
	.byte 0


TwigtreeWoods_EventScript_RivalIntroduction::
# 5 "data/maps/TwigtreeWoods/scripts.pory"
	lockall
# 6 "data/maps/TwigtreeWoods/scripts.pory"
	applymovement LOCALID_RIVAL, RivalIntroduction
# 7 "data/maps/TwigtreeWoods/scripts.pory"
	msgbox TwigtreeWoods_EventScript_RivalIntroduction_Text_0
# 8 "data/maps/TwigtreeWoods/scripts.pory"
	waitmessage
# 9 "data/maps/TwigtreeWoods/scripts.pory"
	callnative ChooseStarter
# 10 "data/maps/TwigtreeWoods/scripts.pory"
	waitstate
# 11 "data/maps/TwigtreeWoods/scripts.pory"
	msgbox TwigtreeWoods_EventScript_RivalIntroduction_Text_0
# 12 "data/maps/TwigtreeWoods/scripts.pory"
	waitmessage
# 13 "data/maps/TwigtreeWoods/scripts.pory"
	applymovement LOCALID_RIVAL, RivalIntroduction_End
# 14 "data/maps/TwigtreeWoods/scripts.pory"
	setflag FLAG_EVENT_RIVAL_INTRO
# 15 "data/maps/TwigtreeWoods/scripts.pory"
	releaseall
	return


TwigtreeWoods_EventScript_SignWoods::
# 20 "data/maps/TwigtreeWoods/scripts.pory"
	lockall
# 21 "data/maps/TwigtreeWoods/scripts.pory"
	msgbox TwigtreeWoods_EventScript_SignWoods_Text_0, MSGBOX_SIGN
# 22 "data/maps/TwigtreeWoods/scripts.pory"
	releaseall
	return


# 26 "data/maps/TwigtreeWoods/scripts.pory"
RivalIntroduction:
# 27 "data/maps/TwigtreeWoods/scripts.pory"
	walk_left
# 27 "data/maps/TwigtreeWoods/scripts.pory"
	walk_left
# 27 "data/maps/TwigtreeWoods/scripts.pory"
	walk_left
# 27 "data/maps/TwigtreeWoods/scripts.pory"
	walk_left
# 27 "data/maps/TwigtreeWoods/scripts.pory"
	walk_left
# 27 "data/maps/TwigtreeWoods/scripts.pory"
	walk_left
# 27 "data/maps/TwigtreeWoods/scripts.pory"
	walk_left
# 28 "data/maps/TwigtreeWoods/scripts.pory"
	face_left
	step_end

# 31 "data/maps/TwigtreeWoods/scripts.pory"
RivalIntroduction_End:
# 32 "data/maps/TwigtreeWoods/scripts.pory"
	walk_right
# 32 "data/maps/TwigtreeWoods/scripts.pory"
	walk_right
# 32 "data/maps/TwigtreeWoods/scripts.pory"
	walk_right
# 32 "data/maps/TwigtreeWoods/scripts.pory"
	walk_right
# 32 "data/maps/TwigtreeWoods/scripts.pory"
	walk_right
# 32 "data/maps/TwigtreeWoods/scripts.pory"
	walk_right
# 32 "data/maps/TwigtreeWoods/scripts.pory"
	walk_right
	step_end

TwigtreeWoods_EventScript_RivalIntroduction_Text_0:
# 7 "data/maps/TwigtreeWoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}RIVAL:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} ???$"

TwigtreeWoods_EventScript_SignWoods_Text_0:
# 21 "data/maps/TwigtreeWoods/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}TWIGTREE WOODS$"
