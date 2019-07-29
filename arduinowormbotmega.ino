/* Arduino Worm Bot is a adaptation of python code of Tim Busbice for control a robot simulating the connectome of a C. Elegans worm, by Fernando Vidal Olmos 

Original source code: http://www.connectomeengine.com/Home/Downloads
*/

/* neural list identification */

#define N_ADAL 0
#define N_ADAR 1
#define N_ADEL 2
#define N_ADER 3
#define N_ADFL 4
#define N_ADFR 5
#define N_ADLL 6
#define N_ADLR 7
#define N_AFDL 8
#define N_AFDR 9
#define N_AIAL 10
#define N_AIAR 11
#define N_AIBL 12
#define N_AIBR 13
#define N_AIML 14
#define N_AIMR 15
#define N_AINL 16
#define N_AINR 17
#define N_AIYL 18
#define N_AIYR 19
#define N_AIZL 20
#define N_AIZR 21
#define N_ALA 22
#define N_ALML 23
#define N_ALMR 24
#define N_ALNL 25
#define N_ALNR 26
#define N_AQR 27
#define N_AS1 28
#define N_AS10 29
#define N_AS11 30
#define N_AS2 31
#define N_AS3 32
#define N_AS4 33
#define N_AS5 34
#define N_AS6 35
#define N_AS7 36
#define N_AS8 37
#define N_AS9 38
#define N_ASEL 39
#define N_ASER 40
#define N_ASGL 41
#define N_ASGR 42
#define N_ASHL 43
#define N_ASHR 44
#define N_ASIL 45
#define N_ASIR 46
#define N_ASJL 47
#define N_ASJR 48
#define N_ASKL 49
#define N_ASKR 50
#define N_AUAL 51
#define N_AUAR 52
#define N_AVAL 53
#define N_AVAR 54
#define N_AVBL 55
#define N_AVBR 56
#define N_AVDL 57
#define N_AVDR 58
#define N_AVEL 59
#define N_AVER 60
#define N_AVFL 61
#define N_AVFR 62
#define N_AVG 63
#define N_AVHL 64
#define N_AVHR 65
#define N_AVJL 66
#define N_AVJR 67
#define N_AVKL 68
#define N_AVKR 69
#define N_AVL 70
#define N_AVM 71
#define N_AWAL 72
#define N_AWAR 73
#define N_AWBL 74
#define N_AWBR 75
#define N_AWCL 76
#define N_AWCR 77
#define N_BAGL 78
#define N_BAGR 79
#define N_BDUL 80
#define N_BDUR 81
#define N_CEPDL 82
#define N_CEPDR 83
#define N_CEPVL 84
#define N_CEPVR 85
#define N_DA1 86
#define N_DA2 87
#define N_DA3 88
#define N_DA4 89
#define N_DA5 90
#define N_DA6 91
#define N_DA7 92
#define N_DA8 93
#define N_DA9 94
#define N_DB1 95
#define N_DB2 96
#define N_DB3 97
#define N_DB4 98
#define N_DB5 99
#define N_DB6 100
#define N_DB7 101
#define N_DD1 102
#define N_DD2 103
#define N_DD3 104
#define N_DD4 105
#define N_DD5 106
#define N_DD6 107
#define N_DVA 108
#define N_DVB 109
#define N_DVC 110
#define N_FLPL 111
#define N_FLPR 112
#define N_HSNL 113
#define N_HSNR 114
#define N_I1L 115
#define N_I1R 116
#define N_I2L 117
#define N_I2R 118
#define N_I3 119
#define N_I4 120
#define N_I5 121
#define N_I6 122
#define N_IL1DL 123
#define N_IL1DR 124
#define N_IL1L 125
#define N_IL1R 126
#define N_IL1VL 127
#define N_IL1VR 128
#define N_IL2L 129
#define N_IL2R 130
#define N_IL2DL 131
#define N_IL2DR 132
#define N_IL2VL 133
#define N_IL2VR 134
#define N_LUAL 135
#define N_LUAR 136
#define N_M1 137
#define N_M2L 138
#define N_M2R 139
#define N_M3L 140
#define N_M3R 141
#define N_M4 142
#define N_M5 143
#define N_MANAL 144
#define N_MCL 145
#define N_MCR 146
#define N_MDL01 147
#define N_MDL02 148
#define N_MDL03 149
#define N_MDL04 150
#define N_MDL05 151
#define N_MDL06 152
#define N_MDL07 153
#define N_MDL08 154
#define N_MDL09 155
#define N_MDL10 156
#define N_MDL11 157
#define N_MDL12 158
#define N_MDL13 159
#define N_MDL14 160
#define N_MDL15 161
#define N_MDL16 162
#define N_MDL17 163
#define N_MDL18 164
#define N_MDL19 165
#define N_MDL20 166
#define N_MDL21 167
#define N_MDL22 168
#define N_MDL23 169
#define N_MDL24 170
#define N_MDR01 171
#define N_MDR02 172
#define N_MDR03 173
#define N_MDR04 174
#define N_MDR05 175
#define N_MDR06 176
#define N_MDR07 177
#define N_MDR08 178
#define N_MDR09 179
#define N_MDR10 180
#define N_MDR11 181
#define N_MDR12 182
#define N_MDR13 183
#define N_MDR14 184
#define N_MDR15 185
#define N_MDR16 186
#define N_MDR17 187
#define N_MDR18 188
#define N_MDR19 189
#define N_MDR20 190
#define N_MDR21 191
#define N_MDR22 192
#define N_MDR23 193
#define N_MDR24 194
#define N_MI 195
#define N_MVL01 196
#define N_MVL02 197
#define N_MVL03 198
#define N_MVL04 199
#define N_MVL05 200
#define N_MVL06 201
#define N_MVL07 202
#define N_MVL08 203
#define N_MVL09 204
#define N_MVL10 205
#define N_MVL11 206
#define N_MVL12 207
#define N_MVL13 208
#define N_MVL14 209
#define N_MVL15 210
#define N_MVL16 211
#define N_MVL17 212
#define N_MVL18 213
#define N_MVL19 214
#define N_MVL20 215
#define N_MVL21 216
#define N_MVL22 217
#define N_MVL23 218
#define N_MVR01 219
#define N_MVR02 220
#define N_MVR03 221
#define N_MVR04 222
#define N_MVR05 223
#define N_MVR06 224
#define N_MVR07 225
#define N_MVR08 226
#define N_MVR09 227
#define N_MVR10 228
#define N_MVR11 229
#define N_MVR12 230
#define N_MVR13 231
#define N_MVR14 232
#define N_MVR15 233
#define N_MVR16 234
#define N_MVR17 235
#define N_MVR18 236
#define N_MVR19 237
#define N_MVR20 238
#define N_MVR21 239
#define N_MVR22 240
#define N_MVR23 241
#define N_MVR24 242
#define N_MVULVA 243
#define N_NSML 244
#define N_NSMR 245
#define N_OLLL 246
#define N_OLLR 247
#define N_OLQDL 248
#define N_OLQDR 249
#define N_OLQVL 250
#define N_OLQVR 251
#define N_PDA 252
#define N_PDB 253
#define N_PDEL 254
#define N_PDER 255
#define N_PHAL 256
#define N_PHAR 257
#define N_PHBL 258
#define N_PHBR 259
#define N_PHCL 260
#define N_PHCR 261
#define N_PLML 262
#define N_PLMR 263
#define N_PLNL 264
#define N_PLNR 265
#define N_PQR 266
#define N_PVCL 267
#define N_PVCR 268
#define N_PVDL 269
#define N_PVDR 270
#define N_PVM 271
#define N_PVNL 272
#define N_PVNR 273
#define N_PVPL 274
#define N_PVPR 275
#define N_PVQL 276
#define N_PVQR 277
#define N_PVR 278
#define N_PVT 279
#define N_PVWL 280
#define N_PVWR 281
#define N_RIAL 282
#define N_RIAR 283
#define N_RIBL 284
#define N_RIBR 285
#define N_RICL 286
#define N_RICR 287
#define N_RID 288
#define N_RIFL 289
#define N_RIFR 290
#define N_RIGL 291
#define N_RIGR 292
#define N_RIH 293
#define N_RIML 294
#define N_RIMR 295
#define N_RIPL 296
#define N_RIPR 297
#define N_RIR 298
#define N_RIS 299
#define N_RIVL 300
#define N_RIVR 301
#define N_RMDDL 302
#define N_RMDDR 303
#define N_RMDL 304
#define N_RMDR 305
#define N_RMDVL 306
#define N_RMDVR 307
#define N_RMED 308
#define N_RMEL 309
#define N_RMER 310
#define N_RMEV 311
#define N_RMFL 312
#define N_RMFR 313
#define N_RMGL 314
#define N_RMGR 315
#define N_RMHL 316
#define N_RMHR 317
#define N_SAADL 318
#define N_SAADR 319
#define N_SAAVL 320
#define N_SAAVR 321
#define N_SABD 322
#define N_SABVL 323
#define N_SABVR 324
#define N_SDQL 325
#define N_SDQR 326
#define N_SIADL 327
#define N_SIADR 328
#define N_SIAVL 329
#define N_SIAVR 330
#define N_SIBDL 331
#define N_SIBDR 332
#define N_SIBVL 333
#define N_SIBVR 334
#define N_SMBDL 335
#define N_SMBDR 336
#define N_SMBVL 337
#define N_SMBVR 338
#define N_SMDDL 339
#define N_SMDDR 340
#define N_SMDVL 341
#define N_SMDVR 342
#define N_URADL 343
#define N_URADR 344
#define N_URAVL 345
#define N_URAVR 346
#define N_URBL 347
#define N_URBR 348
#define N_URXL 349
#define N_URXR 350
#define N_URYDL 351
#define N_URYDR 352
#define N_URYVL 353
#define N_URYVR 354
#define N_VA1 355
#define N_VA10 356
#define N_VA11 357
#define N_VA12 358
#define N_VA2 359
#define N_VA3 360
#define N_VA4 361
#define N_VA5 362
#define N_VA6 363
#define N_VA7 364
#define N_VA8 365
#define N_VA9 366
#define N_VB1 367
#define N_VB10 368
#define N_VB11 369
#define N_VB2 370
#define N_VB3 371
#define N_VB4 372
#define N_VB5 373
#define N_VB6 374
#define N_VB7 375
#define N_VB8 376
#define N_VB9 377
#define N_VC1 378
#define N_VC2 379
#define N_VC3 380
#define N_VC4 381
#define N_VC5 382
#define N_VC6 383
#define N_VD1 384
#define N_VD10 385
#define N_VD11 386
#define N_VD12 387
#define N_VD13 388
#define N_VD2 389
#define N_VD3 390
#define N_VD4 391
#define N_VD5 392
#define N_VD6 393
#define N_VD7 394
#define N_VD8 395
#define N_VD9 396

/* Arduino pin conections */

#define IN1 5
#define IN2 4
#define IN3 3
#define IN4 2
#define ENA 6
#define ENB 7
#define TRIG 11
#define ECHO 12
#define SOUT 10

/* Global specifications */

#define THRESHOLD 30
#define MUSCLE_CM_ESTIMULATE 20
#define LED 13

/* Motor function mode */

#define SPEED 1
#define RIGHT_SPEED 2
#define LEFT_SPEED 3
#define STOP 4
#define LEFT_STOP 5
#define RIGHT_STOP 6
#define RIGHT_FWD 7
#define RIGHT_BWD 8
#define LEFT_FWD 9
#define LEFT_BWD 10
#define RIGHT_ROT 11
#define LEFT_ROT 12
#define BWD 13
#define FWD 14

long dist;
long time;
float turnratio;
int postsynaptic[396][1];
int accumleft = 0;
int accumright = 0;
int new_speed = 0;
boolean food;
boolean thisState = 0;
boolean nextState = 1;

void createpostsynaptic(){
        // The PostSynaptic dictionary maintains the accumulated values for
        // each neuron and muscle. The Accumulated values are initialized to Zero
        resetSynapticNeuron(N_ADAL);
        resetSynapticNeuron(N_ADAR);
        resetSynapticNeuron(N_ADEL);
        resetSynapticNeuron(N_ADER);
        resetSynapticNeuron(N_ADFL);
        resetSynapticNeuron(N_ADFR);
        resetSynapticNeuron(N_ADLL);
        resetSynapticNeuron(N_ADLR);
        resetSynapticNeuron(N_AFDL);
        resetSynapticNeuron(N_AFDR);
        resetSynapticNeuron(N_AIAL);
        resetSynapticNeuron(N_AIAR);
        resetSynapticNeuron(N_AIBL);
        resetSynapticNeuron(N_AIBR);
        resetSynapticNeuron(N_AIML);
        resetSynapticNeuron(N_AIMR);
        resetSynapticNeuron(N_AINL);
        resetSynapticNeuron(N_AINR);
        resetSynapticNeuron(N_AIYL);
        resetSynapticNeuron(N_AIYR);
        resetSynapticNeuron(N_AIZL);
        resetSynapticNeuron(N_AIZR);
        resetSynapticNeuron(N_ALA);
        resetSynapticNeuron(N_ALML);
        resetSynapticNeuron(N_ALMR);
        resetSynapticNeuron(N_ALNL);
        resetSynapticNeuron(N_ALNR);
        resetSynapticNeuron(N_AQR);
        resetSynapticNeuron(N_AS1);
        resetSynapticNeuron(N_AS10);
        resetSynapticNeuron(N_AS11);
        resetSynapticNeuron(N_AS2);
        resetSynapticNeuron(N_AS3);
        resetSynapticNeuron(N_AS4);
        resetSynapticNeuron(N_AS5);
        resetSynapticNeuron(N_AS6);
        resetSynapticNeuron(N_AS7);
        resetSynapticNeuron(N_AS8);
        resetSynapticNeuron(N_AS9);
        resetSynapticNeuron(N_ASEL);
        resetSynapticNeuron(N_ASER);
        resetSynapticNeuron(N_ASGL);
        resetSynapticNeuron(N_ASGR);
        resetSynapticNeuron(N_ASHL);
        resetSynapticNeuron(N_ASHR);
        resetSynapticNeuron(N_ASIL);
        resetSynapticNeuron(N_ASIR);
        resetSynapticNeuron(N_ASJL);
        resetSynapticNeuron(N_ASJR);
        resetSynapticNeuron(N_ASKL);
        resetSynapticNeuron(N_ASKR);
        resetSynapticNeuron(N_AUAL);
        resetSynapticNeuron(N_AUAR);
        resetSynapticNeuron(N_AVAL);
        resetSynapticNeuron(N_AVAR);
        resetSynapticNeuron(N_AVBL);
        resetSynapticNeuron(N_AVBR);
        resetSynapticNeuron(N_AVDL);
        resetSynapticNeuron(N_AVDR);
        resetSynapticNeuron(N_AVEL);
        resetSynapticNeuron(N_AVER);
        resetSynapticNeuron(N_AVFL);
        resetSynapticNeuron(N_AVFR);
        resetSynapticNeuron(N_AVG);
        resetSynapticNeuron(N_AVHL);
        resetSynapticNeuron(N_AVHR);
        resetSynapticNeuron(N_AVJL);
        resetSynapticNeuron(N_AVJR);
        resetSynapticNeuron(N_AVKL);
        resetSynapticNeuron(N_AVKR);
        resetSynapticNeuron(N_AVL);
        resetSynapticNeuron(N_AVM);
        resetSynapticNeuron(N_AWAL);
        resetSynapticNeuron(N_AWAR);
        resetSynapticNeuron(N_AWBL);
        resetSynapticNeuron(N_AWBR);
        resetSynapticNeuron(N_AWCL);
        resetSynapticNeuron(N_AWCR);
        resetSynapticNeuron(N_BAGL);
        resetSynapticNeuron(N_BAGR);
        resetSynapticNeuron(N_BDUL);
        resetSynapticNeuron(N_BDUR);
        resetSynapticNeuron(N_CEPDL);
        resetSynapticNeuron(N_CEPDR);
        resetSynapticNeuron(N_CEPVL);
        resetSynapticNeuron(N_CEPVR);
        resetSynapticNeuron(N_DA1);
        resetSynapticNeuron(N_DA2);
        resetSynapticNeuron(N_DA3);
        resetSynapticNeuron(N_DA4);
        resetSynapticNeuron(N_DA5);
        resetSynapticNeuron(N_DA6);
        resetSynapticNeuron(N_DA7);
        resetSynapticNeuron(N_DA8);
        resetSynapticNeuron(N_DA9);
        resetSynapticNeuron(N_DB1);
        resetSynapticNeuron(N_DB2);
        resetSynapticNeuron(N_DB3);
        resetSynapticNeuron(N_DB4);
        resetSynapticNeuron(N_DB5);
        resetSynapticNeuron(N_DB6);
        resetSynapticNeuron(N_DB7);
        resetSynapticNeuron(N_DD1);
        resetSynapticNeuron(N_DD2);
        resetSynapticNeuron(N_DD3);
        resetSynapticNeuron(N_DD4);
        resetSynapticNeuron(N_DD5);
        resetSynapticNeuron(N_DD6);
        resetSynapticNeuron(N_DVA);
        resetSynapticNeuron(N_DVB);
        resetSynapticNeuron(N_DVC);
        resetSynapticNeuron(N_FLPL);
        resetSynapticNeuron(N_FLPR);
        resetSynapticNeuron(N_HSNL);
        resetSynapticNeuron(N_HSNR);
        resetSynapticNeuron(N_I1L);
        resetSynapticNeuron(N_I1R);
        resetSynapticNeuron(N_I2L);
        resetSynapticNeuron(N_I2R);
        resetSynapticNeuron(N_I3);
        resetSynapticNeuron(N_I4);
        resetSynapticNeuron(N_I5);
        resetSynapticNeuron(N_I6);
        resetSynapticNeuron(N_IL1DL);
        resetSynapticNeuron(N_IL1DR);
        resetSynapticNeuron(N_IL1L);
        resetSynapticNeuron(N_IL1R);
        resetSynapticNeuron(N_IL1VL);
        resetSynapticNeuron(N_IL1VR);
        resetSynapticNeuron(N_IL2L);
        resetSynapticNeuron(N_IL2R);
        resetSynapticNeuron(N_IL2DL);
        resetSynapticNeuron(N_IL2DR);
        resetSynapticNeuron(N_IL2VL);
        resetSynapticNeuron(N_IL2VR);
        resetSynapticNeuron(N_LUAL);
        resetSynapticNeuron(N_LUAR);
        resetSynapticNeuron(N_M1);
        resetSynapticNeuron(N_M2L);
        resetSynapticNeuron(N_M2R);
        resetSynapticNeuron(N_M3L);
        resetSynapticNeuron(N_M3R);
        resetSynapticNeuron(N_M4);
        resetSynapticNeuron(N_M5);
        resetSynapticNeuron(N_MANAL);
        resetSynapticNeuron(N_MCL);
        resetSynapticNeuron(N_MCR);
        resetSynapticNeuron(N_MDL01);
        resetSynapticNeuron(N_MDL02);
        resetSynapticNeuron(N_MDL03);
        resetSynapticNeuron(N_MDL04);
        resetSynapticNeuron(N_MDL05);
        resetSynapticNeuron(N_MDL06);
        resetSynapticNeuron(N_MDL07);
        resetSynapticNeuron(N_MDL08);
        resetSynapticNeuron(N_MDL09);
        resetSynapticNeuron(N_MDL10);
        resetSynapticNeuron(N_MDL11);
        resetSynapticNeuron(N_MDL12);
        resetSynapticNeuron(N_MDL13);
        resetSynapticNeuron(N_MDL14);
        resetSynapticNeuron(N_MDL15);
        resetSynapticNeuron(N_MDL16);
        resetSynapticNeuron(N_MDL17);
        resetSynapticNeuron(N_MDL18);
        resetSynapticNeuron(N_MDL19);
        resetSynapticNeuron(N_MDL20);
        resetSynapticNeuron(N_MDL21);
        resetSynapticNeuron(N_MDL22);
        resetSynapticNeuron(N_MDL23);
        resetSynapticNeuron(N_MDL24);
        resetSynapticNeuron(N_MDR01);
        resetSynapticNeuron(N_MDR02);
        resetSynapticNeuron(N_MDR03);
        resetSynapticNeuron(N_MDR04);
        resetSynapticNeuron(N_MDR05);
        resetSynapticNeuron(N_MDR06);
        resetSynapticNeuron(N_MDR07);
        resetSynapticNeuron(N_MDR08);
        resetSynapticNeuron(N_MDR09);
        resetSynapticNeuron(N_MDR10);
        resetSynapticNeuron(N_MDR11);
        resetSynapticNeuron(N_MDR12);
        resetSynapticNeuron(N_MDR13);
        resetSynapticNeuron(N_MDR14);
        resetSynapticNeuron(N_MDR15);
        resetSynapticNeuron(N_MDR16);
        resetSynapticNeuron(N_MDR17);
        resetSynapticNeuron(N_MDR18);
        resetSynapticNeuron(N_MDR19);
        resetSynapticNeuron(N_MDR20);
        resetSynapticNeuron(N_MDR21);
        resetSynapticNeuron(N_MDR22);
        resetSynapticNeuron(N_MDR23);
        resetSynapticNeuron(N_MDR24);
        resetSynapticNeuron(N_MI);
        resetSynapticNeuron(N_MVL01);
        resetSynapticNeuron(N_MVL02);
        resetSynapticNeuron(N_MVL03);
        resetSynapticNeuron(N_MVL04);
        resetSynapticNeuron(N_MVL05);
        resetSynapticNeuron(N_MVL06);
        resetSynapticNeuron(N_MVL07);
        resetSynapticNeuron(N_MVL08);
        resetSynapticNeuron(N_MVL09);
        resetSynapticNeuron(N_MVL10);
        resetSynapticNeuron(N_MVL11);
        resetSynapticNeuron(N_MVL12);
        resetSynapticNeuron(N_MVL13);
        resetSynapticNeuron(N_MVL14);
        resetSynapticNeuron(N_MVL15);
        resetSynapticNeuron(N_MVL16);
        resetSynapticNeuron(N_MVL17);
        resetSynapticNeuron(N_MVL18);
        resetSynapticNeuron(N_MVL19);
        resetSynapticNeuron(N_MVL20);
        resetSynapticNeuron(N_MVL21);
        resetSynapticNeuron(N_MVL22);
        resetSynapticNeuron(N_MVL23);
        resetSynapticNeuron(N_MVR01);
        resetSynapticNeuron(N_MVR02);
        resetSynapticNeuron(N_MVR03);
        resetSynapticNeuron(N_MVR04);
        resetSynapticNeuron(N_MVR05);
        resetSynapticNeuron(N_MVR06);
        resetSynapticNeuron(N_MVR07);
        resetSynapticNeuron(N_MVR08);
        resetSynapticNeuron(N_MVR09);
        resetSynapticNeuron(N_MVR10);
        resetSynapticNeuron(N_MVR11);
        resetSynapticNeuron(N_MVR12);
        resetSynapticNeuron(N_MVR13);
        resetSynapticNeuron(N_MVR14);
        resetSynapticNeuron(N_MVR15);
        resetSynapticNeuron(N_MVR16);
        resetSynapticNeuron(N_MVR17);
        resetSynapticNeuron(N_MVR18);
        resetSynapticNeuron(N_MVR19);
        resetSynapticNeuron(N_MVR20);
        resetSynapticNeuron(N_MVR21);
        resetSynapticNeuron(N_MVR22);
        resetSynapticNeuron(N_MVR23);
        resetSynapticNeuron(N_MVR24);
        resetSynapticNeuron(N_MVULVA);
        resetSynapticNeuron(N_NSML);
        resetSynapticNeuron(N_NSMR);
        resetSynapticNeuron(N_OLLL);
        resetSynapticNeuron(N_OLLR);
        resetSynapticNeuron(N_OLQDL);
        resetSynapticNeuron(N_OLQDR);
        resetSynapticNeuron(N_OLQVL);
        resetSynapticNeuron(N_OLQVR);
        resetSynapticNeuron(N_PDA);
        resetSynapticNeuron(N_PDB);
        resetSynapticNeuron(N_PDEL);
        resetSynapticNeuron(N_PDER);
        resetSynapticNeuron(N_PHAL);
        resetSynapticNeuron(N_PHAR);
        resetSynapticNeuron(N_PHBL);
        resetSynapticNeuron(N_PHBR);
        resetSynapticNeuron(N_PHCL);
        resetSynapticNeuron(N_PHCR);
        resetSynapticNeuron(N_PLML);
        resetSynapticNeuron(N_PLMR);
        resetSynapticNeuron(N_PLNL);
        resetSynapticNeuron(N_PLNR);
        resetSynapticNeuron(N_PQR);
        resetSynapticNeuron(N_PVCL);
        resetSynapticNeuron(N_PVCR);
        resetSynapticNeuron(N_PVDL);
        resetSynapticNeuron(N_PVDR);
        resetSynapticNeuron(N_PVM);
        resetSynapticNeuron(N_PVNL);
        resetSynapticNeuron(N_PVNR);
        resetSynapticNeuron(N_PVPL);
        resetSynapticNeuron(N_PVPR);
        resetSynapticNeuron(N_PVQL);
        resetSynapticNeuron(N_PVQR);
        resetSynapticNeuron(N_PVR);
        resetSynapticNeuron(N_PVT);
        resetSynapticNeuron(N_PVWL);
        resetSynapticNeuron(N_PVWR);
        resetSynapticNeuron(N_RIAL);
        resetSynapticNeuron(N_RIAR);
        resetSynapticNeuron(N_RIBL);
        resetSynapticNeuron(N_RIBR);
        resetSynapticNeuron(N_RICL);
        resetSynapticNeuron(N_RICR);
        resetSynapticNeuron(N_RID);
        resetSynapticNeuron(N_RIFL);
        resetSynapticNeuron(N_RIFR);
        resetSynapticNeuron(N_RIGL);
        resetSynapticNeuron(N_RIGR);
        resetSynapticNeuron(N_RIH);
        resetSynapticNeuron(N_RIML);
        resetSynapticNeuron(N_RIMR);
        resetSynapticNeuron(N_RIPL);
        resetSynapticNeuron(N_RIPR);
        resetSynapticNeuron(N_RIR);
        resetSynapticNeuron(N_RIS);
        resetSynapticNeuron(N_RIVL);
        resetSynapticNeuron(N_RIVR);
        resetSynapticNeuron(N_RMDDL);
        resetSynapticNeuron(N_RMDDR);
        resetSynapticNeuron(N_RMDL);
        resetSynapticNeuron(N_RMDR);
        resetSynapticNeuron(N_RMDVL);
        resetSynapticNeuron(N_RMDVR);
        resetSynapticNeuron(N_RMED);
        resetSynapticNeuron(N_RMEL);
        resetSynapticNeuron(N_RMER);
        resetSynapticNeuron(N_RMEV);
        resetSynapticNeuron(N_RMFL);
        resetSynapticNeuron(N_RMFR);
        resetSynapticNeuron(N_RMGL);
        resetSynapticNeuron(N_RMGR);
        resetSynapticNeuron(N_RMHL);
        resetSynapticNeuron(N_RMHR);
        resetSynapticNeuron(N_SAADL);
        resetSynapticNeuron(N_SAADR);
        resetSynapticNeuron(N_SAAVL);
        resetSynapticNeuron(N_SAAVR);
        resetSynapticNeuron(N_SABD);
        resetSynapticNeuron(N_SABVL);
        resetSynapticNeuron(N_SABVR);
        resetSynapticNeuron(N_SDQL);
        resetSynapticNeuron(N_SDQR);
        resetSynapticNeuron(N_SIADL);
        resetSynapticNeuron(N_SIADR);
        resetSynapticNeuron(N_SIAVL);
        resetSynapticNeuron(N_SIAVR);
        resetSynapticNeuron(N_SIBDL);
        resetSynapticNeuron(N_SIBDR);
        resetSynapticNeuron(N_SIBVL);
        resetSynapticNeuron(N_SIBVR);
        resetSynapticNeuron(N_SMBDL);
        resetSynapticNeuron(N_SMBDR);
        resetSynapticNeuron(N_SMBVL);
        resetSynapticNeuron(N_SMBVR);
        resetSynapticNeuron(N_SMDDL);
        resetSynapticNeuron(N_SMDDR);
        resetSynapticNeuron(N_SMDVL);
        resetSynapticNeuron(N_SMDVR);
        resetSynapticNeuron(N_URADL);
        resetSynapticNeuron(N_URADR);
        resetSynapticNeuron(N_URAVL);
        resetSynapticNeuron(N_URAVR);
        resetSynapticNeuron(N_URBL);
        resetSynapticNeuron(N_URBR);
        resetSynapticNeuron(N_URXL);
        resetSynapticNeuron(N_URXR);
        resetSynapticNeuron(N_URYDL);
        resetSynapticNeuron(N_URYDR);
        resetSynapticNeuron(N_URYVL);
        resetSynapticNeuron(N_URYVR);
        resetSynapticNeuron(N_VA1);
        resetSynapticNeuron(N_VA10);
        resetSynapticNeuron(N_VA11);
        resetSynapticNeuron(N_VA12);
        resetSynapticNeuron(N_VA2);
        resetSynapticNeuron(N_VA3);
        resetSynapticNeuron(N_VA4);
        resetSynapticNeuron(N_VA5);
        resetSynapticNeuron(N_VA6);
        resetSynapticNeuron(N_VA7);
        resetSynapticNeuron(N_VA8);
        resetSynapticNeuron(N_VA9);
        resetSynapticNeuron(N_VB1);
        resetSynapticNeuron(N_VB10);
        resetSynapticNeuron(N_VB11);
        resetSynapticNeuron(N_VB2);
        resetSynapticNeuron(N_VB3);
        resetSynapticNeuron(N_VB4);
        resetSynapticNeuron(N_VB5);
        resetSynapticNeuron(N_VB6);
        resetSynapticNeuron(N_VB7);
        resetSynapticNeuron(N_VB8);
        resetSynapticNeuron(N_VB9);
        resetSynapticNeuron(N_VC1);
        resetSynapticNeuron(N_VC2);
        resetSynapticNeuron(N_VC3);
        resetSynapticNeuron(N_VC4);
        resetSynapticNeuron(N_VC5);
        resetSynapticNeuron(N_VC6);
        resetSynapticNeuron(N_VD1);
        resetSynapticNeuron(N_VD10);
        resetSynapticNeuron(N_VD11);
        resetSynapticNeuron(N_VD12);
        resetSynapticNeuron(N_VD13);
        resetSynapticNeuron(N_VD2);
        resetSynapticNeuron(N_VD3);
        resetSynapticNeuron(N_VD4);
        resetSynapticNeuron(N_VD5);
        resetSynapticNeuron(N_VD6);
        resetSynapticNeuron(N_VD7);
        resetSynapticNeuron(N_VD8);
        resetSynapticNeuron(N_VD9);
}

