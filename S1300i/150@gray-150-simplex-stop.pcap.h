/*************** COARSE CALIBRATION DEFAULT PAYLOAD *************/
static unsigned char coarseCalData_S1300I[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x27, 0x00, 0x27, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/*************** S1300i 150dpi *************/
/* 1b d1 (set window) before coarse cal (c6) */
static unsigned char setWindowCoarseCal_S1300I_150[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x01, 0x2c, 0x01, 0x2c, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/* 1b d1 (set window) before fine cal (d2) */
static unsigned char setWindowFineCal_S1300I_150[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x01, 0x2c, 0x03, 0x20, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xa0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
0x00, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/* 1b d1 (set window) before gain/offset tables (c3) */
static unsigned char setWindowSendCal_S1300I_150[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x01, 0x2c, 0x03, 0x20, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/* 1b c3 (gain?) command header */
static unsigned char sendCal1Header_S1300I_150[] = { /* plus 48192 (0xbc40) data bytes */
0xc1, 0x05, 0xc1, 0x05, 0xc1, 0x05, 0xc1, 0x05, 0xc1, 0x05, 0xc1, 0x05, 0x00, 0x04
};
/* 1b c4 (offset?) command header */
static unsigned char sendCal2Header_S1300I_150[] = { /* plus 48192 (0xbc40) data bytes */
0xc7, 0x35, 0xc7, 0x35, 0xc7, 0x35, 0x07
};
/* 1b d1 (set window) before scan (d6) */
static unsigned char setWindowScan_S1300I_150[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x96, 0x00, 0x96, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x50, 0x00, 0x00, 0x09, 0x15, 0x00, 0x00,
0x00, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x80, 0x01, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
