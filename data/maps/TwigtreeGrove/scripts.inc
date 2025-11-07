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
	msgbox TwigtreeGrove_EventScript_MeetRival_Text_1
# 10 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_MeetRival_Text_2
# 11 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_MeetRival_Text_3
# 12 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_MeetRival_Text_4
# 13 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_MeetRival_Text_5
# 14 "data/maps/TwigtreeGrove/scripts.pory"
	waitmessage
# 15 "data/maps/TwigtreeGrove/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/TwigtreeGrove/scripts.pory"
	warp MAP_TWIGTREE_GROVE_HOUSE1_1F, 5, 6
# 17 "data/maps/TwigtreeGrove/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 18 "data/maps/TwigtreeGrove/scripts.pory"
	setflag FLAG_EVENT_MEET_RIVAL
# 19 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_Skitty::
# 24 "data/maps/TwigtreeGrove/scripts.pory"
	lockall
# 25 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_Skitty_Text_0
# 26 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_SignTown::
# 31 "data/maps/TwigtreeGrove/scripts.pory"
	lockall
# 32 "data/maps/TwigtreeGrove/scripts.pory"
	msgbox TwigtreeGrove_EventScript_SignTown_Text_0, MSGBOX_SIGN
# 33 "data/maps/TwigtreeGrove/scripts.pory"
	releaseall
	return


TwigtreeGrove_EventScript_MeetRival_Text_0:
# 8 "data/maps/TwigtreeGrove/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}RIVAL:{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY} Huh? You're actually alive?\n"
	.string "Saves me the effort of going to get the\l"
	.string "shovel I guess.$"

TwigtreeGrove_EventScript_MeetRival_Text_1:
# 9 "data/maps/TwigtreeGrove/scripts.pory"
	.string "Damn, you look like shit. You've got that\n"
	.string "'confused and useless' look down\l"
	.string "perfectly. You're lucky the Wingull\l"
	.string "didn't start picking at you, they love\l"
	.string "to eat the trash off the beach.$"

TwigtreeGrove_EventScript_MeetRival_Text_2:
# 10 "data/maps/TwigtreeGrove/scripts.pory"
	.string "What's your name?$"

TwigtreeGrove_EventScript_MeetRival_Text_3:
# 11 "data/maps/TwigtreeGrove/scripts.pory"
	.string "{PLAYER}, huh? Man, your parents must\n"
	.string "of hated you.$"

TwigtreeGrove_EventScript_MeetRival_Text_4:
# 12 "data/maps/TwigtreeGrove/scripts.pory"
	.string "Come on, my place isn't far. You smell\n"
	.string "like you've never had a wash in your life\l"
	.string "so do everyone a favour and have a\l"
	.string "shower.$"

TwigtreeGrove_EventScript_MeetRival_Text_5:
# 13 "data/maps/TwigtreeGrove/scripts.pory"
	.string "Don't make me regret helping you, okay?\n"
	.string "I don't tend to make a habit of helping\l"
	.string "the homeless.$"

TwigtreeGrove_EventScript_Skitty_Text_0:
# 25 "data/maps/TwigtreeGrove/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}The Skitty doesn't seem to notice you.\n"
	.string "It's too focused on the catnip in the\l"
	.string "boys pocket.$"

TwigtreeGrove_EventScript_SignTown_Text_0:
# 32 "data/maps/TwigtreeGrove/scripts.pory"
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}TWIGTREE GROVE$"