void dendriteAccumulate(int dneuron)
{
  switch(dneuron) 
  {
    case N_ADAL:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_ADFL,1);
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIBR,2);
        postSynapticNeuron(N_ASHL,1);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_AVBL,4);
        postSynapticNeuron(N_AVBR,7);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVJR,5);
        postSynapticNeuron(N_FLPR,1);
        postSynapticNeuron(N_PVQL,1);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIML,3);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_SMDVR,2);
    break;
    case N_ADAR:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_ADFR,1);
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_ASHR,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,5);
        postSynapticNeuron(N_AVDL,2);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVJL,3);
        postSynapticNeuron(N_PVQR,1);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RIMR,5);
        postSynapticNeuron(N_RIPR,1);
        postSynapticNeuron(N_RIVR,1);
        postSynapticNeuron(N_SMDVL,2);
    break;
    case N_ADEL:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_AINL,1);
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVKR,1);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_BDUL,1);
        postSynapticNeuron(N_CEPDL,1);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_IL1L,1);
        postSynapticNeuron(N_IL2L,1);
        postSynapticNeuron(N_MDL05,1);
        postSynapticNeuron(N_OLLL,1);
        postSynapticNeuron(N_RIAL,1);
        postSynapticNeuron(N_RIFL,1);
        postSynapticNeuron(N_RIGL,5);
        postSynapticNeuron(N_RIGR,3);
        postSynapticNeuron(N_RIH,2);
        postSynapticNeuron(N_RIVL,1);
        postSynapticNeuron(N_RIVR,1);
        postSynapticNeuron(N_RMDL,2);
        postSynapticNeuron(N_RMGL,1);
        postSynapticNeuron(N_RMHL,1);
        postSynapticNeuron(N_SIADR,1);
        postSynapticNeuron(N_SIBDR,1);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_URBL,1);
    break;
    case N_ADER:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_ADEL,2);
        postSynapticNeuron(N_ALA,1);
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,1);
        postSynapticNeuron(N_CEPDR,1);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_FLPR,1);
        postSynapticNeuron(N_OLLR,2);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_RIGL,7);
        postSynapticNeuron(N_RIGR,4);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RMDR,2);
        postSynapticNeuron(N_SAAVR,1);
    break;
    case N_ADFL:
        postSynapticNeuron(N_ADAL,2);
        postSynapticNeuron(N_AIZL,12);
        postSynapticNeuron(N_AUAL,5);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_RIAL,15);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIR,2);
        postSynapticNeuron(N_SMBVL,2);
    break;
    case N_ADFR:
        postSynapticNeuron(N_ADAR,2);
        postSynapticNeuron(N_AIAR,1);
        postSynapticNeuron(N_AIYR,1);
        postSynapticNeuron(N_AIZR,8);
        postSynapticNeuron(N_ASHR,1);
        postSynapticNeuron(N_AUAR,4);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_RIAR,16);
        postSynapticNeuron(N_RIGR,3);
        postSynapticNeuron(N_RIR,3);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_SMBVR,2);
        postSynapticNeuron(N_URXR,1);
    break;
    case N_ADLL:
        postSynapticNeuron(N_ADLR,1);
        postSynapticNeuron(N_AIAL,6);
        postSynapticNeuron(N_AIBL,7);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_ALA,2);
        postSynapticNeuron(N_ASER,3);
        postSynapticNeuron(N_ASHL,2);
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,4);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVJR,3);
        postSynapticNeuron(N_AWBL,2);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RMGL,1);
    break;
    case N_ADLR:
        postSynapticNeuron(N_ADLL,1);
        postSynapticNeuron(N_AIAR,10);
        postSynapticNeuron(N_AIBR,10);
        postSynapticNeuron(N_ASER,1);
        postSynapticNeuron(N_ASHR,3);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVDL,5);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_AWCR,3);
        postSynapticNeuron(N_OLLR,1);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RICR,1);
    break;
    case N_AFDL:
        postSynapticNeuron(N_AFDR,1);
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AINR,1);
        postSynapticNeuron(N_AIYL,7);
    break;
    case N_AFDR:
        postSynapticNeuron(N_AFDL,1);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AIYR,13);
        postSynapticNeuron(N_ASER,1);
    break;
    case N_AIAL:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_AIAR,1);
        postSynapticNeuron(N_AIBL,10);
        postSynapticNeuron(N_AIML,2);
        postSynapticNeuron(N_AIZL,1);
        postSynapticNeuron(N_ASER,3);
        postSynapticNeuron(N_ASGL,1);
        postSynapticNeuron(N_ASHL,1);
        postSynapticNeuron(N_ASIL,2);
        postSynapticNeuron(N_ASKL,3);
        postSynapticNeuron(N_AWAL,1);
        postSynapticNeuron(N_AWCR,1);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_RIFL,1);
        postSynapticNeuron(N_RMGL,1);
    break;
    case N_AIAR:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_ADFR,1);
        postSynapticNeuron(N_ADLR,2);
        postSynapticNeuron(N_AIAL,1);
        postSynapticNeuron(N_AIBR,14);
        postSynapticNeuron(N_AIZR,1);
        postSynapticNeuron(N_ASER,1);
        postSynapticNeuron(N_ASGR,1);
        postSynapticNeuron(N_ASIR,2);
        postSynapticNeuron(N_AWAR,1);
        postSynapticNeuron(N_AWAR,1);
        postSynapticNeuron(N_AWCL,1);
        postSynapticNeuron(N_AWCR,3);
        postSynapticNeuron(N_RIFR,2);
    break;
    case N_AIBL:
        postSynapticNeuron(N_AFDL,1);
        postSynapticNeuron(N_AIYL,1);
        postSynapticNeuron(N_ASER,1);
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVBL,5);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIBR,4);
        postSynapticNeuron(N_RIFL,1);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RIGR,3);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RIMR,13);
        postSynapticNeuron(N_RIMR,1);
        postSynapticNeuron(N_RIVL,1);
        postSynapticNeuron(N_SAADL,2);
        postSynapticNeuron(N_SAADR,2);
        postSynapticNeuron(N_SMDDR,4);
    break;
    case N_AIBR:
        postSynapticNeuron(N_AFDR,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBR,3);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DVC,2);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIAL,1);
        postSynapticNeuron(N_RIBL,4);
        postSynapticNeuron(N_RIGL,3);
        postSynapticNeuron(N_RIML,16);
        postSynapticNeuron(N_RIML,1);
        postSynapticNeuron(N_RIMR,1);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RIVR,1);
        postSynapticNeuron(N_SAADL,1);
        postSynapticNeuron(N_SMDDL,3);
        postSynapticNeuron(N_SMDVL,1);
        postSynapticNeuron(N_VB1,3);
    break;
    case N_AIML:
        postSynapticNeuron(N_AIAL,5);
        postSynapticNeuron(N_ALML,1);
        postSynapticNeuron(N_ASGL,2);
        postSynapticNeuron(N_ASKL,2);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVFL,4);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_AVHL,2);
        postSynapticNeuron(N_AVHR,1);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_PVQL,1);
        postSynapticNeuron(N_RIFL,1);
        postSynapticNeuron(N_SIBDR,1);
        postSynapticNeuron(N_SMBVL,1);
    break;
    case N_AIMR:
        postSynapticNeuron(N_AIAR,5);
        postSynapticNeuron(N_ASGR,2);
        postSynapticNeuron(N_ASJR,2);
        postSynapticNeuron(N_ASKR,3);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_HSNR,2);
        postSynapticNeuron(N_OLQDR,1);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_RIFR,1);
        postSynapticNeuron(N_RMGR,1);
    break;
    case N_AINL:
        postSynapticNeuron(N_ADEL,1);
        postSynapticNeuron(N_AFDR,5);
        postSynapticNeuron(N_AINR,2);
        postSynapticNeuron(N_ASEL,3);
        postSynapticNeuron(N_ASGR,1);
        postSynapticNeuron(N_ASGR,1);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_BAGL,3);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,2);
    break;
    case N_AINR:
        postSynapticNeuron(N_AFDL,4);
        postSynapticNeuron(N_AFDR,1);
        postSynapticNeuron(N_AIAL,2);
        postSynapticNeuron(N_AIBL,2);
        postSynapticNeuron(N_AINL,2);
        postSynapticNeuron(N_ASEL,1);
        postSynapticNeuron(N_ASER,1);
        postSynapticNeuron(N_ASGL,1);
        postSynapticNeuron(N_AUAL,1);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_BAGR,3);
        postSynapticNeuron(N_RIBL,2);
        postSynapticNeuron(N_RID,1);
    break;
    case N_AIYL:
        postSynapticNeuron(N_AIYR,1);
        postSynapticNeuron(N_AIZL,13);
        postSynapticNeuron(N_AWAL,3);
        postSynapticNeuron(N_AWCL,1);
        postSynapticNeuron(N_AWCR,1);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_RIAL,7);
        postSynapticNeuron(N_RIBL,4);
        postSynapticNeuron(N_RIML,1);
    break;
    case N_AIYR:
        postSynapticNeuron(N_ADFR,1);
        postSynapticNeuron(N_AIYL,1);
        postSynapticNeuron(N_AIZR,8);
        postSynapticNeuron(N_AWAR,1);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_RIAR,6);
        postSynapticNeuron(N_RIBR,2);
        postSynapticNeuron(N_RIMR,1);
    break;
    case N_AIZL:
        postSynapticNeuron(N_AIAL,3);
        postSynapticNeuron(N_AIBL,2);
        postSynapticNeuron(N_AIBR,8);
        postSynapticNeuron(N_AIZR,2);
        postSynapticNeuron(N_ASEL,1);
        postSynapticNeuron(N_ASGL,1);
        postSynapticNeuron(N_ASHL,1);
        postSynapticNeuron(N_AVER,5);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_RIAL,8);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIML,4);
        postSynapticNeuron(N_SMBDL,9);
        postSynapticNeuron(N_SMBVL,7);
        postSynapticNeuron(N_VB2,1);
    break;
    case N_AIZR:
        postSynapticNeuron(N_AIAR,1);
        postSynapticNeuron(N_AIBL,8);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AIZL,2);
        postSynapticNeuron(N_ASGR,1);
        postSynapticNeuron(N_ASHR,1);
        postSynapticNeuron(N_AVEL,4);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AWAR,1);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_RIAR,7);
        postSynapticNeuron(N_RIMR,4);
        postSynapticNeuron(N_SMBDR,5);
        postSynapticNeuron(N_SMBVR,3);
        postSynapticNeuron(N_SMDDR,1);
    break;
    case N_ALA:
        postSynapticNeuron(N_ADEL,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVEL,2);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_RID,1);
        postSynapticNeuron(N_RMDR,1);
    break;
    case N_ALML:
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVM,1);
        postSynapticNeuron(N_BDUL,6);
        postSynapticNeuron(N_CEPDL,3);
        postSynapticNeuron(N_CEPVL,2);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_RMGL,1);
        postSynapticNeuron(N_SDQL,1);
    break;
    case N_ALMR:
        postSynapticNeuron(N_AVM,1);
        postSynapticNeuron(N_BDUR,5);
        postSynapticNeuron(N_CEPDR,1);
        postSynapticNeuron(N_CEPVR,1);
        postSynapticNeuron(N_PVCR,3);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_SIADL,1);
    break;
    case N_ALNL:
        postSynapticNeuron(N_SAAVL,3);
        postSynapticNeuron(N_SMBDR,2);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_SMDVL,1);
    break;
    case N_ALNR:
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_RMHR,1);
        postSynapticNeuron(N_SAAVR,2);
        postSynapticNeuron(N_SMBDL,2);
        postSynapticNeuron(N_SMDDR,1);
        postSynapticNeuron(N_SMDVL,1);
    break;
    case N_AQR:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_AVBL,3);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,4);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVKL,2);
        postSynapticNeuron(N_AVKR,1);
        postSynapticNeuron(N_BAGL,2);
        postSynapticNeuron(N_BAGR,2);
        postSynapticNeuron(N_PVCR,2);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_PVPL,7);
        postSynapticNeuron(N_PVPR,9);
        postSynapticNeuron(N_RIAL,3);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIGL,2);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_URXL,1);
    break;
    case N_AS1:
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_DA1,2);
        postSynapticNeuron(N_MDL05,3);
        postSynapticNeuron(N_MDL08,3);
        postSynapticNeuron(N_MDR05,3);
        postSynapticNeuron(N_MDR08,4);
        postSynapticNeuron(N_VA3,1);
        postSynapticNeuron(N_VD1,5);
        postSynapticNeuron(N_VD2,1);
    break;
    case N_AS2:
        postSynapticNeuron(N_DA2,1);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_MDL07,3);
        postSynapticNeuron(N_MDL08,2);
        postSynapticNeuron(N_MDR07,3);
        postSynapticNeuron(N_MDR08,3);
        postSynapticNeuron(N_VA4,2);
        postSynapticNeuron(N_VD2,10);
    break;
    case N_AS3:
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_DA2,1);
        postSynapticNeuron(N_DA3,1);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_MDL09,3);
        postSynapticNeuron(N_MDL10,3);
        postSynapticNeuron(N_MDR09,3);
        postSynapticNeuron(N_MDR10,3);
        postSynapticNeuron(N_VA5,2);
        postSynapticNeuron(N_VD2,1);
        postSynapticNeuron(N_VD3,15);
    break;
    case N_AS4:
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_DA3,1);
        postSynapticNeuron(N_MDL11,2);
        postSynapticNeuron(N_MDL12,2);
        postSynapticNeuron(N_MDR11,3);
        postSynapticNeuron(N_MDR12,2);
        postSynapticNeuron(N_VD4,11);
    break;
    case N_AS5:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_DD2,1);
        postSynapticNeuron(N_MDL11,2);
        postSynapticNeuron(N_MDL14,3);
        postSynapticNeuron(N_MDR11,2);
        postSynapticNeuron(N_MDR14,3);
        postSynapticNeuron(N_VA7,1);
        postSynapticNeuron(N_VD5,9);
    break;
    case N_AS6:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DA5,2);
        postSynapticNeuron(N_MDL13,3);
        postSynapticNeuron(N_MDL14,2);
        postSynapticNeuron(N_MDR13,3);
        postSynapticNeuron(N_MDR14,2);
        postSynapticNeuron(N_VA8,1);
        postSynapticNeuron(N_VD6,13);
    break;
    case N_AS7:
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_AVAR,5);
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_MDL13,2);
        postSynapticNeuron(N_MDL16,3);
        postSynapticNeuron(N_MDR13,2);
        postSynapticNeuron(N_MDR16,3);
    break;
    case N_AS8:
        postSynapticNeuron(N_AVAL,4);
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_MDL15,2);
        postSynapticNeuron(N_MDL18,3);
        postSynapticNeuron(N_MDR15,2);
        postSynapticNeuron(N_MDR18,3);
    break;
    case N_AS9:
        postSynapticNeuron(N_AVAL,4);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_DVB,7);
        postSynapticNeuron(N_MDL17,2);
        postSynapticNeuron(N_MDL20,3);
        postSynapticNeuron(N_MDR17,2);
        postSynapticNeuron(N_MDR20,3);
    break;
    case N_AS10:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_MDL19,3);
        postSynapticNeuron(N_MDL20,2);
        postSynapticNeuron(N_MDR19,3);
        postSynapticNeuron(N_MDR20,2);
    break;
    case N_AS11:
        postSynapticNeuron(N_MDL21,1);
        postSynapticNeuron(N_MDL22,1);
        postSynapticNeuron(N_MDL23,1);
        postSynapticNeuron(N_MDL24,1);
        postSynapticNeuron(N_MDR21,1);
        postSynapticNeuron(N_MDR22,1);
        postSynapticNeuron(N_MDR23,1);
        postSynapticNeuron(N_MDR24,1);
        postSynapticNeuron(N_PDA,1);
        postSynapticNeuron(N_PDB,1);
        postSynapticNeuron(N_PDB,2);
        postSynapticNeuron(N_VD13,2);
    break;
    case N_ASEL:
        postSynapticNeuron(N_ADFR,1);
        postSynapticNeuron(N_AIAL,3);
        postSynapticNeuron(N_AIBL,7);
        postSynapticNeuron(N_AIBR,2);
        postSynapticNeuron(N_AIYL,13);
        postSynapticNeuron(N_AIYR,6);
        postSynapticNeuron(N_AWCL,4);
        postSynapticNeuron(N_AWCR,1);
        postSynapticNeuron(N_RIAR,1);
    break;
    case N_ASER:
        postSynapticNeuron(N_AFDL,1);
        postSynapticNeuron(N_AFDR,2);
        postSynapticNeuron(N_AIAL,1);
        postSynapticNeuron(N_AIAR,3);
        postSynapticNeuron(N_AIBL,2);
        postSynapticNeuron(N_AIBR,10);
        postSynapticNeuron(N_AIYL,2);
        postSynapticNeuron(N_AIYR,14);
        postSynapticNeuron(N_AWAR,1);
        postSynapticNeuron(N_AWCL,1);
        postSynapticNeuron(N_AWCR,1);
    break;
    case N_ASGL:
        postSynapticNeuron(N_AIAL,9);
        postSynapticNeuron(N_AIBL,3);
        postSynapticNeuron(N_AINR,1);
        postSynapticNeuron(N_AINR,1);
        postSynapticNeuron(N_AIZL,1);
        postSynapticNeuron(N_ASKL,1);
    break;
    case N_ASGR:
        postSynapticNeuron(N_AIAR,10);
        postSynapticNeuron(N_AIBR,2);
        postSynapticNeuron(N_AINL,1);
        postSynapticNeuron(N_AIYR,1);
        postSynapticNeuron(N_AIZR,1);
    break;
    case N_ASHL:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_ADFL,3);
        postSynapticNeuron(N_AIAL,7);
        postSynapticNeuron(N_AIBL,5);
        postSynapticNeuron(N_AIZL,1);
        postSynapticNeuron(N_ASHR,1);
        postSynapticNeuron(N_ASKL,1);
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVBL,6);
        postSynapticNeuron(N_AVDL,2);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_RIAL,4);
        postSynapticNeuron(N_RICL,2);
        postSynapticNeuron(N_RIML,1);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RMGL,1);
    break;
    case N_ASHR:
        postSynapticNeuron(N_ADAR,3);
        postSynapticNeuron(N_ADFR,2);
        postSynapticNeuron(N_AIAR,10);
        postSynapticNeuron(N_AIBR,3);
        postSynapticNeuron(N_AIZR,1);
        postSynapticNeuron(N_ASHL,1);
        postSynapticNeuron(N_ASKR,1);
        postSynapticNeuron(N_AVAR,5);
        postSynapticNeuron(N_AVBR,3);
        postSynapticNeuron(N_AVDL,5);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVER,3);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_RIAR,2);
        postSynapticNeuron(N_RICR,2);
        postSynapticNeuron(N_RMGR,2);
        postSynapticNeuron(N_RMGR,1);
    break;
    case N_ASIL:
        postSynapticNeuron(N_AIAL,2);
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIYL,2);
        postSynapticNeuron(N_AIZL,1);
        postSynapticNeuron(N_ASER,1);
        postSynapticNeuron(N_ASIR,1);
        postSynapticNeuron(N_ASKL,2);
        postSynapticNeuron(N_AWCL,1);
        postSynapticNeuron(N_AWCR,1);
        postSynapticNeuron(N_RIBL,1);
    break;
    case N_ASIR:
        postSynapticNeuron(N_AIAL,1);
        postSynapticNeuron(N_AIAR,3);
        postSynapticNeuron(N_AIAR,2);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_ASEL,2);
        postSynapticNeuron(N_ASHR,1);
        postSynapticNeuron(N_ASIL,1);
        postSynapticNeuron(N_AWCL,1);
        postSynapticNeuron(N_AWCR,1);
    break;
    case N_ASJL:
        postSynapticNeuron(N_ASJR,1);
        postSynapticNeuron(N_ASKL,4);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_PVQL,14);
    break;
    case N_ASJR:
        postSynapticNeuron(N_ASJL,1);
        postSynapticNeuron(N_ASKR,4);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_PVQR,13);
    break;
    case N_ASKL:
        postSynapticNeuron(N_AIAL,11);
        postSynapticNeuron(N_AIBL,2);
        postSynapticNeuron(N_AIML,2);
        postSynapticNeuron(N_ASKR,1);
        postSynapticNeuron(N_PVQL,5);
        postSynapticNeuron(N_RMGL,1);
    break;
    case N_ASKR:
        postSynapticNeuron(N_AIAR,11);
        postSynapticNeuron(N_AIMR,1);
        postSynapticNeuron(N_ASHR,1);
        postSynapticNeuron(N_ASKL,1);
        postSynapticNeuron(N_AWAR,1);
        postSynapticNeuron(N_CEPVR,1);
        postSynapticNeuron(N_PVQR,4);
        postSynapticNeuron(N_RIFR,1);
        postSynapticNeuron(N_RMGR,1);
    break;
    case N_AUAL:
        postSynapticNeuron(N_AINR,1);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVEL,3);
        postSynapticNeuron(N_AWBL,1);
        postSynapticNeuron(N_RIAL,5);
        postSynapticNeuron(N_RIBL,9);
    break;
    case N_AUAR:
        postSynapticNeuron(N_AINL,1);
        postSynapticNeuron(N_AIYR,1);
        postSynapticNeuron(N_AUAL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVER,4);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_RIAR,6);
        postSynapticNeuron(N_RIBR,13);
        postSynapticNeuron(N_URXR,1);
    break;
    case N_AVAL:
        postSynapticNeuron(N_AS1,3);
        postSynapticNeuron(N_AS10,3);
        postSynapticNeuron(N_AS11,4);
        postSynapticNeuron(N_AS2,1);
        postSynapticNeuron(N_AS3,3);
        postSynapticNeuron(N_AS4,1);
        postSynapticNeuron(N_AS5,4);
        postSynapticNeuron(N_AS6,1);
        postSynapticNeuron(N_AS7,14);
        postSynapticNeuron(N_AS8,9);
        postSynapticNeuron(N_AS9,12);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVHL,1);
        postSynapticNeuron(N_AVJL,2);
        postSynapticNeuron(N_DA1,4);
        postSynapticNeuron(N_DA2,4);
        postSynapticNeuron(N_DA3,6);
        postSynapticNeuron(N_DA4,10);
        postSynapticNeuron(N_DA5,8);
        postSynapticNeuron(N_DA6,21);
        postSynapticNeuron(N_DA7,4);
        postSynapticNeuron(N_DA8,4);
        postSynapticNeuron(N_DA9,3);
        postSynapticNeuron(N_DB5,2);
        postSynapticNeuron(N_DB6,4);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_LUAL,2);
        postSynapticNeuron(N_PVCL,12);
        postSynapticNeuron(N_PVCR,11);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_RIMR,3);
        postSynapticNeuron(N_SABD,4);
        postSynapticNeuron(N_SABVR,1);
        postSynapticNeuron(N_SDQR,1);
        postSynapticNeuron(N_URYDL,1);
        postSynapticNeuron(N_URYVR,1);
        postSynapticNeuron(N_VA1,3);
        postSynapticNeuron(N_VA10,6);
        postSynapticNeuron(N_VA11,7);
        postSynapticNeuron(N_VA12,2);
        postSynapticNeuron(N_VA2,5);
        postSynapticNeuron(N_VA3,3);
        postSynapticNeuron(N_VA4,3);
        postSynapticNeuron(N_VA5,8);
        postSynapticNeuron(N_VA6,10);
        postSynapticNeuron(N_VA7,2);
        postSynapticNeuron(N_VA8,19);
        postSynapticNeuron(N_VA9,8);
        postSynapticNeuron(N_VB9,5);
    break;
    case N_AVAR:
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_AS1,3);
        postSynapticNeuron(N_AS10,2);
        postSynapticNeuron(N_AS11,6);
        postSynapticNeuron(N_AS2,2);
        postSynapticNeuron(N_AS3,2);
        postSynapticNeuron(N_AS4,1);
        postSynapticNeuron(N_AS5,2);
        postSynapticNeuron(N_AS6,3);
        postSynapticNeuron(N_AS7,8);
        postSynapticNeuron(N_AS8,9);
        postSynapticNeuron(N_AS9,6);
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVEL,2);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_DA1,8);
        postSynapticNeuron(N_DA2,4);
        postSynapticNeuron(N_DA3,5);
        postSynapticNeuron(N_DA4,8);
        postSynapticNeuron(N_DA5,7);
        postSynapticNeuron(N_DA6,13);
        postSynapticNeuron(N_DA7,3);
        postSynapticNeuron(N_DA8,9);
        postSynapticNeuron(N_DA9,2);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DB5,3);
        postSynapticNeuron(N_DB6,5);
        postSynapticNeuron(N_LUAL,1);
        postSynapticNeuron(N_LUAR,3);
        postSynapticNeuron(N_PDEL,1);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_PVCL,7);
        postSynapticNeuron(N_PVCR,8);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RIMR,1);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_SABVL,6);
        postSynapticNeuron(N_SABVR,1);
        postSynapticNeuron(N_URYDR,1);
        postSynapticNeuron(N_URYVL,1);
        postSynapticNeuron(N_VA10,5);
        postSynapticNeuron(N_VA11,15);
        postSynapticNeuron(N_VA12,1);
        postSynapticNeuron(N_VA2,2);
        postSynapticNeuron(N_VA3,7);
        postSynapticNeuron(N_VA4,5);
        postSynapticNeuron(N_VA5,4);
        postSynapticNeuron(N_VA6,5);
        postSynapticNeuron(N_VA7,4);
        postSynapticNeuron(N_VA8,16);
        postSynapticNeuron(N_VB9,10);
        postSynapticNeuron(N_VD13,2);
    break;
    case N_AVBL:
        postSynapticNeuron(N_AQR,1);
        postSynapticNeuron(N_AS10,1);
        postSynapticNeuron(N_AS3,1);
        postSynapticNeuron(N_AS4,1);
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_AS6,1);
        postSynapticNeuron(N_AS7,2);
        postSynapticNeuron(N_AS9,1);
        postSynapticNeuron(N_AVAL,7);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_AVBR,4);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DB5,1);
        postSynapticNeuron(N_DB6,2);
        postSynapticNeuron(N_DB7,2);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RID,1);
        postSynapticNeuron(N_SDQR,1);
        postSynapticNeuron(N_SIBVL,1);
        postSynapticNeuron(N_VA10,1);
        postSynapticNeuron(N_VA2,1);
        postSynapticNeuron(N_VA7,1);
        postSynapticNeuron(N_VB1,1);
        postSynapticNeuron(N_VB10,2);
        postSynapticNeuron(N_VB11,2);
        postSynapticNeuron(N_VB2,4);
        postSynapticNeuron(N_VB4,1);
        postSynapticNeuron(N_VB5,1);
        postSynapticNeuron(N_VB6,1);
        postSynapticNeuron(N_VB7,2);
        postSynapticNeuron(N_VB8,7);
        postSynapticNeuron(N_VB9,1);
        postSynapticNeuron(N_VC3,1);
    break;
    case N_AVBR:
        postSynapticNeuron(N_AS1,1);
        postSynapticNeuron(N_AS10,1);
        postSynapticNeuron(N_AS3,1);
        postSynapticNeuron(N_AS4,1);
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_AS6,2);
        postSynapticNeuron(N_AS7,3);
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_AVBL,4);
        postSynapticNeuron(N_DA5,1);
        postSynapticNeuron(N_DB1,3);
        postSynapticNeuron(N_DB2,1);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DB5,1);
        postSynapticNeuron(N_DB6,1);
        postSynapticNeuron(N_DB7,1);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_PVNL,2);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RID,2);
        postSynapticNeuron(N_SIBVL,1);
        postSynapticNeuron(N_VA4,1);
        postSynapticNeuron(N_VA8,1);
        postSynapticNeuron(N_VA9,2);
        postSynapticNeuron(N_VB10,1);
        postSynapticNeuron(N_VB11,1);
        postSynapticNeuron(N_VB2,1);
        postSynapticNeuron(N_VB3,1);
        postSynapticNeuron(N_VB4,1);
        postSynapticNeuron(N_VB6,2);
        postSynapticNeuron(N_VB7,2);
        postSynapticNeuron(N_VB8,3);
        postSynapticNeuron(N_VB9,6);
        postSynapticNeuron(N_VD10,1);
        postSynapticNeuron(N_VD3,1);
    break;
    case N_AVDL:
        postSynapticNeuron(N_ADAR,2);
        postSynapticNeuron(N_AS1,1);
        postSynapticNeuron(N_AS10,1);
        postSynapticNeuron(N_AS11,2);
        postSynapticNeuron(N_AS4,1);
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_AVAL,13);
        postSynapticNeuron(N_AVAR,19);
        postSynapticNeuron(N_AVM,2);
        postSynapticNeuron(N_DA1,1);
        postSynapticNeuron(N_DA2,1);
        postSynapticNeuron(N_DA3,4);
        postSynapticNeuron(N_DA4,1);
        postSynapticNeuron(N_DA5,1);
        postSynapticNeuron(N_DA8,1);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_FLPR,1);
        postSynapticNeuron(N_LUAL,1);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_SABVL,1);
        postSynapticNeuron(N_SABVR,1);
        postSynapticNeuron(N_VA5,1);
    break;
    case N_AVDR:
        postSynapticNeuron(N_ADAL,2);
        postSynapticNeuron(N_ADLL,1);
        postSynapticNeuron(N_AS10,1);
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_AVAL,16);
        postSynapticNeuron(N_AVAR,15);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVDL,2);
        postSynapticNeuron(N_AVJL,2);
        postSynapticNeuron(N_DA1,2);
        postSynapticNeuron(N_DA2,1);
        postSynapticNeuron(N_DA3,1);
        postSynapticNeuron(N_DA4,1);
        postSynapticNeuron(N_DA5,2);
        postSynapticNeuron(N_DA8,1);
        postSynapticNeuron(N_DA9,1);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_FLPR,1);
        postSynapticNeuron(N_LUAL,2);
        postSynapticNeuron(N_PQR,1);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_SABVL,3);
        postSynapticNeuron(N_SABVR,1);
        postSynapticNeuron(N_VA11,1);
        postSynapticNeuron(N_VA2,1);
        postSynapticNeuron(N_VA3,2);
        postSynapticNeuron(N_VA6,1);
    break;
    case N_AVEL:
        postSynapticNeuron(N_AS1,1);
        postSynapticNeuron(N_AVAL,12);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_DA1,5);
        postSynapticNeuron(N_DA2,1);
        postSynapticNeuron(N_DA3,3);
        postSynapticNeuron(N_DA4,1);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RIMR,3);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_SABD,6);
        postSynapticNeuron(N_SABVL,7);
        postSynapticNeuron(N_SABVR,3);
        postSynapticNeuron(N_VA1,5);
        postSynapticNeuron(N_VA3,3);
        postSynapticNeuron(N_VD2,1);
        postSynapticNeuron(N_VD3,1);
    break;
    case N_AVER:
        postSynapticNeuron(N_AS1,3);
        postSynapticNeuron(N_AS2,2);
        postSynapticNeuron(N_AS3,1);
        postSynapticNeuron(N_AVAL,7);
        postSynapticNeuron(N_AVAR,16);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_DA1,5);
        postSynapticNeuron(N_DA2,3);
        postSynapticNeuron(N_DA3,1);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_RIML,3);
        postSynapticNeuron(N_RIMR,2);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_SABD,2);
        postSynapticNeuron(N_SABVL,3);
        postSynapticNeuron(N_SABVR,3);
        postSynapticNeuron(N_VA1,1);
        postSynapticNeuron(N_VA2,1);
        postSynapticNeuron(N_VA3,2);
        postSynapticNeuron(N_VA4,1);
        postSynapticNeuron(N_VA5,1);
    break;
    case N_AVFL:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVFR,30);
        postSynapticNeuron(N_AVG,1);
        postSynapticNeuron(N_AVHL,4);
        postSynapticNeuron(N_AVHR,7);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_MVL11,1);
        postSynapticNeuron(N_MVL12,1);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_PVNL,2);
        postSynapticNeuron(N_PVQL,1);
        postSynapticNeuron(N_PVQR,2);
        postSynapticNeuron(N_VB1,1);
    break;
    case N_AVFR:
        postSynapticNeuron(N_ASJL,1);
        postSynapticNeuron(N_ASKL,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,5);
        postSynapticNeuron(N_AVFL,24);
        postSynapticNeuron(N_AVHL,4);
        postSynapticNeuron(N_AVHR,2);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_MVL14,2);
        postSynapticNeuron(N_MVR14,2);
        postSynapticNeuron(N_PVQL,1);
        postSynapticNeuron(N_VC4,1);
        postSynapticNeuron(N_VD11,1);
    break;
    case N_AVG:
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_DA8,1);
        postSynapticNeuron(N_PHAL,2);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_PVQR,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIFL,1);
        postSynapticNeuron(N_RIFR,1);
        postSynapticNeuron(N_VA11,1);
    break;
    case N_AVHL:
        postSynapticNeuron(N_ADFR,3);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVFL,2);
        postSynapticNeuron(N_AVFR,5);
        postSynapticNeuron(N_AVHR,2);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_PHBR,1);
        postSynapticNeuron(N_PVPR,2);
        postSynapticNeuron(N_PVQL,1);
        postSynapticNeuron(N_PVQR,2);
        postSynapticNeuron(N_RIMR,1);
        postSynapticNeuron(N_RIR,3);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_SMBVR,1);
        postSynapticNeuron(N_VD1,1);
    break;
    case N_AVHR:
        postSynapticNeuron(N_ADLL,1);
        postSynapticNeuron(N_ADLR,2);
        postSynapticNeuron(N_AQR,2);
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVFR,2);
        postSynapticNeuron(N_AVHL,2);
        postSynapticNeuron(N_AVJR,4);
        postSynapticNeuron(N_PVNL,1);
        postSynapticNeuron(N_PVPL,3);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIR,4);
        postSynapticNeuron(N_SMBDL,1);
        postSynapticNeuron(N_SMBVL,1);
    break;
    case N_AVJL:
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,4);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_AVHL,2);
        postSynapticNeuron(N_AVJR,4);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_PLMR,2);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_PVCR,5);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_RIFR,1);
        postSynapticNeuron(N_RIS,2);
    break;
    case N_AVJR:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBL,3);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,3);
        postSynapticNeuron(N_AVER,3);
        postSynapticNeuron(N_AVJL,5);
        postSynapticNeuron(N_PVCL,3);
        postSynapticNeuron(N_PVCR,4);
        postSynapticNeuron(N_PVQR,1);
        postSynapticNeuron(N_SABVL,1);
    break;
    case N_AVKL:
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_AQR,2);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVEL,2);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVKR,2);
        postSynapticNeuron(N_AVM,1);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_PDEL,3);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_PVM,1);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_PVT,2);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RIMR,1);
        postSynapticNeuron(N_RMFR,1);
        postSynapticNeuron(N_SAADR,1);
        postSynapticNeuron(N_SIAVR,1);
        postSynapticNeuron(N_SMBDL,1);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_SMBVR,1);
        postSynapticNeuron(N_SMDDR,1);
        postSynapticNeuron(N_VB1,4);
        postSynapticNeuron(N_VB10,1);
    break;
    case N_AVKR:
        postSynapticNeuron(N_ADEL,1);
        postSynapticNeuron(N_AQR,1);
        postSynapticNeuron(N_AVKL,2);
        postSynapticNeuron(N_BDUL,1);
        postSynapticNeuron(N_MVL10,1);
        postSynapticNeuron(N_PVPL,6);
        postSynapticNeuron(N_PVQL,1);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RIMR,2);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMFL,1);
        postSynapticNeuron(N_SAADL,1);
        postSynapticNeuron(N_SMBDL,1);
        postSynapticNeuron(N_SMBDL,1);
        postSynapticNeuron(N_SMBDR,2);
        postSynapticNeuron(N_SMBVR,1);
        postSynapticNeuron(N_SMDDL,1);
        postSynapticNeuron(N_SMDDR,2);
    break;
    case N_AVL:
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_DA2,1);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_DD6,2);
        postSynapticNeuron(N_DVB,1);
        postSynapticNeuron(N_DVC,9);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_MVL10,-5);
        postSynapticNeuron(N_MVR10,-5);
        postSynapticNeuron(N_PVM,1);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_PVWL,1);
        postSynapticNeuron(N_SABD,5);
        postSynapticNeuron(N_SABVL,4);
        postSynapticNeuron(N_SABVR,3);
        postSynapticNeuron(N_VD12,4);
    break;
    case N_AVM:
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_ALML,1);
        postSynapticNeuron(N_ALMR,1);
        postSynapticNeuron(N_AVBL,6);
        postSynapticNeuron(N_AVBR,6);
        postSynapticNeuron(N_AVDL,2);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_BDUL,3);
        postSynapticNeuron(N_BDUR,2);
        postSynapticNeuron(N_DA1,1);
        postSynapticNeuron(N_PVCL,4);
        postSynapticNeuron(N_PVCR,5);
        postSynapticNeuron(N_PVNL,1);
        postSynapticNeuron(N_PVR,3);
        postSynapticNeuron(N_RID,1);
        postSynapticNeuron(N_SIBVL,1);
        postSynapticNeuron(N_VA1,2);
    break;
    case N_AWAL:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_AFDL,5);
        postSynapticNeuron(N_AIAL,1);
        postSynapticNeuron(N_AIYL,1);
        postSynapticNeuron(N_AIZL,10);
        postSynapticNeuron(N_ASEL,4);
        postSynapticNeuron(N_ASGL,1);
        postSynapticNeuron(N_AWAR,1);
        postSynapticNeuron(N_AWBL,1);
    break;
    case N_AWAR:
        postSynapticNeuron(N_ADFR,3);
        postSynapticNeuron(N_AFDR,7);
        postSynapticNeuron(N_AIAR,1);
        postSynapticNeuron(N_AIYR,2);
        postSynapticNeuron(N_AIZR,7);
        postSynapticNeuron(N_AIZR,1);
        postSynapticNeuron(N_ASEL,1);
        postSynapticNeuron(N_ASER,2);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_AWAL,1);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_RIFR,2);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RIR,2);
    break;
    case N_AWBL:
        postSynapticNeuron(N_ADFL,9);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AIZL,9);
        postSynapticNeuron(N_AUAL,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_RIAL,3);
        postSynapticNeuron(N_RMGL,1);
        postSynapticNeuron(N_SMBDL,1);
    break;
    case N_AWBR:
        postSynapticNeuron(N_ADFR,4);
        postSynapticNeuron(N_AIZR,4);
        postSynapticNeuron(N_ASGR,1);
        postSynapticNeuron(N_ASHR,2);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AWBL,1);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RIR,2);
        postSynapticNeuron(N_RMGR,1);
        postSynapticNeuron(N_SMBVR,1);
    break;
    case N_AWCL:
        postSynapticNeuron(N_AIAL,2);
        postSynapticNeuron(N_AIAR,4);
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AIYL,10);
        postSynapticNeuron(N_ASEL,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AWCR,1);
        postSynapticNeuron(N_RIAL,3);
    break;
    case N_AWCR:
        postSynapticNeuron(N_AIAR,1);
        postSynapticNeuron(N_AIBR,4);
        postSynapticNeuron(N_AIYL,4);
        postSynapticNeuron(N_AIYR,9);
        postSynapticNeuron(N_ASEL,1);
        postSynapticNeuron(N_ASGR,1);
        postSynapticNeuron(N_AWCL,5);
    break;
    case N_BAGL:
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,4);
        postSynapticNeuron(N_BAGR,1);
        postSynapticNeuron(N_BAGR,1);
        postSynapticNeuron(N_RIAR,5);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,7);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIGR,4);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RIR,1);
    break;
    case N_BAGR:
        postSynapticNeuron(N_AIYL,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVEL,2);
        postSynapticNeuron(N_BAGL,1);
        postSynapticNeuron(N_RIAL,5);
        postSynapticNeuron(N_RIBL,4);
        postSynapticNeuron(N_RIGL,5);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIR,1);
    break;
    case N_BDUL:
        postSynapticNeuron(N_ADEL,3);
        postSynapticNeuron(N_AVHL,1);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_PVNL,2);
        postSynapticNeuron(N_PVNR,2);
        postSynapticNeuron(N_SAADL,1);
        postSynapticNeuron(N_URADL,1);
    break;
    case N_BDUR:
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_ALMR,1);
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVHL,1);
        postSynapticNeuron(N_AVJL,2);
        postSynapticNeuron(N_HSNR,4);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVNL,2);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_SDQL,1);
        postSynapticNeuron(N_URADR,1);
    break;
    case N_CEPDL:
        postSynapticNeuron(N_AVER,5);
        postSynapticNeuron(N_IL1DL,4);
        postSynapticNeuron(N_OLLL,2);
        postSynapticNeuron(N_OLQDL,6);
        postSynapticNeuron(N_OLQDL,1);
        postSynapticNeuron(N_RIBL,2);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RICR,2);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RIPL,2);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RMDVL,3);
        postSynapticNeuron(N_RMGL,4);
        postSynapticNeuron(N_RMHR,4);
        postSynapticNeuron(N_SIADR,1);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_URADL,2);
        postSynapticNeuron(N_URBL,4);
        postSynapticNeuron(N_URYDL,2);
    break;
    case N_CEPDR:
        postSynapticNeuron(N_AVEL,6);
        postSynapticNeuron(N_BDUR,1);
        postSynapticNeuron(N_IL1DR,5);
        postSynapticNeuron(N_IL1R,1);
        postSynapticNeuron(N_OLLR,8);
        postSynapticNeuron(N_OLQDR,5);
        postSynapticNeuron(N_OLQDR,2);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RICL,4);
        postSynapticNeuron(N_RICR,3);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDVR,2);
        postSynapticNeuron(N_RMGR,1);
        postSynapticNeuron(N_RMHL,4);
        postSynapticNeuron(N_RMHR,1);
        postSynapticNeuron(N_SIADL,1);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_URADR,1);
        postSynapticNeuron(N_URBR,2);
        postSynapticNeuron(N_URYDR,1);
    break;
    case N_CEPVL:
        postSynapticNeuron(N_ADLL,1);
        postSynapticNeuron(N_AVER,3);
        postSynapticNeuron(N_IL1VL,2);
        postSynapticNeuron(N_MVL03,1);
        postSynapticNeuron(N_OLLL,4);
        postSynapticNeuron(N_OLQVL,6);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_RICL,7);
        postSynapticNeuron(N_RICR,4);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RMDDL,4);
        postSynapticNeuron(N_RMHL,1);
        postSynapticNeuron(N_SIAVL,1);
        postSynapticNeuron(N_URAVL,2);
    break;
    case N_CEPVR:
        postSynapticNeuron(N_ASGR,1);
        postSynapticNeuron(N_AVEL,5);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_IL2VR,2);
        postSynapticNeuron(N_MVR04,1);
        postSynapticNeuron(N_OLLR,7);
        postSynapticNeuron(N_OLQVR,3);
        postSynapticNeuron(N_OLQVR,1);
        postSynapticNeuron(N_RICL,2);
        postSynapticNeuron(N_RICR,2);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RIPR,1);
        postSynapticNeuron(N_RIVL,1);
        postSynapticNeuron(N_RMDDR,2);
        postSynapticNeuron(N_RMHR,2);
        postSynapticNeuron(N_SIAVR,2);
        postSynapticNeuron(N_URAVR,1);
    break;
    case N_DA1:
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,6);
        postSynapticNeuron(N_DA4,1);
        postSynapticNeuron(N_DD1,4);
        postSynapticNeuron(N_MDL08,8);
        postSynapticNeuron(N_MDR08,8);
        postSynapticNeuron(N_SABVL,2);
        postSynapticNeuron(N_SABVR,3);
        postSynapticNeuron(N_VD1,17);
        postSynapticNeuron(N_VD2,1);
    break;
    case N_DA2:
        postSynapticNeuron(N_AS2,1);
        postSynapticNeuron(N_AS2,1);
        postSynapticNeuron(N_AS3,1);
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_MDL07,2);
        postSynapticNeuron(N_MDL08,1);
        postSynapticNeuron(N_MDL09,2);
        postSynapticNeuron(N_MDL10,2);
        postSynapticNeuron(N_MDR07,2);
        postSynapticNeuron(N_MDR08,2);
        postSynapticNeuron(N_MDR09,2);
        postSynapticNeuron(N_MDR10,2);
        postSynapticNeuron(N_SABVL,1);
        postSynapticNeuron(N_VA1,2);
        postSynapticNeuron(N_VD1,2);
        postSynapticNeuron(N_VD2,11);
        postSynapticNeuron(N_VD3,5);
    break;
    case N_DA3:
        postSynapticNeuron(N_AS4,2);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_DA4,2);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DD2,1);
        postSynapticNeuron(N_MDL09,5);
        postSynapticNeuron(N_MDL10,5);
        postSynapticNeuron(N_MDL12,5);
        postSynapticNeuron(N_MDR09,5);
        postSynapticNeuron(N_MDR10,5);
        postSynapticNeuron(N_MDR12,5);
        postSynapticNeuron(N_VD3,25);
        postSynapticNeuron(N_VD4,6);
    break;
    case N_DA4:
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_DA1,1);
        postSynapticNeuron(N_DA3,1);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DD2,1);
        postSynapticNeuron(N_MDL11,4);
        postSynapticNeuron(N_MDL12,4);
        postSynapticNeuron(N_MDL14,5);
        postSynapticNeuron(N_MDR11,4);
        postSynapticNeuron(N_MDR12,4);
        postSynapticNeuron(N_MDR14,5);
        postSynapticNeuron(N_VB6,1);
        postSynapticNeuron(N_VD4,12);
        postSynapticNeuron(N_VD5,15);
    break;
    case N_DA5:
        postSynapticNeuron(N_AS6,2);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,5);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_MDL13,5);
        postSynapticNeuron(N_MDL14,4);
        postSynapticNeuron(N_MDR13,5);
        postSynapticNeuron(N_MDR14,4);
        postSynapticNeuron(N_VA4,1);
        postSynapticNeuron(N_VA5,2);
        postSynapticNeuron(N_VD5,1);
        postSynapticNeuron(N_VD6,16);
    break;
    case N_DA6:
        postSynapticNeuron(N_AVAL,10);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_MDL11,6);
        postSynapticNeuron(N_MDL12,4);
        postSynapticNeuron(N_MDL13,4);
        postSynapticNeuron(N_MDL14,4);
        postSynapticNeuron(N_MDL16,4);
        postSynapticNeuron(N_MDR11,4);
        postSynapticNeuron(N_MDR12,4);
        postSynapticNeuron(N_MDR13,4);
        postSynapticNeuron(N_MDR14,4);
        postSynapticNeuron(N_MDR16,4);
        postSynapticNeuron(N_VD4,4);
        postSynapticNeuron(N_VD5,3);
        postSynapticNeuron(N_VD6,3);
    break;
    case N_DA7:
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_MDL15,4);
        postSynapticNeuron(N_MDL17,4);
        postSynapticNeuron(N_MDL18,4);
        postSynapticNeuron(N_MDR15,4);
        postSynapticNeuron(N_MDR17,4);
        postSynapticNeuron(N_MDR18,4);
    break;
    case N_DA8:
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_DA9,1);
        postSynapticNeuron(N_MDL17,4);
        postSynapticNeuron(N_MDL19,4);
        postSynapticNeuron(N_MDL20,4);
        postSynapticNeuron(N_MDR17,4);
        postSynapticNeuron(N_MDR19,4);
        postSynapticNeuron(N_MDR20,4);
    break;
    case N_DA9:
        postSynapticNeuron(N_DA8,1);
        postSynapticNeuron(N_DD6,1);
        postSynapticNeuron(N_MDL19,4);
        postSynapticNeuron(N_MDL21,4);
        postSynapticNeuron(N_MDL22,4);
        postSynapticNeuron(N_MDL23,4);
        postSynapticNeuron(N_MDL24,4);
        postSynapticNeuron(N_MDR19,4);
        postSynapticNeuron(N_MDR21,4);
        postSynapticNeuron(N_MDR22,4);
        postSynapticNeuron(N_MDR23,4);
        postSynapticNeuron(N_MDR24,4);
        postSynapticNeuron(N_PDA,1);
        postSynapticNeuron(N_PHCL,1);
        postSynapticNeuron(N_RID,1);
        postSynapticNeuron(N_VD13,1);
    break;
    case N_DB1:
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AS1,1);
        postSynapticNeuron(N_AS2,1);
        postSynapticNeuron(N_AS3,1);
        postSynapticNeuron(N_AVBR,3);
        postSynapticNeuron(N_DB2,1);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DD1,10);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_MDL07,1);
        postSynapticNeuron(N_MDL08,1);
        postSynapticNeuron(N_MDR07,1);
        postSynapticNeuron(N_MDR08,1);
        postSynapticNeuron(N_RID,1);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_VB3,1);
        postSynapticNeuron(N_VB4,1);
        postSynapticNeuron(N_VD1,21);
        postSynapticNeuron(N_VD2,15);
        postSynapticNeuron(N_VD3,1);
    break;
    case N_DB2:
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DA3,5);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DB3,6);
        postSynapticNeuron(N_DD2,3);
        postSynapticNeuron(N_MDL09,3);
        postSynapticNeuron(N_MDL10,3);
        postSynapticNeuron(N_MDL11,3);
        postSynapticNeuron(N_MDL12,3);
        postSynapticNeuron(N_MDR09,3);
        postSynapticNeuron(N_MDR10,3);
        postSynapticNeuron(N_MDR11,3);
        postSynapticNeuron(N_MDR12,3);
        postSynapticNeuron(N_VB1,2);
        postSynapticNeuron(N_VD3,23);
        postSynapticNeuron(N_VD4,14);
        postSynapticNeuron(N_VD5,1);
    break;
    case N_DB3:
        postSynapticNeuron(N_AS4,1);
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DA4,1);
        postSynapticNeuron(N_DB2,6);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DD2,4);
        postSynapticNeuron(N_DD3,10);
        postSynapticNeuron(N_MDL11,3);
        postSynapticNeuron(N_MDL12,3);
        postSynapticNeuron(N_MDL13,4);
        postSynapticNeuron(N_MDL14,3);
        postSynapticNeuron(N_MDR11,3);
        postSynapticNeuron(N_MDR12,3);
        postSynapticNeuron(N_MDR13,4);
        postSynapticNeuron(N_MDR14,3);
        postSynapticNeuron(N_VD4,9);
        postSynapticNeuron(N_VD5,26);
        postSynapticNeuron(N_VD6,7);
    break;
    case N_DB4:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DD3,3);
        postSynapticNeuron(N_MDL13,2);
        postSynapticNeuron(N_MDL14,2);
        postSynapticNeuron(N_MDL16,2);
        postSynapticNeuron(N_MDR13,2);
        postSynapticNeuron(N_MDR14,2);
        postSynapticNeuron(N_MDR16,2);
        postSynapticNeuron(N_VB2,1);
        postSynapticNeuron(N_VB4,1);
        postSynapticNeuron(N_VD6,13);
    break;
    case N_DB5:
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_MDL15,2);
        postSynapticNeuron(N_MDL17,2);
        postSynapticNeuron(N_MDL18,2);
        postSynapticNeuron(N_MDR15,2);
        postSynapticNeuron(N_MDR17,2);
        postSynapticNeuron(N_MDR18,2);
    break;
    case N_DB6:
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_MDL17,2);
        postSynapticNeuron(N_MDL19,2);
        postSynapticNeuron(N_MDL20,2);
        postSynapticNeuron(N_MDR17,2);
        postSynapticNeuron(N_MDR19,2);
        postSynapticNeuron(N_MDR20,2);
    break;
    case N_DB7:
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_MDL19,2);
        postSynapticNeuron(N_MDL21,2);
        postSynapticNeuron(N_MDL22,2);
        postSynapticNeuron(N_MDL23,2);
        postSynapticNeuron(N_MDL24,2);
        postSynapticNeuron(N_MDR19,2);
        postSynapticNeuron(N_MDR21,2);
        postSynapticNeuron(N_MDR22,2);
        postSynapticNeuron(N_MDR23,2);
        postSynapticNeuron(N_MDR24,2);
        postSynapticNeuron(N_VD13,2);
    break;
    case N_DD1:
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DD2,3);
        postSynapticNeuron(N_MDL07,-6);
        postSynapticNeuron(N_MDL08,-6);
        postSynapticNeuron(N_MDL09,-7);
        postSynapticNeuron(N_MDL10,-6);
        postSynapticNeuron(N_MDR07,-6);
        postSynapticNeuron(N_MDR08,-6);
        postSynapticNeuron(N_MDR09,-7);
        postSynapticNeuron(N_MDR10,-6);
        postSynapticNeuron(N_VD1,4);
        postSynapticNeuron(N_VD2,1);
        postSynapticNeuron(N_VD2,2);
    break;
    case N_DD2:
        postSynapticNeuron(N_DA3,1);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_DD3,2);
        postSynapticNeuron(N_MDL09,-6);
        postSynapticNeuron(N_MDL11,-7);
        postSynapticNeuron(N_MDL12,-6);
        postSynapticNeuron(N_MDR09,-6);
        postSynapticNeuron(N_MDR11,-7);
        postSynapticNeuron(N_MDR12,-6);
        postSynapticNeuron(N_VD3,1);
        postSynapticNeuron(N_VD4,3);
    break;
    case N_DD3:
        postSynapticNeuron(N_DD2,2);
        postSynapticNeuron(N_DD4,1);
        postSynapticNeuron(N_MDL11,-7);
        postSynapticNeuron(N_MDL13,-9);
        postSynapticNeuron(N_MDL14,-7);
        postSynapticNeuron(N_MDR11,-7);
        postSynapticNeuron(N_MDR13,-9);
        postSynapticNeuron(N_MDR14,-7);
    break;
    case N_DD4:
        postSynapticNeuron(N_DD3,1);
        postSynapticNeuron(N_MDL13,-7);
        postSynapticNeuron(N_MDL15,-7);
        postSynapticNeuron(N_MDL16,-7);
        postSynapticNeuron(N_MDR13,-7);
        postSynapticNeuron(N_MDR15,-7);
        postSynapticNeuron(N_MDR16,-7);
        postSynapticNeuron(N_VC3,1);
        postSynapticNeuron(N_VD8,1);
    break;
    case N_DD5:
        postSynapticNeuron(N_MDL17,-7);
        postSynapticNeuron(N_MDL18,-7);
        postSynapticNeuron(N_MDL20,-7);
        postSynapticNeuron(N_MDR17,-7);
        postSynapticNeuron(N_MDR18,-7);
        postSynapticNeuron(N_MDR20,-7);
        postSynapticNeuron(N_VB8,1);
        postSynapticNeuron(N_VD10,1);
        postSynapticNeuron(N_VD9,1);
    break;
    case N_DD6:
        postSynapticNeuron(N_MDL19,-7);
        postSynapticNeuron(N_MDL21,-7);
        postSynapticNeuron(N_MDL22,-7);
        postSynapticNeuron(N_MDL23,-7);
        postSynapticNeuron(N_MDL24,-7);
        postSynapticNeuron(N_MDR19,-7);
        postSynapticNeuron(N_MDR21,-7);
        postSynapticNeuron(N_MDR22,-7);
        postSynapticNeuron(N_MDR23,-7);
        postSynapticNeuron(N_MDR24,-7);
    break;
    case N_DVA:
        postSynapticNeuron(N_AIZL,3);
        postSynapticNeuron(N_AQR,4);
        postSynapticNeuron(N_AUAL,1);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVEL,9);
        postSynapticNeuron(N_AVER,5);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DB2,1);
        postSynapticNeuron(N_DB3,2);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DB5,1);
        postSynapticNeuron(N_DB6,2);
        postSynapticNeuron(N_DB7,1);
        postSynapticNeuron(N_PDEL,3);
        postSynapticNeuron(N_PVCL,3);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVR,3);
        postSynapticNeuron(N_PVR,2);
        postSynapticNeuron(N_RIAL,1);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIMR,1);
        postSynapticNeuron(N_RIR,3);
        postSynapticNeuron(N_SAADR,1);
        postSynapticNeuron(N_SAAVL,1);
        postSynapticNeuron(N_SAAVR,1);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_SMBDL,3);
        postSynapticNeuron(N_SMBDR,2);
        postSynapticNeuron(N_SMBVL,3);
        postSynapticNeuron(N_SMBVR,2);
        postSynapticNeuron(N_VA12,1);
        postSynapticNeuron(N_VA2,1);
        postSynapticNeuron(N_VB1,1);
        postSynapticNeuron(N_VB11,2);
    break;
    case N_DVB:
        postSynapticNeuron(N_AS9,7);
        postSynapticNeuron(N_AVL,5);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_DA8,2);
        postSynapticNeuron(N_DD6,3);
        postSynapticNeuron(N_DVC,3);
        //postSynapticNeuron(N_MANAL,-5);
        postSynapticNeuron(N_PDA,1);
        postSynapticNeuron(N_PHCL,1);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_VA9,1);
        postSynapticNeuron(N_VB9,1);
    break;
    case N_DVC:
        postSynapticNeuron(N_AIBL,2);
        postSynapticNeuron(N_AIBR,5);
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVKL,2);
        postSynapticNeuron(N_AVKR,1);
        postSynapticNeuron(N_AVL,9);
        postSynapticNeuron(N_PVPL,2);
        postSynapticNeuron(N_PVPR,13);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIGL,5);
        postSynapticNeuron(N_RIGR,5);
        postSynapticNeuron(N_RMFL,2);
        postSynapticNeuron(N_RMFR,4);
        postSynapticNeuron(N_VA9,1);
        postSynapticNeuron(N_VD1,5);
        postSynapticNeuron(N_VD10,4);
    break;
    case N_FLPL:
        postSynapticNeuron(N_ADEL,2);
        postSynapticNeuron(N_ADER,2);
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIBR,2);
        postSynapticNeuron(N_AVAL,15);
        postSynapticNeuron(N_AVAR,17);
        postSynapticNeuron(N_AVBL,4);
        postSynapticNeuron(N_AVBR,5);
        postSynapticNeuron(N_AVDL,7);
        postSynapticNeuron(N_AVDR,13);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_FLPR,3);
        postSynapticNeuron(N_RIH,1);
    break;
    case N_FLPR:
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AVAL,12);
        postSynapticNeuron(N_AVAR,5);
        postSynapticNeuron(N_AVBL,5);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVDL,10);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVEL,4);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_FLPL,4);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_VB1,1);
    break;
    case N_HSNL:
        postSynapticNeuron(N_AIAL,1);
        postSynapticNeuron(N_AIZL,2);
        postSynapticNeuron(N_AIZR,1);
        postSynapticNeuron(N_ASHL,1);
        postSynapticNeuron(N_ASHR,2);
        postSynapticNeuron(N_ASJR,1);
        postSynapticNeuron(N_ASKL,1);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVFL,6);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AWBL,1);
        postSynapticNeuron(N_AWBR,2);
        postSynapticNeuron(N_HSNR,3);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_MVULVA,7);
        postSynapticNeuron(N_RIFL,3);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_SABVL,2);
        postSynapticNeuron(N_VC5,3);
    break;
    case N_HSNR:
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AIZL,1);
        postSynapticNeuron(N_AIZR,1);
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_ASHL,2);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_AWBL,1);
        postSynapticNeuron(N_BDUR,1);
        postSynapticNeuron(N_DA5,1);
        postSynapticNeuron(N_DA6,1);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_MVULVA,6);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_PVQR,1);
        postSynapticNeuron(N_RIFR,4);
        postSynapticNeuron(N_RMGR,1);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_SABVR,1);
        postSynapticNeuron(N_VA6,1);
        postSynapticNeuron(N_VC2,3);
        postSynapticNeuron(N_VC3,1);
        postSynapticNeuron(N_VD4,2);
    break;
    case N_I1L:
        postSynapticNeuron(N_I1R,1);
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_I5,1);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RIPR,1);
    break;
    case N_I1R:
        postSynapticNeuron(N_I1L,1);
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_I5,1);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RIPR,1);
    break;
    case N_I2L:
        postSynapticNeuron(N_I1L,1);
        postSynapticNeuron(N_I1R,1);
        postSynapticNeuron(N_M1,4);
    break;
    case N_I2R:
        postSynapticNeuron(N_I1L,1);
        postSynapticNeuron(N_I1R,1);
        postSynapticNeuron(N_M1,4);
    break;
    case N_I3:
        postSynapticNeuron(N_M1,4);
        postSynapticNeuron(N_M2L,2);
        postSynapticNeuron(N_M2R,2);
    break;
    case N_I4:
        postSynapticNeuron(N_I2L,5);
        postSynapticNeuron(N_I2R,5);
        postSynapticNeuron(N_I5,2);
        postSynapticNeuron(N_M1,4);
    break;
    case N_I5:
        postSynapticNeuron(N_I1L,4);
        postSynapticNeuron(N_I1R,3);
        postSynapticNeuron(N_M1,2);
        postSynapticNeuron(N_M5,2);
        postSynapticNeuron(N_MI,4);
    break;
    case N_I6:
        postSynapticNeuron(N_I2L,2);
        postSynapticNeuron(N_I2R,2);
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_M4,1);
        postSynapticNeuron(N_M5,2);
        postSynapticNeuron(N_NSML,2);
        postSynapticNeuron(N_NSMR,2);
    break;
    case N_IL1DL:
        postSynapticNeuron(N_IL1DR,1);
        postSynapticNeuron(N_IL1L,1);
        postSynapticNeuron(N_MDL01,1);
        postSynapticNeuron(N_MDL02,1);
        postSynapticNeuron(N_MDL04,2);
        postSynapticNeuron(N_OLLL,1);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RIPL,2);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_RMDVL,4);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_URYDL,1);
    break;
    case N_IL1DR:
        postSynapticNeuron(N_IL1DL,1);
        postSynapticNeuron(N_IL1R,1);
        postSynapticNeuron(N_MDR01,4);
        postSynapticNeuron(N_MDR02,3);
        postSynapticNeuron(N_OLLR,1);
        postSynapticNeuron(N_RIPR,5);
        postSynapticNeuron(N_RMDVR,5);
        postSynapticNeuron(N_RMEV,1);
    break;
    case N_IL1L:
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_IL1DL,2);
        postSynapticNeuron(N_IL1VL,1);
        postSynapticNeuron(N_MDL01,3);
        postSynapticNeuron(N_MDL03,3);
        postSynapticNeuron(N_MDL05,4);
        postSynapticNeuron(N_MVL01,3);
        postSynapticNeuron(N_MVL03,3);
        postSynapticNeuron(N_RMDDL,5);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDR,3);
        postSynapticNeuron(N_RMDVL,4);
        postSynapticNeuron(N_RMDVR,2);
        postSynapticNeuron(N_RMER,1);
    break;
    case N_IL1R:
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_IL1DR,2);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_MDR01,3);
        postSynapticNeuron(N_MDR03,3);
        postSynapticNeuron(N_MVR01,3);
        postSynapticNeuron(N_MVR03,3);
        postSynapticNeuron(N_RMDDL,3);
        postSynapticNeuron(N_RMDDR,2);
        postSynapticNeuron(N_RMDL,4);
        postSynapticNeuron(N_RMDR,2);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_RMDVR,4);
        postSynapticNeuron(N_RMEL,2);
        postSynapticNeuron(N_RMHL,1);
        postSynapticNeuron(N_URXR,2);
    break;
    case N_IL1VL:
        postSynapticNeuron(N_IL1L,2);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_MVL01,5);
        postSynapticNeuron(N_MVL02,4);
        postSynapticNeuron(N_RIPL,4);
        postSynapticNeuron(N_RMDDL,5);
        postSynapticNeuron(N_RMED,1);
        postSynapticNeuron(N_URYVL,1);
    break;
    case N_IL1VR:
        postSynapticNeuron(N_IL1R,2);
        postSynapticNeuron(N_IL1VL,1);
        postSynapticNeuron(N_IL2R,1);
        postSynapticNeuron(N_IL2VR,1);
        postSynapticNeuron(N_MVR01,5);
        postSynapticNeuron(N_MVR02,5);
        postSynapticNeuron(N_RIPR,6);
        postSynapticNeuron(N_RMDDR,10);
        postSynapticNeuron(N_RMER,1);
    break;
    case N_IL2DL:
        postSynapticNeuron(N_AUAL,1);
        postSynapticNeuron(N_IL1DL,7);
        postSynapticNeuron(N_OLQDL,2);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIPL,10);
        postSynapticNeuron(N_RMEL,4);
        postSynapticNeuron(N_RMER,3);
        postSynapticNeuron(N_URADL,3);
    break;
    case N_IL2DR:
        postSynapticNeuron(N_CEPDR,1);
        postSynapticNeuron(N_IL1DR,7);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIPR,11);
        postSynapticNeuron(N_RMED,1);
        postSynapticNeuron(N_RMEL,2);
        postSynapticNeuron(N_RMER,2);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_URADR,3);
    break;
    case N_IL2L:
        postSynapticNeuron(N_ADEL,2);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_IL1L,1);
        postSynapticNeuron(N_OLQDL,5);
        postSynapticNeuron(N_OLQVL,8);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RIH,7);
        postSynapticNeuron(N_RMDL,3);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMER,2);
        postSynapticNeuron(N_RMEV,2);
        postSynapticNeuron(N_RMGL,1);
        postSynapticNeuron(N_URXL,2);
    break;
    case N_IL2R:
        postSynapticNeuron(N_ADER,1);
        postSynapticNeuron(N_IL1R,1);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_OLLR,1);
        postSynapticNeuron(N_OLQDR,2);
        postSynapticNeuron(N_OLQVR,7);
        postSynapticNeuron(N_RIH,6);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMEL,2);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_RMGR,1);
        postSynapticNeuron(N_URBR,1);
        postSynapticNeuron(N_URXR,1);
    break;
    case N_IL2VL:
        postSynapticNeuron(N_BAGR,1);
        postSynapticNeuron(N_IL1VL,7);
        postSynapticNeuron(N_IL2L,1);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_RIAL,1);
        postSynapticNeuron(N_RIH,2);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RMEL,1);
        postSynapticNeuron(N_RMER,4);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_URAVL,3);
    break;
    case N_IL2VR:
        postSynapticNeuron(N_IL1VR,6);
        postSynapticNeuron(N_OLQVR,1);
        postSynapticNeuron(N_RIAR,2);
        postSynapticNeuron(N_RIH,3);
        postSynapticNeuron(N_RIPR,15);
        postSynapticNeuron(N_RMEL,3);
        postSynapticNeuron(N_RMER,2);
        postSynapticNeuron(N_RMEV,3);
        postSynapticNeuron(N_URAVR,4);
        postSynapticNeuron(N_URXR,1);
    break;
    case N_LUAL:
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_AVAR,6);
        postSynapticNeuron(N_AVDL,4);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_PHBL,1);
        postSynapticNeuron(N_PLML,1);
        postSynapticNeuron(N_PVNL,1);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_PVWL,1);
    break;
    case N_LUAR:
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,3);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_PLMR,1);
        postSynapticNeuron(N_PQR,1);
        postSynapticNeuron(N_PVCR,3);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_PVWL,1);
    break;
    case N_M1:
        postSynapticNeuron(N_I2L,2);
        postSynapticNeuron(N_I2R,2);
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_I4,1);
    break;
    case N_M2L:
        postSynapticNeuron(N_I1L,3);
        postSynapticNeuron(N_I1R,3);
        postSynapticNeuron(N_I3,3);
        postSynapticNeuron(N_M2R,1);
        postSynapticNeuron(N_M5,1);
        postSynapticNeuron(N_MI,4);
    break;
    case N_M2R:
        postSynapticNeuron(N_I1L,3);
        postSynapticNeuron(N_I1R,3);
        postSynapticNeuron(N_I3,3);
        postSynapticNeuron(N_M3L,1);
        postSynapticNeuron(N_M3R,1);
        postSynapticNeuron(N_M5,1);
        postSynapticNeuron(N_MI,4);
    break;
    case N_M3L:
        postSynapticNeuron(N_I1L,4);
        postSynapticNeuron(N_I1R,4);
        postSynapticNeuron(N_I4,2);
        postSynapticNeuron(N_I5,3);
        postSynapticNeuron(N_I6,1);
        postSynapticNeuron(N_M1,2);
        postSynapticNeuron(N_M3R,1);
        postSynapticNeuron(N_MCL,1);
        postSynapticNeuron(N_MCR,1);
        postSynapticNeuron(N_MI,2);
        postSynapticNeuron(N_NSML,2);
        postSynapticNeuron(N_NSMR,3);
    break;
    case N_M3R:
        postSynapticNeuron(N_I1L,4);
        postSynapticNeuron(N_I1R,4);
        postSynapticNeuron(N_I3,2);
        postSynapticNeuron(N_I4,6);
        postSynapticNeuron(N_I5,3);
        postSynapticNeuron(N_I6,1);
        postSynapticNeuron(N_M1,2);
        postSynapticNeuron(N_M3L,1);
        postSynapticNeuron(N_MCL,1);
        postSynapticNeuron(N_MCR,1);
        postSynapticNeuron(N_MI,2);
        postSynapticNeuron(N_NSML,2);
        postSynapticNeuron(N_NSMR,3);
    break;
    case N_M4:
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_I5,13);
        postSynapticNeuron(N_I6,3);
        postSynapticNeuron(N_M2L,1);
        postSynapticNeuron(N_M2R,1);
        postSynapticNeuron(N_M4,6);
        postSynapticNeuron(N_M5,1);
        postSynapticNeuron(N_NSML,1);
        postSynapticNeuron(N_NSMR,1);
    break;
    case N_M5:
        postSynapticNeuron(N_I5,3);
        postSynapticNeuron(N_I5,1);
        postSynapticNeuron(N_I6,1);
        postSynapticNeuron(N_M1,2);
        postSynapticNeuron(N_M2L,2);
        postSynapticNeuron(N_M2R,2);
        postSynapticNeuron(N_M5,4);
    break;
    case N_MCL:
        postSynapticNeuron(N_I1L,3);
        postSynapticNeuron(N_I1R,3);
        postSynapticNeuron(N_I2L,1);
        postSynapticNeuron(N_I2R,1);
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_M1,2);
        postSynapticNeuron(N_M2L,2);
        postSynapticNeuron(N_M2R,2);
    break;
    case N_MCR:
        postSynapticNeuron(N_I1L,3);
        postSynapticNeuron(N_I1R,3);
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_M1,2);
        postSynapticNeuron(N_M2L,2);
        postSynapticNeuron(N_M2R,2);
    break;
    case N_MI:
        postSynapticNeuron(N_I1L,1);
        postSynapticNeuron(N_I1R,1);
        postSynapticNeuron(N_I3,1);
        postSynapticNeuron(N_I4,1);
        postSynapticNeuron(N_I5,2);
        postSynapticNeuron(N_M1,1);
        postSynapticNeuron(N_M2L,2);
        postSynapticNeuron(N_M2R,2);
        postSynapticNeuron(N_M3L,1);
        postSynapticNeuron(N_M3R,1);
        postSynapticNeuron(N_MCL,2);
        postSynapticNeuron(N_MCR,2);
    break;
    case N_NSML:
        postSynapticNeuron(N_I1L,1);
        postSynapticNeuron(N_I1R,2);
        postSynapticNeuron(N_I2L,6);
        postSynapticNeuron(N_I2R,6);
        postSynapticNeuron(N_I3,2);
        postSynapticNeuron(N_I4,3);
        postSynapticNeuron(N_I5,2);
        postSynapticNeuron(N_I6,2);
        postSynapticNeuron(N_M3L,2);
        postSynapticNeuron(N_M3R,2);
    break;
    case N_NSMR:
        postSynapticNeuron(N_I1L,2);
        postSynapticNeuron(N_I1R,2);
        postSynapticNeuron(N_I2L,6);
        postSynapticNeuron(N_I2R,6);
        postSynapticNeuron(N_I3,2);
        postSynapticNeuron(N_I4,3);
        postSynapticNeuron(N_I5,2);
        postSynapticNeuron(N_I6,2);
        postSynapticNeuron(N_M3L,2);
        postSynapticNeuron(N_M3R,2);
    break;
    case N_OLLL:
        postSynapticNeuron(N_AVER,21);
        postSynapticNeuron(N_CEPDL,3);
        postSynapticNeuron(N_CEPVL,4);
        postSynapticNeuron(N_IL1DL,1);
        postSynapticNeuron(N_IL1VL,2);
        postSynapticNeuron(N_OLLR,2);
        postSynapticNeuron(N_RIBL,8);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RMDDL,7);
        postSynapticNeuron(N_RMDL,2);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_RMEL,2);
        postSynapticNeuron(N_SMDDL,3);
        postSynapticNeuron(N_SMDDR,4);
        postSynapticNeuron(N_SMDVR,4);
        postSynapticNeuron(N_URYDL,1);
    break;
    case N_OLLR:
        postSynapticNeuron(N_AVEL,16);
        postSynapticNeuron(N_CEPDR,1);
        postSynapticNeuron(N_CEPVR,6);
        postSynapticNeuron(N_IL1DR,3);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_IL2R,1);
        postSynapticNeuron(N_OLLL,2);
        postSynapticNeuron(N_RIBR,10);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RMDDR,10);
        postSynapticNeuron(N_RMDL,3);
        postSynapticNeuron(N_RMDVR,3);
        postSynapticNeuron(N_RMER,2);
        postSynapticNeuron(N_SMDDR,1);
        postSynapticNeuron(N_SMDVL,4);
        postSynapticNeuron(N_SMDVR,3);
    break;
    case N_OLQDL:
        postSynapticNeuron(N_CEPDL,1);
        postSynapticNeuron(N_RIBL,2);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RMDDR,4);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_SIBVL,3);
        postSynapticNeuron(N_URBL,1);
    break;
    case N_OLQDR:
        postSynapticNeuron(N_CEPDR,2);
        postSynapticNeuron(N_RIBR,2);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RMDDL,3);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_RMHR,1);
        postSynapticNeuron(N_SIBVR,2);
        postSynapticNeuron(N_URBR,1);
    break;
    case N_OLQVL:
        postSynapticNeuron(N_ADLL,1);
        postSynapticNeuron(N_CEPVL,1);
        postSynapticNeuron(N_IL1VL,1);
        postSynapticNeuron(N_IL2VL,1);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDVR,4);
        postSynapticNeuron(N_SIBDL,3);
        postSynapticNeuron(N_URBL,1);
    break;
    case N_OLQVR:
        postSynapticNeuron(N_CEPVR,1);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RIH,2);
        postSynapticNeuron(N_RIPR,2);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_RMDVL,4);
        postSynapticNeuron(N_RMER,1);
        postSynapticNeuron(N_SIBDR,4);
        postSynapticNeuron(N_URBR,1);
    break;
    case N_PDA:
        postSynapticNeuron(N_AS11,1);
        postSynapticNeuron(N_DA9,1);
        postSynapticNeuron(N_DD6,1);
        postSynapticNeuron(N_MDL21,2);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_VD13,3);
    break;
    case N_PDB:
        postSynapticNeuron(N_AS11,2);
        postSynapticNeuron(N_MVL22,1);
        postSynapticNeuron(N_MVR21,1);
        postSynapticNeuron(N_RID,2);
        postSynapticNeuron(N_VD13,2);
    break;
    case N_PDEL:
        postSynapticNeuron(N_AVKL,6);
        postSynapticNeuron(N_DVA,24);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_PDER,3);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVM,2);
        postSynapticNeuron(N_PVM,1);
        postSynapticNeuron(N_PVR,2);
        postSynapticNeuron(N_VA9,1);
        postSynapticNeuron(N_VD11,1);
    break;
    case N_PDER:
        postSynapticNeuron(N_AVKL,16);
        postSynapticNeuron(N_DVA,35);
        postSynapticNeuron(N_PDEL,3);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVM,1);
        postSynapticNeuron(N_VA8,1);
        postSynapticNeuron(N_VD9,1);
    break;
    case N_PHAL:
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVFL,3);
        postSynapticNeuron(N_AVG,5);
        postSynapticNeuron(N_AVHL,1);
        postSynapticNeuron(N_AVHR,1);
        postSynapticNeuron(N_DVA,2);
        postSynapticNeuron(N_PHAR,5);
        postSynapticNeuron(N_PHAR,2);
        postSynapticNeuron(N_PHBL,5);
        postSynapticNeuron(N_PHBR,5);
        postSynapticNeuron(N_PVQL,2);
    break;
    case N_PHAR:
        postSynapticNeuron(N_AVG,3);
        postSynapticNeuron(N_AVHR,1);
        postSynapticNeuron(N_DA8,1);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_PHAL,6);
        postSynapticNeuron(N_PHAL,2);
        postSynapticNeuron(N_PHBL,1);
        postSynapticNeuron(N_PHBR,5);
        postSynapticNeuron(N_PVPL,3);
        postSynapticNeuron(N_PVQL,2);
    break;
    case N_PHBL:
        postSynapticNeuron(N_AVAL,9);
        postSynapticNeuron(N_AVAR,6);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_PHBR,1);
        postSynapticNeuron(N_PHBR,3);
        postSynapticNeuron(N_PVCL,13);
        postSynapticNeuron(N_VA12,1);
    break;
    case N_PHBR:
        postSynapticNeuron(N_AVAL,7);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVHL,1);
        postSynapticNeuron(N_DA8,1);
        postSynapticNeuron(N_PHBL,1);
        postSynapticNeuron(N_PHBL,3);
        postSynapticNeuron(N_PVCL,6);
        postSynapticNeuron(N_PVCR,3);
        postSynapticNeuron(N_VA12,2);
    break;
    case N_PHCL:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_DA9,7);
        postSynapticNeuron(N_DA9,1);
        postSynapticNeuron(N_DVA,6);
        postSynapticNeuron(N_LUAL,1);
        postSynapticNeuron(N_PHCR,1);
        postSynapticNeuron(N_PLML,1);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_VA12,3);
    break;
    case N_PHCR:
        postSynapticNeuron(N_AVHR,1);
        postSynapticNeuron(N_DA9,2);
        postSynapticNeuron(N_DVA,8);
        postSynapticNeuron(N_LUAR,1);
        postSynapticNeuron(N_PHCL,2);
        postSynapticNeuron(N_PVCR,9);
        postSynapticNeuron(N_VA12,2);
    break;
    case N_PLML:
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_LUAL,1);
        postSynapticNeuron(N_PHCL,1);
        postSynapticNeuron(N_PVCL,1);
    break;
    case N_PLMR:
        postSynapticNeuron(N_AS6,1);
        postSynapticNeuron(N_AVAL,4);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVDR,4);
        postSynapticNeuron(N_DVA,5);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_LUAR,1);
        postSynapticNeuron(N_PDEL,2);
        postSynapticNeuron(N_PDER,3);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVR,2);
    break;
    case N_PLNL:
        postSynapticNeuron(N_SAADL,5);
        postSynapticNeuron(N_SMBVL,6);
    break;
    case N_PLNR:
        postSynapticNeuron(N_SAADR,4);
        postSynapticNeuron(N_SMBVR,6);
    break;
    case N_PQR:
        postSynapticNeuron(N_AVAL,8);
        postSynapticNeuron(N_AVAR,11);
        postSynapticNeuron(N_AVDL,7);
        postSynapticNeuron(N_AVDR,6);
        postSynapticNeuron(N_AVG,1);
        postSynapticNeuron(N_LUAR,1);
        postSynapticNeuron(N_PVNL,1);
        postSynapticNeuron(N_PVPL,4);
    break;
    case N_PVCL:
        postSynapticNeuron(N_AS1,1);
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVAR,4);
        postSynapticNeuron(N_AVBL,5);
        postSynapticNeuron(N_AVBR,12);
        postSynapticNeuron(N_AVDL,5);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVEL,3);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVJL,4);
        postSynapticNeuron(N_AVJR,2);
        postSynapticNeuron(N_DA2,1);
        postSynapticNeuron(N_DA5,1);
        postSynapticNeuron(N_DA6,1);
        postSynapticNeuron(N_DB2,3);
        postSynapticNeuron(N_DB3,4);
        postSynapticNeuron(N_DB4,3);
        postSynapticNeuron(N_DB5,2);
        postSynapticNeuron(N_DB6,2);
        postSynapticNeuron(N_DB7,3);
        postSynapticNeuron(N_DVA,5);
        postSynapticNeuron(N_PLML,1);
        postSynapticNeuron(N_PVCR,7);
        postSynapticNeuron(N_RID,5);
        postSynapticNeuron(N_RIS,2);
        postSynapticNeuron(N_SIBVL,2);
        postSynapticNeuron(N_VB10,3);
        postSynapticNeuron(N_VB11,1);
        postSynapticNeuron(N_VB3,1);
        postSynapticNeuron(N_VB4,1);
        postSynapticNeuron(N_VB5,1);
        postSynapticNeuron(N_VB6,2);
        postSynapticNeuron(N_VB8,1);
        postSynapticNeuron(N_VB9,2);
    break;
    case N_PVCR:
        postSynapticNeuron(N_AQR,1);
        postSynapticNeuron(N_AS2,1);
        postSynapticNeuron(N_AVAL,12);
        postSynapticNeuron(N_AVAR,10);
        postSynapticNeuron(N_AVBL,8);
        postSynapticNeuron(N_AVBR,6);
        postSynapticNeuron(N_AVDL,5);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVJL,3);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_DA9,1);
        postSynapticNeuron(N_DB2,1);
        postSynapticNeuron(N_DB3,3);
        postSynapticNeuron(N_DB4,4);
        postSynapticNeuron(N_DB5,1);
        postSynapticNeuron(N_DB6,2);
        postSynapticNeuron(N_DB7,1);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_LUAR,1);
        postSynapticNeuron(N_PDEL,2);
        postSynapticNeuron(N_PHCR,1);
        postSynapticNeuron(N_PLMR,1);
        postSynapticNeuron(N_PVCL,8);
        postSynapticNeuron(N_PVDL,1);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_PVWL,2);
        postSynapticNeuron(N_PVWR,2);
        postSynapticNeuron(N_RID,5);
        postSynapticNeuron(N_SIBVR,2);
        postSynapticNeuron(N_VA8,2);
        postSynapticNeuron(N_VA9,1);
        postSynapticNeuron(N_VB10,1);
        postSynapticNeuron(N_VB4,3);
        postSynapticNeuron(N_VB6,2);
        postSynapticNeuron(N_VB7,3);
        postSynapticNeuron(N_VB8,1);
    break;
    case N_PVDL:
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_AVAR,6);
        postSynapticNeuron(N_DD5,1);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVCR,6);
        postSynapticNeuron(N_VD10,6);
    break;
    case N_PVDR:
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_AVAR,9);
        postSynapticNeuron(N_DVA,3);
        postSynapticNeuron(N_PVCL,13);
        postSynapticNeuron(N_PVCR,10);
        postSynapticNeuron(N_PVDL,1);
        postSynapticNeuron(N_VA9,1);
    break;
    case N_PVM:
        postSynapticNeuron(N_AVKL,11);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_AVM,1);
        postSynapticNeuron(N_DVA,3);
        postSynapticNeuron(N_PDEL,7);
        postSynapticNeuron(N_PDEL,1);
        postSynapticNeuron(N_PDER,8);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_PVR,1);
    break;
    case N_PVNL:
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVBR,3);
        postSynapticNeuron(N_AVDL,3);
        postSynapticNeuron(N_AVDR,3);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_AVG,1);
        postSynapticNeuron(N_AVJL,5);
        postSynapticNeuron(N_AVJR,5);
        postSynapticNeuron(N_AVL,2);
        postSynapticNeuron(N_BDUL,1);
        postSynapticNeuron(N_BDUR,2);
        postSynapticNeuron(N_DD1,2);
        postSynapticNeuron(N_MVL09,3);
        postSynapticNeuron(N_PQR,1);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVNR,5);
        postSynapticNeuron(N_PVQR,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_PVWL,1);
        postSynapticNeuron(N_RIFL,1);
    break;
    case N_PVNR:
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVEL,3);
        postSynapticNeuron(N_AVJL,4);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_AVL,2);
        postSynapticNeuron(N_BDUL,1);
        postSynapticNeuron(N_BDUR,2);
        postSynapticNeuron(N_DD3,1);
        postSynapticNeuron(N_HSNR,2);
        postSynapticNeuron(N_MVL12,1);
        postSynapticNeuron(N_MVL13,2);
        postSynapticNeuron(N_PQR,2);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVNL,1);
        postSynapticNeuron(N_PVT,2);
        postSynapticNeuron(N_PVWL,2);
        postSynapticNeuron(N_VC2,1);
        postSynapticNeuron(N_VC3,1);
        postSynapticNeuron(N_VD12,1);
        postSynapticNeuron(N_VD6,1);
        postSynapticNeuron(N_VD7,1);
    break;
    case N_PVPL:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_AQR,8);
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBL,5);
        postSynapticNeuron(N_AVBR,6);
        postSynapticNeuron(N_AVDR,2);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVHR,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,6);
        postSynapticNeuron(N_DVC,2);
        postSynapticNeuron(N_PHAR,3);
        postSynapticNeuron(N_PQR,4);
        postSynapticNeuron(N_PVCR,3);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIGL,2);
        postSynapticNeuron(N_VD13,2);
        postSynapticNeuron(N_VD3,1);
    break;
    case N_PVPR:
        postSynapticNeuron(N_ADFR,1);
        postSynapticNeuron(N_AQR,11);
        postSynapticNeuron(N_ASHR,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_AVBL,4);
        postSynapticNeuron(N_AVBR,5);
        postSynapticNeuron(N_AVHL,3);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVL,4);
        postSynapticNeuron(N_DD2,1);
        postSynapticNeuron(N_DVC,14);
        postSynapticNeuron(N_PVCL,4);
        postSynapticNeuron(N_PVCR,7);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_PVQR,1);
        postSynapticNeuron(N_RIAR,2);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RIMR,1);
        postSynapticNeuron(N_RMGR,1);
        postSynapticNeuron(N_VD4,1);
        postSynapticNeuron(N_VD5,1);
    break;
    case N_PVQL:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_AIAL,3);
        postSynapticNeuron(N_ASJL,1);
        postSynapticNeuron(N_ASKL,4);
        postSynapticNeuron(N_ASKL,5);
        postSynapticNeuron(N_HSNL,2);
        postSynapticNeuron(N_PVQR,2);
        postSynapticNeuron(N_RMGL,1);
    break;
    case N_PVQR:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_AIAR,7);
        postSynapticNeuron(N_ASER,1);
        postSynapticNeuron(N_ASKR,8);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_AWAR,2);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_PVNL,1);
        postSynapticNeuron(N_PVQL,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIFR,1);
        postSynapticNeuron(N_VD1,1);
    break;
    case N_PVR:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_ALML,1);
        postSynapticNeuron(N_AS6,1);
        postSynapticNeuron(N_AVBL,4);
        postSynapticNeuron(N_AVBR,4);
        postSynapticNeuron(N_AVJL,3);
        postSynapticNeuron(N_AVJR,2);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_DA9,1);
        postSynapticNeuron(N_DB2,1);
        postSynapticNeuron(N_DB3,1);
        postSynapticNeuron(N_DVA,3);
        postSynapticNeuron(N_IL1DL,1);
        postSynapticNeuron(N_IL1DR,1);
        postSynapticNeuron(N_IL1VL,1);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_LUAL,1);
        postSynapticNeuron(N_LUAR,1);
        postSynapticNeuron(N_PDEL,1);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_PLMR,2);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_RIPL,3);
        postSynapticNeuron(N_RIPR,3);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_URADL,1);
    break;
    case N_PVT:
        postSynapticNeuron(N_AIBL,3);
        postSynapticNeuron(N_AIBR,5);
        postSynapticNeuron(N_AVKL,9);
        postSynapticNeuron(N_AVKR,7);
        postSynapticNeuron(N_AVL,2);
        postSynapticNeuron(N_DVC,2);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIGL,2);
        postSynapticNeuron(N_RIGR,3);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_RMFL,2);
        postSynapticNeuron(N_RMFR,3);
        postSynapticNeuron(N_SMBDR,1);
    break;
    case N_PVWL:
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_PVCR,2);
        postSynapticNeuron(N_PVT,2);
        postSynapticNeuron(N_PVWR,1);
        postSynapticNeuron(N_VA12,1
    );
    break;
    case N_PVWR:
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_PVCR,2);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_VA12,1);
    break;
    case N_RIAL:
        postSynapticNeuron(N_CEPVL,1);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIVL,2);
        postSynapticNeuron(N_RIVR,4);
        postSynapticNeuron(N_RMDDL,12);
        postSynapticNeuron(N_RMDDR,7);
        postSynapticNeuron(N_RMDL,6);
        postSynapticNeuron(N_RMDR,6);
        postSynapticNeuron(N_RMDVL,9);
        postSynapticNeuron(N_RMDVR,11);
        postSynapticNeuron(N_SIADL,2);
        postSynapticNeuron(N_SMDDL,8);
        postSynapticNeuron(N_SMDDR,10);
        postSynapticNeuron(N_SMDVL,6);
        postSynapticNeuron(N_SMDVR,11);
    break;
    case N_RIAR:
        postSynapticNeuron(N_CEPVR,1);
        postSynapticNeuron(N_IL1R,1);
        postSynapticNeuron(N_RIAL,4);
        postSynapticNeuron(N_RIVL,1);
        postSynapticNeuron(N_RMDDL,10);
        postSynapticNeuron(N_RMDDR,11);
        postSynapticNeuron(N_RMDL,3);
        postSynapticNeuron(N_RMDR,8);
        postSynapticNeuron(N_RMDVL,12);
        postSynapticNeuron(N_RMDVR,10);
        postSynapticNeuron(N_SAADR,1);
        postSynapticNeuron(N_SIADL,1);
        postSynapticNeuron(N_SIADR,1);
        postSynapticNeuron(N_SIAVL,1);
        postSynapticNeuron(N_SMDDL,7);
        postSynapticNeuron(N_SMDDR,7);
        postSynapticNeuron(N_SMDVL,13);
        postSynapticNeuron(N_SMDVR,7);
    break;
    case N_RIBL:
        postSynapticNeuron(N_AIBR,2);
        postSynapticNeuron(N_AUAL,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVDR,1);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,5);
        postSynapticNeuron(N_BAGR,1);
        postSynapticNeuron(N_OLQDL,2);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIAL,3);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,3);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_SIADL,1);
        postSynapticNeuron(N_SIAVL,1);
        postSynapticNeuron(N_SIBDL,1);
        postSynapticNeuron(N_SIBVL,1);
        postSynapticNeuron(N_SIBVR,1);
        postSynapticNeuron(N_SMBDL,1);
        postSynapticNeuron(N_SMDDL,1);
        postSynapticNeuron(N_SMDVR,4);
    break;
    case N_RIBR:
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIZR,1);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVEL,3);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_BAGL,1);
        postSynapticNeuron(N_OLQDR,2);
        postSynapticNeuron(N_OLQVR,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIAR,2);
        postSynapticNeuron(N_RIBL,3);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIGR,2);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_SIADR,1);
        postSynapticNeuron(N_SIAVR,1);
        postSynapticNeuron(N_SIBDR,1);
        postSynapticNeuron(N_SIBVR,1);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_SMDDL,2);
        postSynapticNeuron(N_SMDDR,1);
        postSynapticNeuron(N_SMDVL,2);
    break;
    case N_RICL:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_ASHL,2);
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_AVAR,6);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,2);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_RIML,1);
        postSynapticNeuron(N_RIMR,3);
        postSynapticNeuron(N_RIVR,1);
        postSynapticNeuron(N_RMFR,1);
        postSynapticNeuron(N_SMBDL,2);
        postSynapticNeuron(N_SMDDL,3);
        postSynapticNeuron(N_SMDDR,3);
        postSynapticNeuron(N_SMDVR,1);
    break;
    case N_RICR:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_ASHR,2);
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_AVAR,5);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_SMDDL,4);
        postSynapticNeuron(N_SMDDR,3);
        postSynapticNeuron(N_SMDVL,2);
        postSynapticNeuron(N_SMDVR,1);
    break;
    case N_RID:
        postSynapticNeuron(N_ALA,1);
        postSynapticNeuron(N_AS2,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_DA6,3);
        postSynapticNeuron(N_DA9,1);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DD1,4);
        postSynapticNeuron(N_DD2,4);
        postSynapticNeuron(N_DD3,3);
        postSynapticNeuron(N_MDL14,-2);
        postSynapticNeuron(N_MDL21,-3);
        postSynapticNeuron(N_PDB,2);
        postSynapticNeuron(N_VD13,1);
        postSynapticNeuron(N_VD5,1);
    break;
    case N_RIFL:
        postSynapticNeuron(N_ALML,2);
        postSynapticNeuron(N_AVBL,10);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVG,1);
        postSynapticNeuron(N_AVHR,1);
        postSynapticNeuron(N_AVJR,2);
        postSynapticNeuron(N_PVPL,3);
        postSynapticNeuron(N_RIML,4);
        postSynapticNeuron(N_VD1,1);
    break;
    case N_RIFR:
        postSynapticNeuron(N_ASHR,2);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,17);
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVG,1);
        postSynapticNeuron(N_AVHL,1);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVJR,2);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVPR,4);
        postSynapticNeuron(N_RIMR,4);
        postSynapticNeuron(N_RIPR,1);
    break;
    case N_RIGL:
        postSynapticNeuron(N_AIBR,3);
        postSynapticNeuron(N_AIZR,1);
        postSynapticNeuron(N_ALNL,1);
        postSynapticNeuron(N_AQR,2);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,2);
        postSynapticNeuron(N_BAGR,1);
        postSynapticNeuron(N_BAGR,1);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_OLLL,1);
        postSynapticNeuron(N_OLQDL,1);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_RIBL,2);
        postSynapticNeuron(N_RIGR,3);
        postSynapticNeuron(N_RIR,2);
        postSynapticNeuron(N_RMEL,2);
        postSynapticNeuron(N_RMHR,3);
        postSynapticNeuron(N_URYDL,1);
        postSynapticNeuron(N_URYVL,1);
        postSynapticNeuron(N_VB2,1);
        postSynapticNeuron(N_VD1,2);
    break;
    case N_RIGR:
        postSynapticNeuron(N_AIBL,3);
        postSynapticNeuron(N_ALNR,1);
        postSynapticNeuron(N_AQR,1);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_AVKL,4);
        postSynapticNeuron(N_AVKR,2);
        postSynapticNeuron(N_BAGL,1);
        postSynapticNeuron(N_OLLR,1);
        postSynapticNeuron(N_OLQDR,1);
        postSynapticNeuron(N_OLQVR,1);
        postSynapticNeuron(N_RIBR,2);
        postSynapticNeuron(N_RIGL,3);
        postSynapticNeuron(N_RIR,1);
        postSynapticNeuron(N_RMHL,4);
        postSynapticNeuron(N_URYDR,1);
        postSynapticNeuron(N_URYVR,1);
    break;
    case N_RIH:
        postSynapticNeuron(N_ADFR,1);
        postSynapticNeuron(N_AIZL,4);
        postSynapticNeuron(N_AIZR,4);
        postSynapticNeuron(N_AUAR,1);
        postSynapticNeuron(N_BAGR,1);
        postSynapticNeuron(N_CEPDL,2);
        postSynapticNeuron(N_CEPDR,2);
        postSynapticNeuron(N_CEPVL,2);
        postSynapticNeuron(N_CEPVR,2);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_IL2L,2);
        postSynapticNeuron(N_IL2R,1);
        postSynapticNeuron(N_OLQDL,4);
        postSynapticNeuron(N_OLQDR,2);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_OLQVR,6);
        postSynapticNeuron(N_RIAL,10);
        postSynapticNeuron(N_RIAR,8);
        postSynapticNeuron(N_RIBL,5);
        postSynapticNeuron(N_RIBR,4);
        postSynapticNeuron(N_RIPL,4);
        postSynapticNeuron(N_RIPR,6);
        postSynapticNeuron(N_RMER,2);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_URYVR,1);
    break;
    case N_RIML:
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AIYL,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,3);
        postSynapticNeuron(N_AVEL,2);
        postSynapticNeuron(N_AVER,3);
        postSynapticNeuron(N_MDR05,2);
        postSynapticNeuron(N_MVR05,2);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMFR,1);
        postSynapticNeuron(N_SAADR,1);
        postSynapticNeuron(N_SAAVL,3);
        postSynapticNeuron(N_SAAVR,2);
        postSynapticNeuron(N_SMDDR,5);
        postSynapticNeuron(N_SMDVL,1);
    break;
    case N_RIMR:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_AIBL,4);
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AIYR,1);
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,5);
        postSynapticNeuron(N_AVEL,3);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_MDL05,1);
        postSynapticNeuron(N_MDL07,1);
        postSynapticNeuron(N_MVL05,1);
        postSynapticNeuron(N_MVL07,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIS,2);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMFL,1);
        postSynapticNeuron(N_RMFR,1);
        postSynapticNeuron(N_SAAVL,3);
        postSynapticNeuron(N_SAAVR,3);
        postSynapticNeuron(N_SMDDL,2);
        postSynapticNeuron(N_SMDDR,4);
    break;
    case N_RIPL:
        postSynapticNeuron(N_OLQDL,1);
        postSynapticNeuron(N_OLQDR,1);
        postSynapticNeuron(N_RMED,1);
    break;
    case N_RIPR:
        postSynapticNeuron(N_OLQDL,1);
        postSynapticNeuron(N_OLQDR,1);
        postSynapticNeuron(N_RMED,1);
    break;
    case N_RIR:
        postSynapticNeuron(N_AFDR,1);
        postSynapticNeuron(N_AIZL,3);
        postSynapticNeuron(N_AIZR,5);
        postSynapticNeuron(N_AUAL,1);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_BAGL,1);
        postSynapticNeuron(N_BAGR,2);
        postSynapticNeuron(N_DVA,2);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_RIAL,5);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_URXL,5);
        postSynapticNeuron(N_URXR,1);
    break;
    case N_RIS:
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AVEL,7);
        postSynapticNeuron(N_AVER,7);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,4);
        postSynapticNeuron(N_AVL,2);
        postSynapticNeuron(N_CEPDR,1);
        postSynapticNeuron(N_CEPVL,2);
        postSynapticNeuron(N_CEPVR,1);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_OLLR,1);
        postSynapticNeuron(N_RIBL,3);
        postSynapticNeuron(N_RIBR,5);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RIMR,5);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDL,2);
        postSynapticNeuron(N_RMDR,4);
        postSynapticNeuron(N_SMDDL,1);
        postSynapticNeuron(N_SMDDR,3);
        postSynapticNeuron(N_SMDVL,1);
        postSynapticNeuron(N_SMDVR,1);
        postSynapticNeuron(N_URYVR,1);
    break;
    case N_RIVL:
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_MVR05,-2);
        postSynapticNeuron(N_MVR06,-2);
        postSynapticNeuron(N_MVR08,-3);
        postSynapticNeuron(N_RIAL,1);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIVR,2);
        postSynapticNeuron(N_RMDL,2);
        postSynapticNeuron(N_SAADR,3);
        postSynapticNeuron(N_SDQR,2);
        postSynapticNeuron(N_SIAVR,2);
        postSynapticNeuron(N_SMDDR,1);
        postSynapticNeuron(N_SMDVL,1);
    break;
    case N_RIVR:
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_MVL05,-2);
        postSynapticNeuron(N_MVL06,-2);
        postSynapticNeuron(N_MVL08,-2);
        postSynapticNeuron(N_MVR04,-2);
        postSynapticNeuron(N_MVR06,-2);
        postSynapticNeuron(N_RIAL,2);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIVL,2);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_RMEV,1);
        postSynapticNeuron(N_SAADL,2);
        postSynapticNeuron(N_SDQR,2);
        postSynapticNeuron(N_SIAVL,2);
        postSynapticNeuron(N_SMDDL,2);
        postSynapticNeuron(N_SMDVR,4);
    break;
    case N_RMDDL:
        postSynapticNeuron(N_MDR01,1);
        postSynapticNeuron(N_MDR02,1);
        postSynapticNeuron(N_MDR03,1);
        postSynapticNeuron(N_MDR04,1);
        postSynapticNeuron(N_MDR08,2);
        postSynapticNeuron(N_MVR01,1);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_RMDVR,7);
        postSynapticNeuron(N_SMDDL,1);
    break;
    case N_RMDDR:
        postSynapticNeuron(N_MDL01,1);
        postSynapticNeuron(N_MDL02,1);
        postSynapticNeuron(N_MDL03,2);
        postSynapticNeuron(N_MDL04,1);
        postSynapticNeuron(N_MDR04,1);
        postSynapticNeuron(N_MVR01,1);
        postSynapticNeuron(N_MVR02,1);
        postSynapticNeuron(N_OLQVR,1);
        postSynapticNeuron(N_RMDVL,12);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_SAADR,1);
        postSynapticNeuron(N_SMDDR,1);
        postSynapticNeuron(N_URYDL,1);
    break;
    case N_RMDL:
        postSynapticNeuron(N_MDL03,1);
        postSynapticNeuron(N_MDL05,2);
        postSynapticNeuron(N_MDR01,1);
        postSynapticNeuron(N_MDR03,1);
        postSynapticNeuron(N_MVL01,1);
        postSynapticNeuron(N_MVR01,1);
        postSynapticNeuron(N_MVR03,1);
        postSynapticNeuron(N_MVR05,2);
        postSynapticNeuron(N_MVR07,1);
        postSynapticNeuron(N_OLLR,2);
        postSynapticNeuron(N_RIAL,4);
        postSynapticNeuron(N_RIAR,3);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_RMDR,3);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_RMER,1);
        postSynapticNeuron(N_RMFL,1);
    break;
    case N_RMDR:
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_MDL03,1);
        postSynapticNeuron(N_MDL05,1);
        postSynapticNeuron(N_MDR05,1);
        postSynapticNeuron(N_MVL03,1);
        postSynapticNeuron(N_MVL05,1);
        postSynapticNeuron(N_RIAL,3);
        postSynapticNeuron(N_RIAR,7);
        postSynapticNeuron(N_RIMR,2);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDVR,1);
    break;
    case N_RMDVL:
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_MDR01,1);
        postSynapticNeuron(N_MVL04,1);
        postSynapticNeuron(N_MVR01,1);
        postSynapticNeuron(N_MVR02,1);
        postSynapticNeuron(N_MVR03,1);
        postSynapticNeuron(N_MVR04,1);
        postSynapticNeuron(N_MVR05,1);
        postSynapticNeuron(N_MVR06,1);
        postSynapticNeuron(N_MVR08,1);
        postSynapticNeuron(N_OLQDL,1);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDDR,6);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_SAAVL,1);
        postSynapticNeuron(N_SMDVL,1);
    break;
    case N_RMDVR:
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_MDL01,1);
        postSynapticNeuron(N_MVL01,1);
        postSynapticNeuron(N_MVL02,1);
        postSynapticNeuron(N_MVL03,1);
        postSynapticNeuron(N_MVL04,1);
        postSynapticNeuron(N_MVL05,1);
        postSynapticNeuron(N_MVL06,1);
        postSynapticNeuron(N_MVL08,1);
        postSynapticNeuron(N_MVR04,1);
        postSynapticNeuron(N_MVR06,1);
        postSynapticNeuron(N_MVR08,1);
        postSynapticNeuron(N_OLQDR,1);
        postSynapticNeuron(N_RMDDL,4);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_SAAVR,1);
        postSynapticNeuron(N_SIBDR,1);
        postSynapticNeuron(N_SIBVR,1);
        postSynapticNeuron(N_SMDVR,1);
    break;
    case N_RMED:
        postSynapticNeuron(N_IL1VL,1);
        postSynapticNeuron(N_MVL02,-4);
        postSynapticNeuron(N_MVL04,-4);
        postSynapticNeuron(N_MVL06,-4);
        postSynapticNeuron(N_MVR02,-4);
        postSynapticNeuron(N_MVR04,-4);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIPL,1);
        postSynapticNeuron(N_RIPR,1);
        postSynapticNeuron(N_RMEV,2);
    break;
    case N_RMEL:
        postSynapticNeuron(N_MDR01,-5);
        postSynapticNeuron(N_MDR03,-5);
        postSynapticNeuron(N_MVR01,-5);
        postSynapticNeuron(N_MVR03,-5);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RMEV,1);
    break;
    case N_RMER:
        postSynapticNeuron(N_MDL01,-7);
        postSynapticNeuron(N_MDL03,-7);
        postSynapticNeuron(N_MVL01,-7);
        postSynapticNeuron(N_RMEV,1);
    break;
    case N_RMEV:
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_AVER,1);
        postSynapticNeuron(N_IL1DL,1);
        postSynapticNeuron(N_IL1DR,1);
        postSynapticNeuron(N_MDL02,-3);
        postSynapticNeuron(N_MDL04,-3);
        postSynapticNeuron(N_MDL06,-3);
        postSynapticNeuron(N_MDR02,-3);
        postSynapticNeuron(N_MDR04,-3);
        postSynapticNeuron(N_RMED,2);
        postSynapticNeuron(N_RMEL,1);
        postSynapticNeuron(N_RMER,1);
        postSynapticNeuron(N_SMDDR,1);
    break;
    case N_RMFL:
        postSynapticNeuron(N_AVKL,4);
        postSynapticNeuron(N_AVKR,4);
        postSynapticNeuron(N_MDR03,1);
        postSynapticNeuron(N_MVR01,1);
        postSynapticNeuron(N_MVR03,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RMDR,3);
        postSynapticNeuron(N_RMGR,1);
        postSynapticNeuron(N_URBR,1);
    break;
    case N_RMFR:
        postSynapticNeuron(N_AVKL,3);
        postSynapticNeuron(N_AVKR,3);
        postSynapticNeuron(N_RMDL,2);
    break;
    case N_RMGL:
        postSynapticNeuron(N_ADAL,1);
        postSynapticNeuron(N_ADLL,1);
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_ALML,1);
        postSynapticNeuron(N_ALNL,1);
        postSynapticNeuron(N_ASHL,2);
        postSynapticNeuron(N_ASKL,2);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVEL,2);
        postSynapticNeuron(N_AWBL,1);
        postSynapticNeuron(N_CEPDL,1);
        postSynapticNeuron(N_IL2L,1);
        postSynapticNeuron(N_MDL05,2);
        postSynapticNeuron(N_MVL05,2);
        postSynapticNeuron(N_RID,1);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDR,3);
        postSynapticNeuron(N_RMDVL,3);
        postSynapticNeuron(N_RMHL,3);
        postSynapticNeuron(N_RMHR,1);
        postSynapticNeuron(N_SIAVL,1);
        postSynapticNeuron(N_SIBVL,3);
        postSynapticNeuron(N_SIBVR,1);
        postSynapticNeuron(N_SMBVL,1);
        postSynapticNeuron(N_URXL,2);
    break;
    case N_RMGR:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_AIMR,1);
        postSynapticNeuron(N_ALNR,1);
        postSynapticNeuron(N_ASHR,2);
        postSynapticNeuron(N_ASKR,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_AVER,3);
        postSynapticNeuron(N_AVJL,1);
        postSynapticNeuron(N_AWBR,1);
        postSynapticNeuron(N_IL2R,1);
        postSynapticNeuron(N_MDR05,1);
        postSynapticNeuron(N_MVR05,1);
        postSynapticNeuron(N_MVR07,1);
        postSynapticNeuron(N_RIR,1);
        postSynapticNeuron(N_RMDL,4);
        postSynapticNeuron(N_RMDR,2);
        postSynapticNeuron(N_RMDVR,5);
        postSynapticNeuron(N_RMHR,1);
        postSynapticNeuron(N_URXR,2);
    break;
    case N_RMHL:
        postSynapticNeuron(N_MDR01,2);
        postSynapticNeuron(N_MDR03,3);
        postSynapticNeuron(N_MVR01,2);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMGL,3);
        postSynapticNeuron(N_SIBVR,1);
    break;
    case N_RMHR:
        postSynapticNeuron(N_MDL01,2);
        postSynapticNeuron(N_MDL03,2);
        postSynapticNeuron(N_MDL05,2);
        postSynapticNeuron(N_MVL01,2);
        postSynapticNeuron(N_RMER,1);
        postSynapticNeuron(N_RMGL,1);
        postSynapticNeuron(N_RMGR,1);
    break;
    case N_SAADL:
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_RIML,3);
        postSynapticNeuron(N_RIMR,6);
        postSynapticNeuron(N_RMGR,1);
        postSynapticNeuron(N_SMBDL,1);
    break;
    case N_SAADR:
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_OLLL,1);
        postSynapticNeuron(N_RIML,4);
        postSynapticNeuron(N_RIMR,5);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_RMFL,1);
        postSynapticNeuron(N_RMGL,1);
    break;
    case N_SAAVL:
        postSynapticNeuron(N_AIBL,1);
        postSynapticNeuron(N_ALNL,1);
        postSynapticNeuron(N_AVAL,16);
        postSynapticNeuron(N_OLLR,1);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RIMR,12);
        postSynapticNeuron(N_RMDVL,2);
        postSynapticNeuron(N_RMFR,2);
        postSynapticNeuron(N_SMBVR,3);
        postSynapticNeuron(N_SMDDR,8);
    break;
    case N_SAAVR:
        postSynapticNeuron(N_AVAR,13);
        postSynapticNeuron(N_RIML,5);
        postSynapticNeuron(N_RIMR,2);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_SMBVL,2);
        postSynapticNeuron(N_SMDDL,6);
    break;
    case N_SABD:
        postSynapticNeuron(N_AVAL,4);
        postSynapticNeuron(N_VA2,4);
        postSynapticNeuron(N_VA3,2);
        postSynapticNeuron(N_VA4,1);
    break;
    case N_SABVL:
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_DA1,2);
        postSynapticNeuron(N_DA2,1);
    break;
    case N_SABVR:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_DA1,3);
    break;
    case N_SDQL:
        postSynapticNeuron(N_ALML,2);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_AVEL,1);
        postSynapticNeuron(N_FLPL,1);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIS,3);
        postSynapticNeuron(N_RMFL,1);
        postSynapticNeuron(N_SDQR,1);
    break;
    case N_SDQR:
        postSynapticNeuron(N_ADLL,1);
        postSynapticNeuron(N_AIBL,2);
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_AVBL,7);
        postSynapticNeuron(N_AVBR,4);
        postSynapticNeuron(N_DVA,3);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RIVL,2);
        postSynapticNeuron(N_RIVR,2);
        postSynapticNeuron(N_RMHL,2);
        postSynapticNeuron(N_RMHR,1);
        postSynapticNeuron(N_SDQL,1);
        postSynapticNeuron(N_SIBVL,1);
    break;
    case N_SIADL:
        postSynapticNeuron(N_RIBL,1);
    break;
    case N_SIADR:
        postSynapticNeuron(N_RIBR,1);
    break;
    case N_SIAVL:
        postSynapticNeuron(N_RIBL,1);
    break;
    case N_SIAVR:
        postSynapticNeuron(N_RIBR,1);
    break;
    case N_SIBDL:
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_SIBVL,1);
    break;
    case N_SIBDR:
        postSynapticNeuron(N_AIML,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_SIBVR,1);
    break;
    case N_SIBVL:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_SDQR,1);
        postSynapticNeuron(N_SIBDL,1);
    break;
    case N_SIBVR:
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RMHL,1);
        postSynapticNeuron(N_SIBDR,1);
    break;
    case N_SMBDL:
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,1);
        postSynapticNeuron(N_MDR01,2);
        postSynapticNeuron(N_MDR02,2);
        postSynapticNeuron(N_MDR03,2);
        postSynapticNeuron(N_MDR04,2);
        postSynapticNeuron(N_MDR06,3);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RMED,3);
        postSynapticNeuron(N_SAADL,1);
        postSynapticNeuron(N_SAAVR,1);
    break;
    case N_SMBDR:
        postSynapticNeuron(N_ALNL,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,2);
        postSynapticNeuron(N_MDL02,1);
        postSynapticNeuron(N_MDL03,1);
        postSynapticNeuron(N_MDL04,1);
        postSynapticNeuron(N_MDL06,2);
        postSynapticNeuron(N_MDR04,1);
        postSynapticNeuron(N_MDR08,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RMED,4);
        postSynapticNeuron(N_SAAVL,3);
    break;
    case N_SMBVL:
        postSynapticNeuron(N_MVL01,1);
        postSynapticNeuron(N_MVL02,1);
        postSynapticNeuron(N_MVL03,1);
        postSynapticNeuron(N_MVL04,1);
        postSynapticNeuron(N_MVL05,1);
        postSynapticNeuron(N_MVL06,1);
        postSynapticNeuron(N_MVL08,1);
        postSynapticNeuron(N_PLNL,1);
        postSynapticNeuron(N_RMEV,5);
        postSynapticNeuron(N_SAADL,3);
        postSynapticNeuron(N_SAAVR,2);
    break;
    case N_SMBVR:
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_AVKR,1);
        postSynapticNeuron(N_MVR01,1);
        postSynapticNeuron(N_MVR02,1);
        postSynapticNeuron(N_MVR03,1);
        postSynapticNeuron(N_MVR04,1);
        postSynapticNeuron(N_MVR06,1);
        postSynapticNeuron(N_MVR07,1);
        postSynapticNeuron(N_RMEV,3);
        postSynapticNeuron(N_SAADR,4);
        postSynapticNeuron(N_SAAVL,3);
    break;
    case N_SMDDL:
        postSynapticNeuron(N_MDL04,1);
        postSynapticNeuron(N_MDL06,1);
        postSynapticNeuron(N_MDL08,1);
        postSynapticNeuron(N_MDR02,1);
        postSynapticNeuron(N_MDR03,1);
        postSynapticNeuron(N_MDR04,1);
        postSynapticNeuron(N_MDR05,1);
        postSynapticNeuron(N_MDR06,1);
        postSynapticNeuron(N_MDR07,1);
        postSynapticNeuron(N_MVL02,1);
        postSynapticNeuron(N_MVL04,1);
        postSynapticNeuron(N_RIAL,1);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_SMDVR,2);
    break;
    case N_SMDDR:
        postSynapticNeuron(N_MDL04,1);
        postSynapticNeuron(N_MDL05,1);
        postSynapticNeuron(N_MDL06,1);
        postSynapticNeuron(N_MDL08,1);
        postSynapticNeuron(N_MDR04,1);
        postSynapticNeuron(N_MDR06,1);
        postSynapticNeuron(N_MVR02,1);
        postSynapticNeuron(N_RIAL,2);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_VD1,1);
    break;
    case N_SMDVL:
        postSynapticNeuron(N_MVL03,1);
        postSynapticNeuron(N_MVL06,1);
        postSynapticNeuron(N_MVR02,1);
        postSynapticNeuron(N_MVR03,1);
        postSynapticNeuron(N_MVR04,1);
        postSynapticNeuron(N_MVR06,1);
        postSynapticNeuron(N_PVR,1);
        postSynapticNeuron(N_RIAL,3);
        postSynapticNeuron(N_RIAR,8);
        postSynapticNeuron(N_RIBR,2);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RIVL,1);
        postSynapticNeuron(N_RIVL,1);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_SMDDR,4);
        postSynapticNeuron(N_SMDVR,1);
    break;
    case N_SMDVR:
        postSynapticNeuron(N_MVL02,1);
        postSynapticNeuron(N_MVL03,1);
        postSynapticNeuron(N_MVL04,1);
        postSynapticNeuron(N_MVR07,1);
        postSynapticNeuron(N_RIAL,7);
        postSynapticNeuron(N_RIAR,5);
        postSynapticNeuron(N_RIBL,2);
        postSynapticNeuron(N_RIVR,1);
        postSynapticNeuron(N_RIVR,2);
        postSynapticNeuron(N_RMDDL,1);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_SMDDL,2);
        postSynapticNeuron(N_SMDVL,1);
        postSynapticNeuron(N_VB1,1);
    break;
    case N_URADL:
        postSynapticNeuron(N_IL1DL,2);
        postSynapticNeuron(N_MDL02,2);
        postSynapticNeuron(N_MDL03,2);
        postSynapticNeuron(N_MDL04,2);
        postSynapticNeuron(N_RIPL,3);
        postSynapticNeuron(N_RMEL,1);
    break;
    case N_URADR:
        postSynapticNeuron(N_IL1DR,1);
        postSynapticNeuron(N_MDR01,3);
        postSynapticNeuron(N_MDR02,2);
        postSynapticNeuron(N_MDR03,3);
        postSynapticNeuron(N_RIPR,3);
        postSynapticNeuron(N_RMDVR,1);
        postSynapticNeuron(N_RMED,1);
        postSynapticNeuron(N_RMER,1);
        postSynapticNeuron(N_URYDR,1);
    break;
    case N_URAVL:
        postSynapticNeuron(N_MVL01,2);
        postSynapticNeuron(N_MVL02,2);
        postSynapticNeuron(N_MVL03,3);
        postSynapticNeuron(N_MVL04,2);
        postSynapticNeuron(N_RIPL,3);
        postSynapticNeuron(N_RMEL,1);
        postSynapticNeuron(N_RMER,1);
        postSynapticNeuron(N_RMEV,2);
    break;
    case N_URAVR:
        postSynapticNeuron(N_IL1R,1);
        postSynapticNeuron(N_MVR01,2);
        postSynapticNeuron(N_MVR02,2);
        postSynapticNeuron(N_MVR03,2);
        postSynapticNeuron(N_MVR04,2);
        postSynapticNeuron(N_RIPR,3);
        postSynapticNeuron(N_RMDVL,1);
        postSynapticNeuron(N_RMER,2);
        postSynapticNeuron(N_RMEV,2);
    break;
    case N_URBL:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_CEPDL,1);
        postSynapticNeuron(N_IL1L,1);
        postSynapticNeuron(N_OLQDL,1);
        postSynapticNeuron(N_OLQVL,1);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RMDDR,1);
        postSynapticNeuron(N_SIAVL,1);
        postSynapticNeuron(N_SMBDR,1);
        postSynapticNeuron(N_URXL,2);
    break;
    case N_URBR:
        postSynapticNeuron(N_ADAR,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_CEPDR,1);
        postSynapticNeuron(N_IL1R,3);
        postSynapticNeuron(N_IL2R,1);
        postSynapticNeuron(N_OLQDR,1);
        postSynapticNeuron(N_OLQVR,1);
        postSynapticNeuron(N_RICR,1);
        postSynapticNeuron(N_RMDL,1);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMFL,1);
        postSynapticNeuron(N_SIAVR,2);
        postSynapticNeuron(N_SMBDL,1);
        postSynapticNeuron(N_URXR,4);
    break;
    case N_URXL:
        postSynapticNeuron(N_ASHL,1);
        postSynapticNeuron(N_AUAL,5);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVEL,4);
        postSynapticNeuron(N_AVJR,1);
        postSynapticNeuron(N_RIAL,8);
        postSynapticNeuron(N_RICL,1);
        postSynapticNeuron(N_RIGL,3);
        postSynapticNeuron(N_RMGL,2);
        postSynapticNeuron(N_RMGL,1);
    break;
    case N_URXR:
        postSynapticNeuron(N_AUAR,4);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_IL2R,1);
        postSynapticNeuron(N_OLQVR,1);
        postSynapticNeuron(N_RIAR,3);
        postSynapticNeuron(N_RIGR,2);
        postSynapticNeuron(N_RIPR,3);
        postSynapticNeuron(N_RMDR,1);
        postSynapticNeuron(N_RMGR,2);
        postSynapticNeuron(N_SIAVR,1);
    break;
    case N_URYDL:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_RIBL,1);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RMDDR,4);
        postSynapticNeuron(N_RMDVL,6);
        postSynapticNeuron(N_SMDDL,1);
        postSynapticNeuron(N_SMDDR,1);
    break;
    case N_URYDR:
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVEL,2);
        postSynapticNeuron(N_AVER,2);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RMDDL,3);
        postSynapticNeuron(N_RMDVR,5);
        postSynapticNeuron(N_SMDDL,4);
    break;
    case N_URYVL:
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVER,5);
        postSynapticNeuron(N_IL1VL,1);
        postSynapticNeuron(N_RIAL,1);
        postSynapticNeuron(N_RIBL,2);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_RIH,1);
        postSynapticNeuron(N_RIS,1);
        postSynapticNeuron(N_RMDDL,4);
        postSynapticNeuron(N_RMDVR,2);
        postSynapticNeuron(N_SIBVR,1);
        postSynapticNeuron(N_SMDVR,4);
    break;
    case N_URYVR:
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVEL,6);
        postSynapticNeuron(N_IL1VR,1);
        postSynapticNeuron(N_RIAR,1);
        postSynapticNeuron(N_RIBR,1);
        postSynapticNeuron(N_RIGR,1);
        postSynapticNeuron(N_RMDDR,6);
        postSynapticNeuron(N_RMDVL,4);
        postSynapticNeuron(N_SIBDR,1);
        postSynapticNeuron(N_SIBVL,1);
        postSynapticNeuron(N_SMDVL,3);
    break;
    case N_VA1:
        postSynapticNeuron(N_AVAL,3);
        postSynapticNeuron(N_DA2,2);
        postSynapticNeuron(N_DD1,9);
        postSynapticNeuron(N_MVL07,3);
        postSynapticNeuron(N_MVL08,3);
        postSynapticNeuron(N_MVR07,3);
        postSynapticNeuron(N_MVR08,3);
        postSynapticNeuron(N_VD1,2);
    break;
    case N_VA2:
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_DD1,13);
        postSynapticNeuron(N_MVL07,5);
        postSynapticNeuron(N_MVL10,5);
        postSynapticNeuron(N_MVR07,5);
        postSynapticNeuron(N_MVR10,5);
        postSynapticNeuron(N_SABD,3);
        postSynapticNeuron(N_VA3,2);
        postSynapticNeuron(N_VB1,2);
        postSynapticNeuron(N_VD1,2);
        postSynapticNeuron(N_VD1,1);
        postSynapticNeuron(N_VD2,11);
    break;
    case N_VA3:
        postSynapticNeuron(N_AS1,1);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_DD1,18);
        postSynapticNeuron(N_DD2,11);
        postSynapticNeuron(N_MVL09,5);
        postSynapticNeuron(N_MVL10,5);
        postSynapticNeuron(N_MVL12,5);
        postSynapticNeuron(N_MVR09,5);
        postSynapticNeuron(N_MVR10,5);
        postSynapticNeuron(N_MVR12,5);
        postSynapticNeuron(N_SABD,2);
        postSynapticNeuron(N_VA4,1);
        postSynapticNeuron(N_VD2,3);
        postSynapticNeuron(N_VD3,3);
    break;
    case N_VA4:
        postSynapticNeuron(N_AS2,2);
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_AVDL,1);
        postSynapticNeuron(N_DA5,1);
        postSynapticNeuron(N_DD2,21);
        postSynapticNeuron(N_MVL11,6);
        postSynapticNeuron(N_MVL12,6);
        postSynapticNeuron(N_MVR11,6);
        postSynapticNeuron(N_MVR12,6);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_VB3,2);
        postSynapticNeuron(N_VD4,3);
    break;
    case N_VA5:
        postSynapticNeuron(N_AS3,2);
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_AVAR,3);
        postSynapticNeuron(N_DA5,2);
        postSynapticNeuron(N_DD2,5);
        postSynapticNeuron(N_DD3,13);
        postSynapticNeuron(N_MVL11,5);
        postSynapticNeuron(N_MVL14,5);
        postSynapticNeuron(N_MVR11,5);
        postSynapticNeuron(N_MVR14,5);
        postSynapticNeuron(N_VD5,2);
    break;
    case N_VA6:
        postSynapticNeuron(N_AVAL,6);
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_DD3,24);
        postSynapticNeuron(N_MVL13,5);
        postSynapticNeuron(N_MVL14,5);
        postSynapticNeuron(N_MVR13,5);
        postSynapticNeuron(N_MVR14,5);
        postSynapticNeuron(N_VB5,2);
        postSynapticNeuron(N_VD5,1);
        postSynapticNeuron(N_VD6,2);
    break;
    case N_VA7:
        postSynapticNeuron(N_AS5,1);
        postSynapticNeuron(N_AVAL,2);
        postSynapticNeuron(N_AVAR,4);
        postSynapticNeuron(N_DD3,3);
        postSynapticNeuron(N_DD4,12);
        postSynapticNeuron(N_MVL13,4);
        postSynapticNeuron(N_MVL15,4);
        postSynapticNeuron(N_MVL16,4);
        postSynapticNeuron(N_MVR13,4);
        postSynapticNeuron(N_MVR15,4);
        postSynapticNeuron(N_MVR16,4);
        postSynapticNeuron(N_MVULVA,4);
        postSynapticNeuron(N_VB3,1);
        postSynapticNeuron(N_VD7,9);
    break;
    case N_VA8:
        postSynapticNeuron(N_AS6,1);
        postSynapticNeuron(N_AVAL,10);
        postSynapticNeuron(N_AVAR,4);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DD4,21);
        postSynapticNeuron(N_MVL15,6);
        postSynapticNeuron(N_MVL16,6);
        postSynapticNeuron(N_MVR15,6);
        postSynapticNeuron(N_MVR16,6);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_PVCR,2);
        postSynapticNeuron(N_VA8,1);
        postSynapticNeuron(N_VA9,1);
        postSynapticNeuron(N_VB6,1);
        postSynapticNeuron(N_VB8,1);
        postSynapticNeuron(N_VB8,3);
        postSynapticNeuron(N_VB9,3);
        postSynapticNeuron(N_VD7,5);
        postSynapticNeuron(N_VD8,5);
        postSynapticNeuron(N_VD8,1);
    break;
    case N_VA9:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DD4,3);
        postSynapticNeuron(N_DD5,15);
        postSynapticNeuron(N_DVB,1);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_MVL15,5);
        postSynapticNeuron(N_MVL18,5);
        postSynapticNeuron(N_MVR15,5);
        postSynapticNeuron(N_MVR18,5);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_VB8,6);
        postSynapticNeuron(N_VB8,1);
        postSynapticNeuron(N_VB9,4);
        postSynapticNeuron(N_VD7,1);
        postSynapticNeuron(N_VD9,10
    );
    break;
    case N_VA10:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_MVL17,5);
        postSynapticNeuron(N_MVL18,5);
        postSynapticNeuron(N_MVR17,5);
        postSynapticNeuron(N_MVR18,5);
    break;
    case N_VA11:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_AVAR,7);
        postSynapticNeuron(N_DD6,10);
        postSynapticNeuron(N_MVL19,5);
        postSynapticNeuron(N_MVL20,5);
        postSynapticNeuron(N_MVR19,5);
        postSynapticNeuron(N_MVR20,5);
        postSynapticNeuron(N_PVNR,2);
        postSynapticNeuron(N_VB10,1);
        postSynapticNeuron(N_VD12,4);
    break;
    case N_VA12:
        postSynapticNeuron(N_AS11,2);
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_DA8,3);
        postSynapticNeuron(N_DA9,5);
        postSynapticNeuron(N_DB7,4);
        postSynapticNeuron(N_DD6,2);
        postSynapticNeuron(N_LUAL,2);
        postSynapticNeuron(N_MVL21,5);
        postSynapticNeuron(N_MVL22,5);
        postSynapticNeuron(N_MVL23,5);
        postSynapticNeuron(N_MVR21,5);
        postSynapticNeuron(N_MVR22,5);
        postSynapticNeuron(N_MVR23,5);
        postSynapticNeuron(N_MVR24,5);
        postSynapticNeuron(N_PHCL,1);
        postSynapticNeuron(N_PHCR,1);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_PVCR,3);
        postSynapticNeuron(N_VA11,1);
        postSynapticNeuron(N_VB11,1);
        postSynapticNeuron(N_VD12,3);
        postSynapticNeuron(N_VD13,11);
    break;
    case N_VB1:
        postSynapticNeuron(N_AIBR,1);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVKL,4);
        postSynapticNeuron(N_DB2,2);
        postSynapticNeuron(N_DD1,1);
        postSynapticNeuron(N_DVA,1);
        postSynapticNeuron(N_MVL07,1);
        postSynapticNeuron(N_MVL08,1);
        postSynapticNeuron(N_MVR07,1);
        postSynapticNeuron(N_MVR08,1);
        postSynapticNeuron(N_RIML,2);
        postSynapticNeuron(N_RMFL,2);
        postSynapticNeuron(N_SAADL,9);
        postSynapticNeuron(N_SAADR,2);
        postSynapticNeuron(N_SABD,1);
        postSynapticNeuron(N_SMDVR,1);
        postSynapticNeuron(N_VA1,3);
        postSynapticNeuron(N_VA3,1);
        postSynapticNeuron(N_VB2,4);
        postSynapticNeuron(N_VD1,3);
        postSynapticNeuron(N_VD2,1);
    break;
    case N_VB2:
        postSynapticNeuron(N_AVBL,3);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DD1,20);
        postSynapticNeuron(N_DD2,1);
        postSynapticNeuron(N_MVL07,4);
        postSynapticNeuron(N_MVL09,4);
        postSynapticNeuron(N_MVL10,4);
        postSynapticNeuron(N_MVL12,4);
        postSynapticNeuron(N_MVR07,4);
        postSynapticNeuron(N_MVR09,4);
        postSynapticNeuron(N_MVR10,4);
        postSynapticNeuron(N_MVR12,4);
        postSynapticNeuron(N_RIGL,1);
        postSynapticNeuron(N_VA2,1);
        postSynapticNeuron(N_VB1,4);
        postSynapticNeuron(N_VB3,1);
        postSynapticNeuron(N_VB5,1);
        postSynapticNeuron(N_VB7,2);
        postSynapticNeuron(N_VC2,1);
        postSynapticNeuron(N_VD2,9);
        postSynapticNeuron(N_VD3,3);
    break;
    case N_VB3:
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DD2,37);
        postSynapticNeuron(N_MVL11,6);
        postSynapticNeuron(N_MVL12,6);
        postSynapticNeuron(N_MVL14,6);
        postSynapticNeuron(N_MVR11,6);
        postSynapticNeuron(N_MVR12,6);
        postSynapticNeuron(N_MVR14,6);
        postSynapticNeuron(N_VA4,1);
        postSynapticNeuron(N_VA7,1);
        postSynapticNeuron(N_VB2,1);
    break;
    case N_VB4:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DB1,1);
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DD2,6);
        postSynapticNeuron(N_DD3,16);
        postSynapticNeuron(N_MVL11,5);
        postSynapticNeuron(N_MVL14,5);
        postSynapticNeuron(N_MVR11,5);
        postSynapticNeuron(N_MVR14,5);
        postSynapticNeuron(N_VB5,1);
    break;
    case N_VB5:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_DD3,27);
        postSynapticNeuron(N_MVL13,6);
        postSynapticNeuron(N_MVL14,6);
        postSynapticNeuron(N_MVR13,6);
        postSynapticNeuron(N_MVR14,6);
        postSynapticNeuron(N_VB2,1);
        postSynapticNeuron(N_VB4,1);
        postSynapticNeuron(N_VB6,8);
    break;
    case N_VB6:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_DA4,1);
        postSynapticNeuron(N_DD4,30);
        postSynapticNeuron(N_MVL15,6);
        postSynapticNeuron(N_MVL16,6);
        postSynapticNeuron(N_MVR15,6);
        postSynapticNeuron(N_MVR16,6);
        postSynapticNeuron(N_MVULVA,6);
        postSynapticNeuron(N_VA8,1);
        postSynapticNeuron(N_VB5,1);
        postSynapticNeuron(N_VB7,1);
        postSynapticNeuron(N_VD6,1);
        postSynapticNeuron(N_VD7,8);
    break;
    case N_VB7:
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,2);
        postSynapticNeuron(N_DD4,2);
        postSynapticNeuron(N_MVL15,5);
        postSynapticNeuron(N_MVR15,5);
        postSynapticNeuron(N_VB2,2);
    break;
    case N_VB8:
        postSynapticNeuron(N_AVBL,7);
        postSynapticNeuron(N_AVBR,3);
        postSynapticNeuron(N_DD5,30);
        postSynapticNeuron(N_MVL17,5);
        postSynapticNeuron(N_MVL18,5);
        postSynapticNeuron(N_MVL20,5);
        postSynapticNeuron(N_MVR17,5);
        postSynapticNeuron(N_MVR18,5);
        postSynapticNeuron(N_MVR20,5);
        postSynapticNeuron(N_VA8,3);
        postSynapticNeuron(N_VA9,9);
        postSynapticNeuron(N_VA9,1);
        postSynapticNeuron(N_VB9,3);
        postSynapticNeuron(N_VB9,3);
        postSynapticNeuron(N_VD10,1);
        postSynapticNeuron(N_VD9,10);
    break;
    case N_VB9:
        postSynapticNeuron(N_AVAL,5);
        postSynapticNeuron(N_AVAR,4);
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVBR,6);
        postSynapticNeuron(N_DD5,8);
        postSynapticNeuron(N_DVB,1);
        postSynapticNeuron(N_MVL17,6);
        postSynapticNeuron(N_MVL20,6);
        postSynapticNeuron(N_MVR17,6);
        postSynapticNeuron(N_MVR20,6);
        postSynapticNeuron(N_PVCL,2);
        postSynapticNeuron(N_VA8,3);
        postSynapticNeuron(N_VA9,4);
        postSynapticNeuron(N_VB8,1);
        postSynapticNeuron(N_VB8,3);
        postSynapticNeuron(N_VD10,5);
    break;
    case N_VB10:
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_AVKL,1);
        postSynapticNeuron(N_DD6,9);
        postSynapticNeuron(N_MVL19,5);
        postSynapticNeuron(N_MVL20,5);
        postSynapticNeuron(N_MVR19,5);
        postSynapticNeuron(N_MVR20,5);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_VD11,1);
        postSynapticNeuron(N_VD12,2);
    break;
    case N_VB11:
        postSynapticNeuron(N_AVBL,2);
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DD6,7);
        postSynapticNeuron(N_MVL21,5);
        postSynapticNeuron(N_MVL22,5);
        postSynapticNeuron(N_MVL23,5);
        postSynapticNeuron(N_MVR21,5);
        postSynapticNeuron(N_MVR22,5);
        postSynapticNeuron(N_MVR23,5);
        postSynapticNeuron(N_MVR24,5);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_VA12,2);
    break;
    case N_VC1:
        postSynapticNeuron(N_AVL,2);
        postSynapticNeuron(N_DD1,7);
        postSynapticNeuron(N_DD2,6);
        postSynapticNeuron(N_DD3,6);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_MVULVA,6);
        postSynapticNeuron(N_PVT,2);
        postSynapticNeuron(N_VC2,9);
        postSynapticNeuron(N_VC3,3);
        postSynapticNeuron(N_VD1,5);
        postSynapticNeuron(N_VD2,1);
        postSynapticNeuron(N_VD3,1);
        postSynapticNeuron(N_VD4,2);
        postSynapticNeuron(N_VD5,5);
        postSynapticNeuron(N_VD6,1);
    break;
    case N_VC2:
        postSynapticNeuron(N_DB4,1);
        postSynapticNeuron(N_DD1,6);
        postSynapticNeuron(N_DD2,4);
        postSynapticNeuron(N_DD3,9);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_MVULVA,10);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVQR,1);
        postSynapticNeuron(N_PVT,2);
        postSynapticNeuron(N_VC1,10);
        postSynapticNeuron(N_VC3,6);
        postSynapticNeuron(N_VD1,2);
        postSynapticNeuron(N_VD2,2);
        postSynapticNeuron(N_VD4,5);
        postSynapticNeuron(N_VD5,5);
        postSynapticNeuron(N_VD6,1);
    break;
    case N_VC3:
        postSynapticNeuron(N_AVL,1);
        postSynapticNeuron(N_DD1,2);
        postSynapticNeuron(N_DD2,4);
        postSynapticNeuron(N_DD3,5);
        postSynapticNeuron(N_DD4,13);
        postSynapticNeuron(N_DVC,1);
        postSynapticNeuron(N_HSNR,1);
        postSynapticNeuron(N_MVULVA,11);
        postSynapticNeuron(N_PVNR,1);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_PVQR,4);
        postSynapticNeuron(N_VC1,4);
        postSynapticNeuron(N_VC2,3);
        postSynapticNeuron(N_VC4,1);
        postSynapticNeuron(N_VC5,2);
        postSynapticNeuron(N_VD1,1);
        postSynapticNeuron(N_VD2,1);
        postSynapticNeuron(N_VD3,1);
        postSynapticNeuron(N_VD4,2);
        postSynapticNeuron(N_VD5,4);
        postSynapticNeuron(N_VD6,4);
        postSynapticNeuron(N_VD7,5);
    break;
    case N_VC4:
        postSynapticNeuron(N_AVBL,1);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_AVHR,1);
        postSynapticNeuron(N_MVULVA,7);
        postSynapticNeuron(N_VC1,1);
        postSynapticNeuron(N_VC3,5);
        postSynapticNeuron(N_VC5,2);
    break;
    case N_VC5:
        postSynapticNeuron(N_AVFL,1);
        postSynapticNeuron(N_AVFR,1);
        postSynapticNeuron(N_DVC,2);
        postSynapticNeuron(N_HSNL,1);
        postSynapticNeuron(N_MVULVA,2);
        postSynapticNeuron(N_OLLR,1);
        postSynapticNeuron(N_PVT,1);
        postSynapticNeuron(N_URBL,3);
        postSynapticNeuron(N_VC3,3);
        postSynapticNeuron(N_VC4,2);
    break;
    case N_VC6:
        postSynapticNeuron(N_MVULVA,1);
    break;
    case N_VD1:
        postSynapticNeuron(N_DD1,5);
        postSynapticNeuron(N_DVC,5);
        postSynapticNeuron(N_MVL05,-5);
        postSynapticNeuron(N_MVL08,-5);
        postSynapticNeuron(N_MVR05,-5);
        postSynapticNeuron(N_MVR08,-5);
        postSynapticNeuron(N_RIFL,1);
        postSynapticNeuron(N_RIGL,2);
        postSynapticNeuron(N_SMDDR,1);
        postSynapticNeuron(N_VA1,2);
        postSynapticNeuron(N_VA2,1);
        postSynapticNeuron(N_VC1,1);
        postSynapticNeuron(N_VD2,7);
    break;
    case N_VD2:
        postSynapticNeuron(N_AS1,1);
        postSynapticNeuron(N_DD1,3);
        postSynapticNeuron(N_MVL07,-7);
        postSynapticNeuron(N_MVL10,-7);
        postSynapticNeuron(N_MVR07,-7);
        postSynapticNeuron(N_MVR10,-7);
        postSynapticNeuron(N_VA2,9);
        postSynapticNeuron(N_VB2,3);
        postSynapticNeuron(N_VD1,7);
        postSynapticNeuron(N_VD3,2);
    break;
    case N_VD3:
        postSynapticNeuron(N_MVL09,-7);
        postSynapticNeuron(N_MVL12,-9);
        postSynapticNeuron(N_MVR09,-7);
        postSynapticNeuron(N_MVR12,-7);
        postSynapticNeuron(N_PVPL,1);
        postSynapticNeuron(N_VA3,2);
        postSynapticNeuron(N_VB2,2);
        postSynapticNeuron(N_VD2,2);
        postSynapticNeuron(N_VD4,1);
    break;
    case N_VD4:
        postSynapticNeuron(N_DD2,2);
        postSynapticNeuron(N_MVL11,-9);
        postSynapticNeuron(N_MVL12,-9);
        postSynapticNeuron(N_MVR11,-9);
        postSynapticNeuron(N_MVR12,-9);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_VD3,1);
        postSynapticNeuron(N_VD5,1);
    break;
    case N_VD5:
        postSynapticNeuron(N_AVAR,1);
        postSynapticNeuron(N_MVL14,-17);
        postSynapticNeuron(N_MVR14,-17);
        postSynapticNeuron(N_PVPR,1);
        postSynapticNeuron(N_VA5,2);
        postSynapticNeuron(N_VB4,2);
        postSynapticNeuron(N_VD4,1);
        postSynapticNeuron(N_VD6,2);
    break;
    case N_VD6:
        postSynapticNeuron(N_AVAL,1);
        postSynapticNeuron(N_MVL13,-7);
        postSynapticNeuron(N_MVL14,-7);
        postSynapticNeuron(N_MVL16,-7);
        postSynapticNeuron(N_MVR13,-7);
        postSynapticNeuron(N_MVR14,-7);
        postSynapticNeuron(N_MVR16,-7);
        postSynapticNeuron(N_VA6,1);
        postSynapticNeuron(N_VB5,2);
        postSynapticNeuron(N_VD5,2);
        postSynapticNeuron(N_VD7,1);
    break;
    case N_VD7:
        postSynapticNeuron(N_MVL15,-7);
        postSynapticNeuron(N_MVL16,-7);
        postSynapticNeuron(N_MVR15,-7);
        postSynapticNeuron(N_MVR16,-7);
        postSynapticNeuron(N_MVULVA,-15);
        postSynapticNeuron(N_VA9,1);
        postSynapticNeuron(N_VD6,1);
    break;
    case N_VD8:
        postSynapticNeuron(N_DD4,2);
        postSynapticNeuron(N_MVL15,-18);
        postSynapticNeuron(N_MVR15,-18);
        postSynapticNeuron(N_VA8,5);
    break;
    case N_VD9:
        postSynapticNeuron(N_MVL17,-10);
        postSynapticNeuron(N_MVL18,-10);
        postSynapticNeuron(N_MVR17,-10);
        postSynapticNeuron(N_MVR18,-10);
        postSynapticNeuron(N_PDER,1);
        postSynapticNeuron(N_VD10,5);
    break;
    case N_VD10:
        postSynapticNeuron(N_AVBR,1);
        postSynapticNeuron(N_DD5,2);
        postSynapticNeuron(N_DVC,4);
        postSynapticNeuron(N_MVL17,-9);
        postSynapticNeuron(N_MVL20,-9);
        postSynapticNeuron(N_MVR17,-9);
        postSynapticNeuron(N_MVR20,-9);
        postSynapticNeuron(N_VB9,2);
        postSynapticNeuron(N_VD9,5);
    break;
    case N_VD11:
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_MVL19,-9);
        postSynapticNeuron(N_MVL20,-9);
        postSynapticNeuron(N_MVR19,-9);
        postSynapticNeuron(N_MVR20,-9);
        postSynapticNeuron(N_VA11,1);
        postSynapticNeuron(N_VB10,1);
    break;
    case N_VD12:
        postSynapticNeuron(N_MVL19,-5);
        postSynapticNeuron(N_MVL21,-5);
        postSynapticNeuron(N_MVR19,-5);
        postSynapticNeuron(N_MVR22,-5);
        postSynapticNeuron(N_VA11,3);
        postSynapticNeuron(N_VA12,2);
        postSynapticNeuron(N_VB10,1);
        postSynapticNeuron(N_VB11,1);
    break;
    case N_VD13:
        postSynapticNeuron(N_AVAR,2);
        postSynapticNeuron(N_MVL21,-9);
        postSynapticNeuron(N_MVL22,-9);
        postSynapticNeuron(N_MVL23,-9);
        postSynapticNeuron(N_MVR21,-9);
        postSynapticNeuron(N_MVR22,-9);
        postSynapticNeuron(N_MVR23,-9);
        postSynapticNeuron(N_MVR24,-9);
        postSynapticNeuron(N_PVCL,1);
        postSynapticNeuron(N_PVCR,1);
        postSynapticNeuron(N_PVPL,2);
        postSynapticNeuron(N_VA12,1);
    break;
  }
}

