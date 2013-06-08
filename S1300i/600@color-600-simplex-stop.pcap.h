/*************** COARSE CALIBRATION DEFAULT PAYLOAD *************/
static unsigned char coarseCalData_S1300I[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x27, 0x00, 0x27, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/*************** S1300i 600dpi *************/
/* 1b d1 (set window) before coarse cal (c6) */
static unsigned char setWindowCoarseCal_S1300I_600[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x02, 0x58, 0x02, 0x58, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x02, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/* 1b d1 (set window) before fine cal (d2) */
static unsigned char setWindowFineCal_S1300I_600[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x02, 0x58, 0x03, 0x20, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
0x00, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x02, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/* 1b d1 (set window) before gain/offset tables (c3) */
static unsigned char setWindowSendCal_S1300I_600[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x02, 0x58, 0x03, 0x20, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0xc0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x02, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/* 1b c3 (gain?) command header */
static unsigned char sendCal1Header_S1300I_600[] = { /* plus 96384 (0x17880) data bytes */
0x5e, 0x04, 0x5e, 0x04, 0x5e, 0x04, 0x5e, 0x04, 0x5e, 0x04, 0x5e, 0x04, 0x00, 0x03
};
/* 1b c4 (offset?) command header */
static unsigned char sendCal2Header_S1300I_600[] = { /* plus 96384 (0x17880) data bytes */
0xb9, 0x31, 0xb9, 0x31, 0xb9, 0x31, 0x07
};
/* 1b d1 (set window) before scan (d6) */
static unsigned char setWindowScan_S1300I_600[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x02, 0x58, 0x02, 0x58, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x40, 0x00, 0x00, 0x24, 0x4d, 0x00, 0x00,
0x00, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x80, 0x01, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};