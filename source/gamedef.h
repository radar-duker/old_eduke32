//-------------------------------------------------------------------------
/*
Copyright (C) 2005 - EDuke32 team

This file is part of EDuke32

EDuke32 is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License version 2
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
//-------------------------------------------------------------------------

#define MAXGAMEEVENTS   128
#define LABEL_HASPARM2  1
#define LABEL_ISSTRING  2

extern int g_iReturnVarID;      // var ID of "RETURN"
extern int g_iWeaponVarID;      // var ID of "WEAPON"
extern int g_iWorksLikeVarID;   // var ID of "WORKSLIKE"
extern int g_iZRangeVarID;      // var ID of "ZRANGE"
extern int g_iAngRangeVarID;    // var ID of "ANGRANGE"
extern int g_iAimAngleVarID;    // var ID of "AUTOAIMANGLE"
extern int g_iLoTagID;          // var ID of "LOTAG"
extern int g_iHiTagID;          // var ID of "HITAG"
extern int g_iTextureID;        // var ID of "TEXTURE"
extern int g_iThisActorID;      // var ID of "THISACTOR"

extern long *actorLoadEventScrptr[MAXTILES];

extern long *apScriptGameEvent[MAXGAMEEVENTS];

extern short otherp;
extern long g_currentweapon;
extern long g_gun_pos;
extern long g_looking_arc;
extern long g_currentweapon;
extern long g_weapon_xoffset;
extern long g_gs;
extern long g_kb;
extern long g_looking_angSR1;
extern int display_bonus_screen;
extern long lastvisinc;

extern void adduserquote(char *daquote);

extern char cheatquotes[][MAXCHEATLEN];

typedef struct _labels {
    char *name;
    long lId;
    int flags;
    int maxParm2;
} LABELS;

enum playerlabels {
    PLAYER_ZOOM,
    PLAYER_EXITX,
    PLAYER_EXITY,
    PLAYER_LOOGIEX,
    PLAYER_LOOGIEY,
    PLAYER_NUMLOOGS,
    PLAYER_LOOGCNT,
    PLAYER_POSX,
    PLAYER_POSY,
    PLAYER_POSZ,
    PLAYER_HORIZ,
    PLAYER_OHORIZ,
    PLAYER_OHORIZOFF,
    PLAYER_INVDISPTIME,
    PLAYER_BOBPOSX,
    PLAYER_BOBPOSY,
    PLAYER_OPOSX,
    PLAYER_OPOSY,
    PLAYER_OPOSZ,
    PLAYER_PYOFF,
    PLAYER_OPYOFF,
    PLAYER_POSXV,
    PLAYER_POSYV,
    PLAYER_POSZV,
    PLAYER_LAST_PISSED_TIME,
    PLAYER_TRUEFZ,
    PLAYER_TRUECZ,
    PLAYER_PLAYER_PAR,
    PLAYER_VISIBILITY,
    PLAYER_BOBCOUNTER,
    PLAYER_WEAPON_SWAY,
    PLAYER_PALS_TIME,
    PLAYER_RANDOMFLAMEX,
    PLAYER_CRACK_TIME,
    PLAYER_AIM_MODE,
    PLAYER_ANG,
    PLAYER_OANG,
    PLAYER_ANGVEL,
    PLAYER_CURSECTNUM,
    PLAYER_LOOK_ANG,
    PLAYER_LAST_EXTRA,
    PLAYER_SUBWEAPON,
    PLAYER_AMMO_AMOUNT,
    PLAYER_WACKEDBYACTOR,
    PLAYER_FRAG,
    PLAYER_FRAGGEDSELF,
    PLAYER_CURR_WEAPON,
    PLAYER_LAST_WEAPON,
    PLAYER_TIPINCS,
    PLAYER_HORIZOFF,
    PLAYER_WANTWEAPONFIRE,
    PLAYER_HOLODUKE_AMOUNT,
    PLAYER_NEWOWNER,
    PLAYER_HURT_DELAY,
    PLAYER_HBOMB_HOLD_DELAY,
    PLAYER_JUMPING_COUNTER,
    PLAYER_AIRLEFT,
    PLAYER_KNEE_INCS,
    PLAYER_ACCESS_INCS,
    PLAYER_FTA,
    PLAYER_FTQ,
    PLAYER_ACCESS_WALLNUM,
    PLAYER_ACCESS_SPRITENUM,
    PLAYER_KICKBACK_PIC,
    PLAYER_GOT_ACCESS,
    PLAYER_WEAPON_ANG,
    PLAYER_FIRSTAID_AMOUNT,
    PLAYER_SOMETHINGONPLAYER,
    PLAYER_ON_CRANE,
    PLAYER_I,
    PLAYER_ONE_PARALLAX_SECTNUM,
    PLAYER_OVER_SHOULDER_ON,
    PLAYER_RANDOM_CLUB_FRAME,
    PLAYER_FIST_INCS,
    PLAYER_ONE_EIGHTY_COUNT,
    PLAYER_CHEAT_PHASE,
    PLAYER_DUMMYPLAYERSPRITE,
    PLAYER_EXTRA_EXTRA8,
    PLAYER_QUICK_KICK,
    PLAYER_HEAT_AMOUNT,
    PLAYER_ACTORSQU,
    PLAYER_TIMEBEFOREEXIT,
    PLAYER_CUSTOMEXITSOUND,
    PLAYER_WEAPRECS,
    PLAYER_WEAPRECCNT,
    PLAYER_INTERFACE_TOGGLE_FLAG,
    PLAYER_ROTSCRNANG,
    PLAYER_DEAD_FLAG,
    PLAYER_SHOW_EMPTY_WEAPON,
    PLAYER_SCUBA_AMOUNT,
    PLAYER_JETPACK_AMOUNT,
    PLAYER_STEROIDS_AMOUNT,
    PLAYER_SHIELD_AMOUNT,
    PLAYER_HOLODUKE_ON,
    PLAYER_PYCOUNT,
    PLAYER_WEAPON_POS,
    PLAYER_FRAG_PS,
    PLAYER_TRANSPORTER_HOLD,
    PLAYER_LAST_FULL_WEAPON,
    PLAYER_FOOTPRINTSHADE,
    PLAYER_BOOT_AMOUNT,
    PLAYER_SCREAM_VOICE,
    PLAYER_GM,
    PLAYER_ON_WARPING_SECTOR,
    PLAYER_FOOTPRINTCOUNT,
    PLAYER_HBOMB_ON,
    PLAYER_JUMPING_TOGGLE,
    PLAYER_RAPID_FIRE_HOLD,
    PLAYER_ON_GROUND,
    PLAYER_NAME,
    PLAYER_INVEN_ICON,
    PLAYER_BUTTONPALETTE,
    PLAYER_JETPACK_ON,
    PLAYER_SPRITEBRIDGE,
    PLAYER_LASTRANDOMSPOT,
    PLAYER_SCUBA_ON,
    PLAYER_FOOTPRINTPAL,
    PLAYER_HEAT_ON,
    PLAYER_HOLSTER_WEAPON,
    PLAYER_FALLING_COUNTER,
    PLAYER_GOTWEAPON,
    PLAYER_REFRESH_INVENTORY,
    PLAYER_PALETTE,
    PLAYER_TOGGLE_KEY_FLAG,
    PLAYER_KNUCKLE_INCS,
    PLAYER_WALKING_SND_TOGGLE,
    PLAYER_PALOOKUP,
    PLAYER_HARD_LANDING,
    PLAYER_MAX_SECRET_ROOMS,
    PLAYER_SECRET_ROOMS,
    PLAYER_PALS,
    PLAYER_MAX_ACTORS_KILLED,
    PLAYER_ACTORS_KILLED,
    PLAYER_RETURN_TO_CENTER,
    PLAYER_RUNSPEED,
    PLAYER_SBS,
    PLAYER_RELOADING,
    PLAYER_AUTO_AIM,
    PLAYER_MOVEMENT_LOCK,
    PLAYER_SOUND_PITCH,
    PLAYER_WEAPONSWITCH
};

enum userdefslabels {
    USERDEFS_GOD,
    USERDEFS_WARP_ON,
    USERDEFS_CASHMAN,
    USERDEFS_EOG,
    USERDEFS_SHOWALLMAP,
    USERDEFS_SHOW_HELP,
    USERDEFS_SCROLLMODE,
    USERDEFS_CLIPPING,
    USERDEFS_USER_NAME,
    USERDEFS_RIDECULE,
    USERDEFS_SAVEGAME,
    USERDEFS_PWLOCKOUT,
    USERDEFS_RTSNAME,
    USERDEFS_OVERHEAD_ON,
    USERDEFS_LAST_OVERHEAD,
    USERDEFS_SHOWWEAPONS,
    USERDEFS_PAUSE_ON,
    USERDEFS_FROM_BONUS,
    USERDEFS_CAMERASPRITE,
    USERDEFS_LAST_CAMSPRITE,
    USERDEFS_LAST_LEVEL,
    USERDEFS_SECRETLEVEL,
    USERDEFS_CONST_VISIBILITY,
    USERDEFS_UW_FRAMERATE,
    USERDEFS_CAMERA_TIME,
    USERDEFS_FOLFVEL,
    USERDEFS_FOLAVEL,
    USERDEFS_FOLX,
    USERDEFS_FOLY,
    USERDEFS_FOLA,
    USERDEFS_RECCNT,
    USERDEFS_ENTERED_NAME,
    USERDEFS_SCREEN_TILTING,
    USERDEFS_SHADOWS,
    USERDEFS_FTA_ON,
    USERDEFS_EXECUTIONS,
    USERDEFS_AUTO_RUN,
    USERDEFS_COORDS,
    USERDEFS_TICKRATE,
    USERDEFS_M_COOP,
    USERDEFS_COOP,
    USERDEFS_SCREEN_SIZE,
    USERDEFS_LOCKOUT,
    USERDEFS_CROSSHAIR,
    USERDEFS_WCHOICE,
    USERDEFS_PLAYERAI,
    USERDEFS_RESPAWN_MONSTERS,
    USERDEFS_RESPAWN_ITEMS,
    USERDEFS_RESPAWN_INVENTORY,
    USERDEFS_RECSTAT,
    USERDEFS_MONSTERS_OFF,
    USERDEFS_BRIGHTNESS,
    USERDEFS_M_RESPAWN_ITEMS,
    USERDEFS_M_RESPAWN_MONSTERS,
    USERDEFS_M_RESPAWN_INVENTORY,
    USERDEFS_M_RECSTAT,
    USERDEFS_M_MONSTERS_OFF,
    USERDEFS_DETAIL,
    USERDEFS_M_FFIRE,
    USERDEFS_FFIRE,
    USERDEFS_M_PLAYER_SKILL,
    USERDEFS_M_LEVEL_NUMBER,
    USERDEFS_M_VOLUME_NUMBER,
    USERDEFS_MULTIMODE,
    USERDEFS_PLAYER_SKILL,
    USERDEFS_LEVEL_NUMBER,
    USERDEFS_VOLUME_NUMBER,
    USERDEFS_M_MARKER,
    USERDEFS_MARKER,
    USERDEFS_MOUSEFLIP,
    USERDEFS_STATUSBARSCALE,
    USERDEFS_DRAWWEAPON,
    USERDEFS_MOUSEAIMING,
    USERDEFS_WEAPONSWITCH,
    USERDEFS_DEMOCAMS,
    USERDEFS_COLOR,
    USERDEFS_MSGDISPTIME,
    USERDEFS_STATUSBARMODE,
    USERDEFS_M_NOEXITS,
    USERDEFS_NOEXITS,
    USERDEFS_AUTOVOTE,
    USERDEFS_AUTOMSG,
    USERDEFS_IDPLAYERS
};

enum sectorlabels {
    SECTOR_WALLPTR,
    SECTOR_WALLNUM,
    SECTOR_CEILINGZ,
    SECTOR_FLOORZ,
    SECTOR_CEILINGSTAT,
    SECTOR_FLOORSTAT,
    SECTOR_CEILINGPICNUM,
    SECTOR_CEILINGSLOPE,
    SECTOR_CEILINGSHADE,
    SECTOR_CEILINGPAL,
    SECTOR_CEILINGXPANNING,
    SECTOR_CEILINGYPANNING,
    SECTOR_FLOORPICNUM,
    SECTOR_FLOORSLOPE,
    SECTOR_FLOORSHADE,
    SECTOR_FLOORPAL,
    SECTOR_FLOORXPANNING,
    SECTOR_FLOORYPANNING,
    SECTOR_VISIBILITY,
    SECTOR_ALIGNTO,
    SECTOR_LOTAG,
    SECTOR_HITAG,
    SECTOR_EXTRA
};

enum walllabels {
    WALL_X,
    WALL_Y,
    WALL_POINT2,
    WALL_NEXTWALL,
    WALL_NEXTSECTOR,
    WALL_CSTAT,
    WALL_PICNUM,
    WALL_OVERPICNUM,
    WALL_SHADE,
    WALL_PAL,
    WALL_XREPEAT,
    WALL_YREPEAT,
    WALL_XPANNING,
    WALL_YPANNING,
    WALL_LOTAG,
    WALL_HITAG,
    WALL_EXTRA
};

enum actorlabels {
    ACTOR_X,
    ACTOR_Y,
    ACTOR_Z,
    ACTOR_CSTAT,
    ACTOR_PICNUM,
    ACTOR_SHADE,
    ACTOR_PAL,
    ACTOR_CLIPDIST,
    ACTOR_DETAIL,
    ACTOR_XREPEAT,
    ACTOR_YREPEAT,
    ACTOR_XOFFSET,
    ACTOR_YOFFSET,
    ACTOR_SECTNUM,
    ACTOR_STATNUM,
    ACTOR_ANG,
    ACTOR_OWNER,
    ACTOR_XVEL,
    ACTOR_YVEL,
    ACTOR_ZVEL,
    ACTOR_LOTAG,
    ACTOR_HITAG,
    ACTOR_EXTRA,
    ACTOR_HTCGG,
    ACTOR_HTPICNUM,
    ACTOR_HTANG,
    ACTOR_HTEXTRA,
    ACTOR_HTOWNER,
    ACTOR_HTMOVFLAG,
    ACTOR_HTTEMPANG,
    ACTOR_HTACTORSTAYPUT,
    ACTOR_HTDISPICNUM,
    ACTOR_HTTIMETOSLEEP,
    ACTOR_HTFLOORZ,
    ACTOR_HTCEILINGZ,
    ACTOR_HTLASTVX,
    ACTOR_HTLASTVY,
    ACTOR_HTBPOSX,
    ACTOR_HTBPOSY,
    ACTOR_HTBPOSZ,
    ACTOR_HTG_T,
    ACTOR_ANGOFF,
    ACTOR_PITCH,
    ACTOR_ROLL,
    ACTOR_MDXOFF,
    ACTOR_MDYOFF,
    ACTOR_MDZOFF
};

enum inputlabels {
    INPUT_AVEL,
    INPUT_HORZ,
    INPUT_FVEL,
    INPUT_SVEL,
    INPUT_BITS,
    INPUT_BITS2
};

enum projectilelabels {
    PROJ_WORKSLIKE,
    PROJ_SPAWNS,
    PROJ_SXREPEAT,
    PROJ_SYREPEAT,
    PROJ_SOUND,
    PROJ_ISOUND,
    PROJ_VEL,
    PROJ_EXTRA,
    PROJ_DECAL,
    PROJ_TRAIL,
    PROJ_TXREPEAT,
    PROJ_TYREPEAT,
    PROJ_TOFFSET,
    PROJ_TNUM,
    PROJ_DROP,
    PROJ_CSTAT,
    PROJ_CLIPDIST,
    PROJ_SHADE,
    PROJ_XREPEAT,
    PROJ_YREPEAT,
    PROJ_PAL,
    PROJ_EXTRA_RAND,
    PROJ_HITRADIUS,
    PROJ_VEL_MULT,
    PROJ_OFFSET,
    PROJ_BOUNCES,
    PROJ_BSOUND,
    PROJ_RANGE // 28
};

enum keywords {
    CON_DEFINELEVELNAME,    // 0
    CON_ACTOR,              // 1
    CON_ADDAMMO,            // 2
    CON_IFRND,              // 3
    CON_ENDA,               // 4
    CON_IFCANSEE,           // 5
    CON_IFHITWEAPON,        // 6
    CON_ACTION,             // 7
    CON_IFPDISTL,           // 8
    CON_IFPDISTG,           // 9
    CON_ELSE,               // 10
    CON_STRENGTH,           // 11
    CON_BREAK,              // 12
    CON_SHOOT,              // 13
    CON_PALFROM,            // 14
    CON_SOUND,              // 15
    CON_FALL,               // 16
    CON_STATE,              // 17
    CON_ENDS,               // 18
    CON_DEFINE,             // 19
    CON_COMMENT,            // 20 deprecated
    CON_IFAI,               // 21
    CON_KILLIT,             // 22
    CON_ADDWEAPON,          // 23
    CON_AI,                 // 24
    CON_ADDPHEALTH,         // 25
    CON_IFDEAD,             // 26
    CON_IFSQUISHED,         // 27
    CON_SIZETO,             // 28
    CON_LEFTBRACE,          // 29
    CON_RIGHTBRACE,         // 30
    CON_SPAWN,              // 31
    CON_MOVE,               // 32
    CON_IFWASWEAPON,        // 33
    CON_IFACTION,           // 34
    CON_IFACTIONCOUNT,      // 35
    CON_RESETACTIONCOUNT,   // 36
    CON_DEBRIS,             // 37
    CON_PSTOMP,             // 38
    CON_BLOCKCOMMENT,       // 39 deprecated
    CON_CSTAT,              // 40
    CON_IFMOVE,             // 41
    CON_RESETPLAYER,        // 42
    CON_IFONWATER,          // 43
    CON_IFINWATER,          // 44
    CON_IFCANSHOOTTARGET,   // 45
    CON_IFCOUNT,            // 46
    CON_RESETCOUNT,         // 47
    CON_ADDINVENTORY,       // 48
    CON_IFACTORNOTSTAYPUT,  // 49
    CON_HITRADIUS,          // 50
    CON_IFP,                // 51
    CON_COUNT,              // 52
    CON_IFACTOR,            // 53
    CON_MUSIC,              // 54
    CON_INCLUDE,            // 55
    CON_IFSTRENGTH,         // 56
    CON_DEFINESOUND,        // 57
    CON_GUTS,               // 58
    CON_IFSPAWNEDBY,        // 59
    CON_GAMESTARTUP,        // 60
    CON_WACKPLAYER,         // 61
    CON_IFGAPZL,            // 62
    CON_IFHITSPACE,         // 63
    CON_IFOUTSIDE,          // 64
    CON_IFMULTIPLAYER,      // 65
    CON_OPERATE,            // 66
    CON_IFINSPACE,          // 67
    CON_DEBUG,              // 68
    CON_ENDOFGAME,          // 69
    CON_IFBULLETNEAR,       // 70
    CON_IFRESPAWN,          // 71
    CON_IFFLOORDISTL,       // 72
    CON_IFCEILINGDISTL,     // 73
    CON_SPRITEPAL,          // 74
    CON_IFPINVENTORY,       // 75
    CON_BETANAME,           // 76
    CON_CACTOR,             // 77
    CON_IFPHEALTHL,         // 78
    CON_DEFINEQUOTE,        // 79
    CON_QUOTE,              // 80
    CON_IFINOUTERSPACE,     // 81
    CON_IFNOTMOVING,        // 82
    CON_RESPAWNHITAG,       // 83
    CON_TIP,                // 84
    CON_IFSPRITEPAL,        // 85
    CON_MONEY,              // 86
    CON_SOUNDONCE,          // 87
    CON_ADDKILLS,           // 88
    CON_STOPSOUND,          // 89
    CON_IFAWAYFROMWALL,     // 90
    CON_IFCANSEETARGET,     // 91
    CON_GLOBALSOUND,        // 92
    CON_LOTSOFGLASS,        // 93
    CON_IFGOTWEAPONCE,      // 94
    CON_GETLASTPAL,         // 95
    CON_PKICK,              // 96
    CON_MIKESND,            // 97
    CON_USERACTOR,          // 98
    CON_SIZEAT,             // 99
    CON_ADDSTRENGTH,        // 100
    CON_CSTATOR,            // 101
    CON_MAIL,               // 102
    CON_PAPER,              // 103
    CON_TOSSWEAPON,         // 104
    CON_SLEEPTIME,          // 105
    CON_NULLOP,             // 106
    CON_DEFINEVOLUMENAME,   // 107
    CON_DEFINESKILLNAME,    // 108
    CON_IFNOSOUNDS,         // 109
    CON_CLIPDIST,           // 110
    CON_IFANGDIFFL,         // 111
    CON_GAMEVAR,            // 112
    CON_IFVARL,             // 113
    CON_IFVARG,             // 114
    CON_SETVARVAR,          // 115
    CON_SETVAR,             // 116
    CON_ADDVARVAR,          // 117
    CON_ADDVAR,             // 118
    CON_IFVARVARL,          // 119
    CON_IFVARVARG,          // 120
    CON_ADDLOGVAR,          // 121
    CON_ADDLOG,             // 122
    CON_ONEVENT,            // 123
    CON_ENDEVENT,           // 124
    CON_IFVARE,             // 125
    CON_IFVARVARE,          // 126
    CON_SPGETLOTAG,         // 127
    CON_SPGETHITAG,         // 128
    CON_SECTGETLOTAG,       // 129
    CON_SECTGETHITAG,       // 130
    CON_IFSOUND,            // 131
    CON_GETTEXTUREFLOOR,    // 132
    CON_GETTEXTURECEILING,  // 133
    CON_INITTIMER,          // 134
    CON_STARTTRACK,         // 135
    CON_RANDVAR,            // 136
    CON_ENHANCED,           // 137
    CON_GETANGLETOTARGET,   // 138
    CON_GETACTORANGLE,      // 139
    CON_SETACTORANGLE,      // 140
    CON_MULVAR,             // 141
    CON_MULVARVAR,          // 142
    CON_DIVVAR,             // 143
    CON_DIVVARVAR,          // 144
    CON_MODVAR,             // 145
    CON_MODVARVAR,          // 146
    CON_ANDVAR,             // 147
    CON_ANDVARVAR,          // 148
    CON_ORVAR,              // 149
    CON_ORVARVAR,           // 150
    CON_GETPLAYERANGLE,     // 151
    CON_SETPLAYERANGLE,     // 152
    CON_LOCKPLAYER,         // 153
    CON_SETSECTOR,          // 154
    CON_GETSECTOR,          // 155
    CON_SETACTOR,           // 156
    CON_GETACTOR,           // 157
    CON_SETWALL,            // 158
    CON_GETWALL,            // 159
    CON_FINDNEARACTOR,      // 160
    CON_FINDNEARACTORVAR,   // 161
    CON_SETACTORVAR,        // 162
    CON_GETACTORVAR,        // 163
    CON_ESPAWN,             // 164
    CON_GETPLAYER,          // 165
    CON_SETPLAYER,          // 166
    CON_SQRT,               // 167
    CON_EVENTLOADACTOR,     // 168
    CON_ESPAWNVAR,          // 169
    CON_GETUSERDEF,         // 170
    CON_SETUSERDEF,         // 171
    CON_SUBVARVAR,          // 172
    CON_SUBVAR,             // 173
    CON_IFVARN,             // 174
    CON_IFVARVARN,          // 175
    CON_IFVARAND,           // 176
    CON_IFVARVARAND,        // 177
    CON_MYOS,               // 178
    CON_MYOSPAL,            // 179
    CON_DISPLAYRAND,        // 180
    CON_SIN,                // 181
    CON_XORVARVAR,          // 182
    CON_XORVAR,             // 183
    CON_RANDVARVAR,         // 184
    CON_MYOSX,              // 185
    CON_MYOSPALX,           // 186
    CON_GMAXAMMO,           // 187
    CON_SMAXAMMO,           // 188
    CON_STARTLEVEL,         // 189
    CON_ESHOOT,             // 190
    CON_QSPAWN,             // 191
    CON_ROTATESPRITE,       // 192
    CON_DEFINEPROJECTILE,   // 193
    CON_SPRITESHADOW,       // 194
    CON_COS,                // 195
    CON_ESHOOTVAR,          // 196
    CON_FINDNEARACTOR3D,    // 197
    CON_FINDNEARACTOR3DVAR, // 198
    CON_FLASH,              // 199
    CON_QSPAWNVAR,          // 200
    CON_EQSPAWN,            // 201
    CON_EQSPAWNVAR,         // 202
    CON_MINITEXT,           // 203
    CON_GAMETEXT,           // 204
    CON_DIGITALNUMBER,      // 205
    CON_ADDWEAPONVAR,       // 206
    CON_SETPROJECTILE,      // 207
    CON_ANGOFF,             // 208
    CON_UPDATESECTOR,       // 209
    CON_INSERTSPRITEQ,      // 210
    CON_ANGOFFVAR,          // 211
    CON_WHILEVARN,          // 212
    CON_SWITCH,             // 213
    CON_CASE,               // 214
    CON_DEFAULT,            // 215
    CON_ENDSWITCH,          // 216
    CON_SHOOTVAR,           // 217
    CON_SOUNDVAR,           // 218
    CON_FINDPLAYER,         // 219
    CON_FINDOTHERPLAYER,    // 220
    CON_ACTIVATEBYSECTOR,   // 221
    CON_OPERATESECTORS,     // 222
    CON_OPERATERESPAWNS,    // 223
    CON_OPERATEACTIVATORS,  // 224
    CON_OPERATEMASTERSWITCHES,  // 225
    CON_CHECKACTIVATORMOTION,   // 226
    CON_ZSHOOT,             // 227
    CON_DIST,               // 228
    CON_LDIST,              // 229
    CON_SHIFTVARL,          // 230
    CON_SHIFTVARR,          // 231
    CON_SPRITENVG,          // 232
    CON_GETANGLE,           // 233
    CON_WHILEVARVARN,       // 234
    CON_HITSCAN,            // 235
    CON_TIME,               // 236
    CON_GETPLAYERVAR,       // 237
    CON_SETPLAYERVAR,       // 238
    CON_MULSCALE,           // 239
    CON_SETASPECT,          // 240
    CON_TXDIST,             // 241
    CON_SPRITENOSHADE,      // 242
    CON_MOVESPRITE,         // 243
    CON_CHECKAVAILWEAPON,   // 244
    CON_SOUNDONCEVAR,       // 245
    CON_UPDATESECTORZ,      // 246
    CON_STOPALLSOUNDS,      // 247
    CON_SSP,                // 248
    CON_STOPSOUNDVAR,       // 249
    CON_DISPLAYRANDVAR,     // 250
    CON_DISPLAYRANDVARVAR,  // 251
    CON_CHECKAVAILINVEN,    // 252
    CON_GLOBALSOUNDVAR,     // 253
    CON_GUNIQHUDID,         // 254
    CON_GETPROJECTILE,      // 255
    CON_GETTHISPROJECTILE,  // 256
    CON_SETTHISPROJECTILE,  // 257
    CON_DEFINECHEAT,        // 258
    CON_CHEATKEYS,          // 259
    CON_USERQUOTE,          // 260
    CON_PRECACHE,           // 261
    CON_DEFINEGAMEFUNCNAME, // 262
    CON_REDEFINEQUOTE,      // 263
    CON_DYNQUOTE,           // 264
    CON_GETPNAME,           // 265
    CON_QSTRCAT,            // 266
    CON_QSTRCPY,            // 267
    CON_SETSPRITE,          // 268
    CON_ROTATEPOINT,        // 269
    CON_DRAGPOINT,          // 270
    CON_GETZRANGE,          // 271
    CON_CHANGESPRITESTAT,   // 272
    CON_GETCEILZOFSLOPE,    // 273
    CON_GETFLORZOFSLOPE,    // 274
    CON_NEARTAG,            // 275
    CON_DEFINEGAMETYPE,     // 276
    CON_CHANGESPRITESECT,   // 277
    CON_SPRITEFLAGS,        // 278
    CON_SAVEGAMEVAR,        // 279
    CON_READGAMEVAR,        // 280
    CON_FINDNEARSPRITE,     // 281
    CON_FINDNEARSPRITEVAR,  // 282
    CON_FINDNEARSPRITE3D,   // 283
    CON_FINDNEARSPRITE3DVAR,// 284
    CON_DYNAMICREMAP,       // 285
    CON_SETINPUT,           // 286
    CON_GETINPUT,           // 287
    CON_SAVE,				// 288
    CON_CANSEE,             // 289
    CON_CANSEESPR,          // 290
    CON_FINDNEARACTORZ,     // 291
    CON_FINDNEARACTORZVAR,  // 292
    CON_FINDNEARSPRITEZ,    // 293
    CON_FINDNEARSPRITEZVAR, // 294
    CON_EZSHOOT,            // 295
    END
};