void postSynapticNeuron(int neuron, int sum)
{
        postsynaptic[neuron][nextState] = postsynaptic[neuron][thisState] += sum;
}

void resetSynapticNeuron(int neuron)
{
        postsynaptic[neuron][thisState] = 0;
        postsynaptic[neuron][nextState] = 0;
}

/* Motor functions */
void motor(byte mode)
{
    switch(mode)
    {
        case STOP:
            digitalWrite (IN3, LOW);
            digitalWrite (IN4, LOW);
            digitalWrite (IN1, LOW);
            digitalWrite (IN2, LOW);
            analogWrite(ENB,0);
            analogWrite(ENA,0);
        break;
        case LEFT_STOP:
            digitalWrite (IN3, LOW);
            digitalWrite (IN4, LOW);
        break;
        case RIGHT_STOP:
            digitalWrite (IN1, LOW);
            digitalWrite (IN2, LOW);
        break;
        case RIGHT_FWD:
            digitalWrite (IN1, LOW);
            digitalWrite (IN2, HIGH);
        break;
        case RIGHT_BWD:
            digitalWrite (IN1, HIGH);
            digitalWrite (IN2, LOW);
        break;
        case LEFT_FWD:
            digitalWrite (IN3, LOW);
            digitalWrite (IN4, HIGH);
        break;
        case LEFT_BWD:
            digitalWrite (IN3, HIGH);
            digitalWrite (IN4, LOW);
        break;
        case RIGHT_ROT:
            digitalWrite (IN1, HIGH);
            digitalWrite (IN2, LOW);
            digitalWrite (IN3, LOW);
            digitalWrite (IN4, HIGH);
        break;
        case LEFT_ROT:
            digitalWrite (IN1, LOW);
            digitalWrite (IN2, HIGH);
            digitalWrite (IN3, HIGH);
            digitalWrite (IN4, LOW);
        break;
        case BWD:
            digitalWrite (IN1, HIGH);
            digitalWrite (IN2, LOW);
            digitalWrite (IN3, HIGH);
            digitalWrite (IN4, LOW);
        break;
        case FWD:
            digitalWrite (IN1, LOW);
            digitalWrite (IN2, HIGH);
            digitalWrite (IN3, LOW);
            digitalWrite (IN4, HIGH);
        break;
    }
}

