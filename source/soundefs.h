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

#define KICK_HIT                         0
#define PISTOL_RICOCHET                  1
#define PISTOL_BODYHIT                   2
#define PISTOL_FIRE                      3
#define EJECT_CLIP                       4
#define INSERT_CLIP                      5
#define CHAINGUN_FIRE                    6
#define RPG_SHOOT                        7
#define POOLBALLHIT                      8
#define RPG_EXPLODE                      9
#define CAT_FIRE                        10
#define SHRINKER_FIRE                   11
#define ACTOR_SHRINKING                 12
#define PIPEBOMB_BOUNCE                 13
#define PIPEBOMB_EXPLODE                14
#define LASERTRIP_ONWALL                15
#define LASERTRIP_ARMING                16
#define LASERTRIP_EXPLODE               17
#define VENT_BUST                       18
#define GLASS_BREAKING                  19
#define GLASS_HEAVYBREAK                20
#define SHORT_CIRCUIT                   21
#define ITEM_SPLASH                     22
#define DUKE_BREATHING                  23
#define DUKE_EXHALING                   24
#define DUKE_GASP                       25
#define SLIM_RECOG                      26
// #define ENDSEQVOL3SND1                  27
#define DUKE_URINATE                    28
#define ENDSEQVOL3SND2                  29
#define ENDSEQVOL3SND3                  30
#define DUKE_PASSWIND                   32
#define DUKE_CRACK                      33
#define SLIM_ATTACK                     34
#define SOMETHINGHITFORCE               35
#define DUKE_DRINKING                   36
#define DUKE_KILLED1                    37
#define DUKE_GRUNT                      38
#define DUKE_HARTBEAT                   39
#define DUKE_ONWATER                    40
#define DUKE_DEAD                       41
#define DUKE_LAND                       42
#define DUKE_WALKINDUCTS                43
#define DUKE_GLAD                       44
#define DUKE_YES                        45
#define DUKE_HEHE                       46
#define DUKE_SHUCKS                     47
#define DUKE_UNDERWATER                 48
#define DUKE_JETPACK_ON                 49
#define DUKE_JETPACK_IDLE               50
#define DUKE_JETPACK_OFF                51
#define LIZTROOP_GROWL                  52
#define LIZTROOP_TALK1                  53
#define LIZTROOP_TALK2                  54
#define LIZTROOP_TALK3                  55
#define DUKETALKTOBOSS                  56
#define LIZCAPT_GROWL                   57
#define LIZCAPT_TALK1                   58
#define LIZCAPT_TALK2                   59
#define LIZCAPT_TALK3                   60
#define LIZARD_BEG                      61
#define LIZARD_PAIN                     62
#define LIZARD_DEATH                    63
#define LIZARD_SPIT                     64
#define DRONE1_HISSRATTLE               65
#define DRONE1_HISSSCREECH              66
#define DUKE_TIP2                       67
#define FLESH_BURNING                   68
#define SQUISHED                        69
#define TELEPORTER                      70
#define ELEVATOR_ON                     71
#define DUKE_KILLED3                    72
#define ELEVATOR_OFF                    73
#define DOOR_OPERATE1                   74
#define SUBWAY                          75
#define SWITCH_ON                       76
#define FAN                             77
#define DUKE_GETWEAPON3                 78
#define FLUSH_TOILET                    79
#define HOVER_CRAFT                     80
#define EARTHQUAKE                      81
#define INTRUDER_ALERT                  82
#define END_OF_LEVEL_WARN               83
#define ENGINE_OPERATING                84
#define REACTOR_ON                      85
#define COMPUTER_AMBIENCE               86
#define GEARS_GRINDING                  87
#define BUBBLE_AMBIENCE                 88
#define MACHINE_AMBIENCE                89
#define SEWER_AMBIENCE                  90
#define WIND_AMBIENCE                   91
#define SOMETHING_DRIPPING              92
#define STEAM_HISSING                   93
#define THEATER_BREATH                  94
#define BAR_MUSIC                       95
#define BOS1_ROAM                       96
#define BOS1_RECOG                      97
#define BOS1_ATTACK1                    98
#define BOS1_PAIN                       99
#define BOS1_DYING                     100
#define BOS2_ROAM                      101
#define BOS2_RECOG                     102
#define BOS2_ATTACK                    103
#define BOS2_PAIN                      104
#define BOS2_DYING                     105
#define GETATOMICHEALTH                106
#define DUKE_GETWEAPON2                107
#define BOS3_DYING                     108
#define SHOTGUN_FIRE                   109
#define PRED_ROAM                      110
#define PRED_RECOG                     111
#define PRED_ATTACK                    112
#define PRED_PAIN                      113
#define PRED_DYING                     114
#define CAPT_ROAM                      115
#define CAPT_ATTACK                    116
#define CAPT_RECOG                     117
#define CAPT_PAIN                      118
#define CAPT_DYING                     119
#define PIG_ROAM                       120
#define PIG_RECOG                      121
#define PIG_ATTACK                     122
#define PIG_PAIN                       123
#define PIG_DYING                      124
#define RECO_ROAM                      125
#define RECO_RECOG                     126
#define RECO_ATTACK                    127
#define RECO_PAIN                      128
#define RECO_DYING                     129
#define DRON_ROAM                      130
#define DRON_RECOG                     131
#define DRON_ATTACK1                   132
#define DRON_PAIN                      133
#define DRON_DYING                     134
#define COMM_ROAM                      135
#define COMM_RECOG                     136
#define COMM_ATTACK                    137
#define COMM_PAIN                      138
#define COMM_DYING                     139
#define OCTA_ROAM                      140
#define OCTA_RECOG                     141
#define OCTA_ATTACK1                   142
#define OCTA_PAIN                      143
#define OCTA_DYING                     144
#define TURR_ROAM                      145
#define TURR_RECOG                     146
#define TURR_ATTACK                    147
#define DUMPSTER_MOVE                  148
#define SLIM_DYING                     149
#define BOS3_ROAM                      150
#define BOS3_RECOG                     151
#define BOS3_ATTACK1                   152
#define BOS3_PAIN                      153
#define BOS1_ATTACK2                   154
#define COMM_SPIN                      155
#define BOS1_WALK                      156
#define DRON_ATTACK2                   157
#define THUD                           158
#define OCTA_ATTACK2                   159
#define WIERDSHOT_FLY                  160
#define TURR_PAIN                      161
#define TURR_DYING                     162
#define SLIM_ROAM                      163
#define LADY_SCREAM                    164
#define DOOR_OPERATE2                  165
#define DOOR_OPERATE3                  166
#define DOOR_OPERATE4                  167
#define BORNTOBEWILDSND                168
#define SHOTGUN_COCK                   169
#define GENERIC_AMBIENCE1              170
#define GENERIC_AMBIENCE2              171
#define GENERIC_AMBIENCE3              172
#define GENERIC_AMBIENCE4              173
#define GENERIC_AMBIENCE5              174
#define GENERIC_AMBIENCE6              175
#define BOS3_ATTACK2                   176
#define GENERIC_AMBIENCE17             177
#define GENERIC_AMBIENCE18             178
#define GENERIC_AMBIENCE19             179
#define GENERIC_AMBIENCE20             180
#define GENERIC_AMBIENCE21             181
#define GENERIC_AMBIENCE22             182
#define SECRETLEVELSND                 183
#define GENERIC_AMBIENCE8              184
#define GENERIC_AMBIENCE9              185
#define GENERIC_AMBIENCE10             186
#define GENERIC_AMBIENCE11             187
#define GENERIC_AMBIENCE12             188
#define GENERIC_AMBIENCE13             189
#define GENERIC_AMBIENCE14             190
#define GENERIC_AMBIENCE15             192
#define GENERIC_AMBIENCE16             193
#define FIRE_CRACKLE                   194
#define BONUS_SPEECH1                  195
#define BONUS_SPEECH2                  196
#define BONUS_SPEECH3                  197
#define PIG_CAPTURE_DUKE               198
#define BONUS_SPEECH4                  199
#define DUKE_LAND_HURT                 200
#define DUKE_HIT_STRIPPER1             201
#define DUKE_TIP1                      202
#define DUKE_KILLED2                   203
#define PRED_ROAM2                     204
#define PIG_ROAM2                      205
#define DUKE_GETWEAPON1                206
#define DUKE_SEARCH2                   207
#define DUKE_CRACK2                    208
#define DUKE_SEARCH                    209
#define DUKE_GET                       210
#define DUKE_LONGTERM_PAIN             211
#define MONITOR_ACTIVE                 212
#define NITEVISION_ONOFF               213
#define DUKE_HIT_STRIPPER2             214
#define DUKE_CRACK_FIRST               215
#define DUKE_USEMEDKIT                 216
#define DUKE_TAKEPILLS                 217
#define DUKE_PISSRELIEF                218
#define SELECT_WEAPON                  219
#define WATER_GURGLE                   220
#define DUKE_GETWEAPON4                221
#define JIBBED_ACTOR1                  222
#define JIBBED_ACTOR2                  223
#define JIBBED_ACTOR3                  224
#define JIBBED_ACTOR4                  225
#define JIBBED_ACTOR5                  226
#define JIBBED_ACTOR6                  227
#define JIBBED_ACTOR7                  228
#define DUKE_GOTHEALTHATLOW            229
#define BOSSTALKTODUKE                 230
#define WAR_AMBIENCE1                  231
#define WAR_AMBIENCE2                  232
#define WAR_AMBIENCE3                  233
#define WAR_AMBIENCE4                  234
#define WAR_AMBIENCE5                  235
#define WAR_AMBIENCE6                  236
#define WAR_AMBIENCE7                  237
#define WAR_AMBIENCE8                  238
#define WAR_AMBIENCE9                  239
#define WAR_AMBIENCE10                 240
#define ALIEN_TALK1                    241
#define ALIEN_TALK2                    242
#define EXITMENUSOUND                  243
#define FLY_BY                         244
#define DUKE_SCREAM                    245
#define SHRINKER_HIT                   246
#define RATTY                          247
#define INTO_MENU                      248
#define BONUSMUSIC                     249
#define DUKE_BOOBY                     250
#define DUKE_TALKTOBOSSFALL            251
#define DUKE_LOOKINTOMIRROR            252
#define PIG_ROAM3                      253
#define KILLME                         254
#define DRON_JETSND                    255
#define SPACE_DOOR1                    256
#define SPACE_DOOR2                    257
#define SPACE_DOOR3                    258
#define SPACE_DOOR4                    259
#define SPACE_DOOR5                    260
#define ALIEN_ELEVATOR1                261
#define VAULT_DOOR                     262
#define JIBBED_ACTOR13                 263
#define DUKE_GETWEAPON6                264
#define JIBBED_ACTOR8                  265
#define JIBBED_ACTOR9                  266
#define JIBBED_ACTOR10                 267
#define JIBBED_ACTOR11                 268
#define JIBBED_ACTOR12                 269
#define DUKE_KILLED4                   270
#define DUKE_KILLED5                   271
#define ALIEN_SWITCH1                  272
#define DUKE_STEPONFECES               273
#define DUKE_LONGTERM_PAIN2            274
#define DUKE_LONGTERM_PAIN3            275
#define DUKE_LONGTERM_PAIN4            276
#define COMPANB2                       277
#define KTIT                           278
#define HELICOP_IDLE                   279
#define STEPNIT                        280
#define SPACE_AMBIENCE1                281
#define SPACE_AMBIENCE2                282
#define SLIM_HATCH                     283
#define RIPHEADNECK                    284
#define FOUNDJONES                     285
#define ALIEN_DOOR1                    286
#define ALIEN_DOOR2                    287
#define ENDSEQVOL3SND4                 288
#define ENDSEQVOL3SND5                 289
#define ENDSEQVOL3SND6                 290
#define ENDSEQVOL3SND7                 291
#define ENDSEQVOL3SND8                 292
#define ENDSEQVOL3SND9                 293
#define WHIPYOURASS                    294
#define ENDSEQVOL2SND1                 295
#define ENDSEQVOL2SND2                 296
#define ENDSEQVOL2SND3                 297
#define ENDSEQVOL2SND4                 298
#define ENDSEQVOL2SND5                 299
#define ENDSEQVOL2SND6                 300
#define ENDSEQVOL2SND7                 301
#define GENERIC_AMBIENCE23             302
#define SOMETHINGFROZE                 303
#define DUKE_LONGTERM_PAIN5            304
#define DUKE_LONGTERM_PAIN6            305
#define DUKE_LONGTERM_PAIN7            306
#define DUKE_LONGTERM_PAIN8            307
#define WIND_REPEAT                    308
#define MYENEMY_ROAM                   309
#define MYENEMY_HURT                   310
#define MYENEMY_DEAD                   311
#define MYENEMY_SHOOT                  312
#define STORE_MUSIC                    313
#define STORE_MUSIC_BROKE              314
#define ACTOR_GROWING                  315
#define NEWBEAST_ROAM                  316
#define NEWBEAST_RECOG                 317
#define NEWBEAST_ATTACK                318
#define NEWBEAST_PAIN                  319
#define NEWBEAST_DYING                 320
#define NEWBEAST_SPIT                  321
#define VOL4_1                         322
#define SUPERMARKET                    323
#define MOUSEANNOY                     324
#define BOOKEM                         325
#define SUPERMARKETCRY                 326
#define DESTRUCT                       327
#define EATFOOD                        328
#define MAKEMYDAY                      329
#define WITNESSSTAND                   330
#define VACATIONSPEECH                 331
#define YIPPEE1                        332
#define YOHOO1                         333
#define YOHOO2                         334
#define DOLPHINSND                     335
#define TOUGHGALSND1                   336
#define TOUGHGALSND2                   337
#define TOUGHGALSND3                   338
#define TOUGHGALSND4                   339
#define TANK_ROAM                      340
#define BOS4_ROAM                      341
#define BOS4_RECOG                     342
#define BOS4_ATTACK                    343
#define BOS4_PAIN                      344
#define BOS4_DYING                     345
#define NEWBEAST_ATTACKMISS            346
#define VOL4_2                         347
#define COOKINGDEEPFRIER               348
#define WHINING_DOG                    349
#define DEAD_DOG                       350
#define LIGHTNING_SLAP                 351
#define THUNDER                        352
#define HAPPYMOUSESND1                 353
#define HAPPYMOUSESND2                 354
#define HAPPYMOUSESND3                 355
#define HAPPYMOUSESND4                 356
#define ALARM                          357
#define RAIN                           358
#define DTAG_GREENRUN                  359
#define DTAG_BROWNRUN                  360
#define DTAG_GREENSCORE                361
#define DTAG_BROWNSCORE                362
#define INTRO4_1                       363
#define INTRO4_2                       364
#define INTRO4_3                       365
#define INTRO4_4                       366
#define INTRO4_5                       367
#define INTRO4_6                       368
#define SCREECH                        369
#define BOSS4_DEADSPEECH               370
#define BOSS4_FIRSTSEE                 371
#define PARTY_SPEECH                   372
#define POSTAL_SPEECH                  373
#define TGSPEECH                       374
#define DOGROOMSPEECH                  375
#define SMACKED                        376
#define MDEVSPEECH                     377
#define AREA51SPEECH                   378
#define JEEPSOUND                      379
#define BIGDOORSLAM                    380
#define BOS4_LAY                       381
#define WAVESOUND                      382
#define ILLBEBACK                      383
#define VOL4ENDSND1                    384
#define VOL4ENDSND2                    385
#define EXPANDERHIT                    386
#define SNAKESPEECH                    387
#define EXPANDERSHOOT                  388
#define GETBACKTOWORK                  389
#define JIBBED_ACTOR14                 390
#define JIBBED_ACTOR15                 391
#define INTRO4_B                       392
#define BIGBANG                        393
#define SMACKIT                        394
#define BELLSND                        395
// MAXIMUM NUMBER OF SOUNDS: 450 ( 0-449 )