void speed(int speed)
{
  analogWrite(ENB,speed);
  analogWrite(ENA,speed);
}

void right_speed(int speed)
{
  analogWrite(ENA,speed);      
}

void left_speed(int speed)
{
  analogWrite(ENB, speed);      
}

/* End Motor function */

/* Sensor function */

boolean sound()
{
  return digitalRead(SOUT);
}

long distance() 
{
  digitalWrite(TRIG,LOW);
  delayMicroseconds(5);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  time=pulseIn(ECHO, HIGH);
  dist=int(0.017*time);

  if(dist<MUSCLE_CM_ESTIMULATE)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
  
  return dist;
}

/* End Sensor Function */

/* Connectome functions */

void fireNeuron(int fneuron)
{
  if(fneuron != N_MVULVA)
  {
    dendriteAccumulate(fneuron);
  }
}

void runconnectome()
{
  for (int pscheck = 0; pscheck < 397; pscheck++)  {
      if((pscheck<N_MVL01 || pscheck>N_MVL23) && (pscheck<N_MDL01 || pscheck>N_MDL23) && (pscheck<N_MVR01 || pscheck>N_MVR23) && (pscheck<N_MDR01 || pscheck>N_MDR23) && abs(postsynaptic[pscheck][thisState])>THRESHOLD)
      {
        fireNeuron(pscheck);
        resetSynapticNeuron(pscheck);
      }
  }
  motorcontrol();
  thisState = (thisState==0) ? 1 : 0;
  nextState = (nextState==0) ? 1 : 0;
}

void motorcontrol()
{
  // accumulate left and right muscles and the accumulated values are
  // used to move the left and right motors of the robot

  for (int pscheck = 0; pscheck < 397; pscheck++)  {
    if((pscheck>=N_MVL07 && pscheck<=N_MVL23) || (pscheck>=N_MDL07 && pscheck<=N_MDL23))
    {
      accumleft += postsynaptic[pscheck][thisState];
      postsynaptic[pscheck][thisState] = 0;
    }
    else if((pscheck>=N_MVR07 && pscheck<=N_MVR23) || (pscheck>=N_MDR07 && pscheck<=N_MDR23))
    {
      accumright += postsynaptic[pscheck][thisState];
      postsynaptic[pscheck][thisState] = 0;
    }
  }

  // We turn the wheels according to the motor weight accumulation
  new_speed = abs(accumleft) + abs(accumright);

  speed((abs(new_speed)>150) ? 250 : 130);
  
  if(accumleft==0 && accumright==0)
  {
    motor(STOP);
  }
  else if(accumright<=0 && accumleft<0)
  {  
    turnratio = float(accumright) / float(accumleft);
    if(turnratio<=0.6)
    {
      motor(LEFT_ROT);
      delay(800);
    }
    else if(turnratio>=2)
    {
      motor(RIGHT_ROT);
      delay(800);
    }
    motor(BWD);
    delay(500);
  }
  else if(accumright<=0 && accumleft>=0)
  {
    motor(RIGHT_ROT);
    delay(800);
  }
  else if(accumright >= 0 && accumleft <= 0)
  {
    motor(LEFT_ROT);
    delay(800);
  }
  else if(accumright >= 0 && accumleft > 0)
  {    
    turnratio = float(accumright) / float(accumleft);
    if(turnratio<=0.6)
    {
      motor(LEFT_ROT);
      delay(800);
    }
    else if(turnratio>=2)
    { 
      motor(RIGHT_ROT);
      delay(800);
    }
    motor(FWD);
    delay(500);
  }
  else
  {
    motor(STOP);
  }
  
  accumleft = 0;
  accumright = 0;
  delay(500);
}

/* End Connectome functions */

void setup()
{
 pinMode(ENB, OUTPUT); 
 pinMode(ENA, OUTPUT); 
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(LED, OUTPUT);
 pinMode(TRIG, OUTPUT);
 pinMode(ECHO, INPUT);
 pinMode(SOUT, INPUT);
 
 createpostsynaptic();
 
 Serial.begin(9600);
}

void loop()
{
  if(distance()<MUSCLE_CM_ESTIMULATE)
  {
    //Serial.println("OBSTACLE");
    dendriteAccumulate(N_FLPR);
    dendriteAccumulate(N_FLPL);
    dendriteAccumulate(N_ASHL);
    dendriteAccumulate(N_ASHR);
    dendriteAccumulate(N_IL1VL);
    dendriteAccumulate(N_IL1VR);
    dendriteAccumulate(N_OLQDL);
    dendriteAccumulate(N_OLQDR);
    dendriteAccumulate(N_OLQVR);
    dendriteAccumulate(N_OLQVL);
  }
  if(sound()==0)
  {
    //Serial.println("FOOD");
    dendriteAccumulate(N_ADFL);
    dendriteAccumulate(N_ADFR);
    dendriteAccumulate(N_ASGR);
    dendriteAccumulate(N_ASGL);
    dendriteAccumulate(N_ASIL);
    dendriteAccumulate(N_ASIR);
    dendriteAccumulate(N_ASJR);
    dendriteAccumulate(N_ASJL);
  }

  runconnectome();
}
